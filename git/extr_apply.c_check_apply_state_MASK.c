
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apply_state {int check_index; int apply; scalar_t__ apply_verbosity; int saved_warn_routine; int saved_error_routine; scalar_t__ unsafe_paths; scalar_t__ ita_only; scalar_t__ cached; scalar_t__ fake_ancestor; scalar_t__ check; scalar_t__ summary; scalar_t__ numstat; scalar_t__ diffstat; scalar_t__ apply_with_reject; scalar_t__ threeway; } ;
struct TYPE_2__ {int have_repository; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_6(struct apply_state *VAR_5, int VAR_6)
{
 int VAR_7 = !VAR_1->have_repository;

 if (VAR_5->apply_with_reject && VAR_5->threeway)
  return FUNC_1(FUNC_0("--reject and --3way cannot be used together."));
 if (VAR_5->cached && VAR_5->threeway)
  return FUNC_1(FUNC_0("--cached and --3way cannot be used together."));
 if (VAR_5->threeway) {
  if (VAR_7)
   return FUNC_1(FUNC_0("--3way outside a repository"));
  VAR_5->check_index = 1;
 }
 if (VAR_5->apply_with_reject) {
  VAR_5->apply = 1;
  if (VAR_5->apply_verbosity == VAR_2)
   VAR_5->apply_verbosity = VAR_4;
 }
 if (!VAR_6 && (VAR_5->diffstat || VAR_5->numstat || VAR_5->summary || VAR_5->check || VAR_5->fake_ancestor))
  VAR_5->apply = 0;
 if (VAR_5->check_index && VAR_7)
  return FUNC_1(FUNC_0("--index outside a repository"));
 if (VAR_5->cached) {
  if (VAR_7)
   return FUNC_1(FUNC_0("--cached outside a repository"));
  VAR_5->check_index = 1;
 }
 if (VAR_5->ita_only && (VAR_5->check_index || VAR_7))
  VAR_5->ita_only = 0;
 if (VAR_5->check_index)
  VAR_5->unsafe_paths = 0;

 if (VAR_5->apply_verbosity <= VAR_3) {
  VAR_5->saved_error_routine = FUNC_2();
  VAR_5->saved_warn_routine = FUNC_3();
  FUNC_4(VAR_0);
  FUNC_5(VAR_0);
 }

 return 0;
}
