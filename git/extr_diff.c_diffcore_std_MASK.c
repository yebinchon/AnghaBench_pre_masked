
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oid_array {scalar_t__ nr; int oid; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct TYPE_2__ {int has_changes; int diff_from_contents; } ;
struct diff_options {scalar_t__ repo; int break_opt; int pickaxe_opts; scalar_t__ found_follow; TYPE_1__ flags; scalar_t__ orderfile; scalar_t__ detect_rename; scalar_t__ skip_stat_unmatch; } ;
struct diff_filepair {int two; int one; } ;


 int VAR_0 ;
 struct oid_array VAR_1 ;
 int FUNC_0 (scalar_t__,struct oid_array*,int ) ;
 struct diff_queue_struct VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct diff_options*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct diff_options*) ;
 int FUNC_7 (struct diff_options*) ;
 int FUNC_8 (struct diff_options*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct oid_array*) ;
 int FUNC_11 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

void FUNC_12(struct diff_options *VAR_4)
{
 if (VAR_4->repo == VAR_3 && FUNC_9()) {



  int VAR_5;
  struct diff_queue_struct *VAR_6 = &VAR_2;
  struct oid_array VAR_7 = VAR_1;

  for (VAR_5 = 0; VAR_5 < VAR_6->nr; VAR_5++) {
   struct diff_filepair *VAR_8 = VAR_6->queue[VAR_5];
   FUNC_0(VAR_4->repo, &VAR_7, VAR_8->one);
   FUNC_0(VAR_4->repo, &VAR_7, VAR_8->two);
  }
  if (VAR_7.nr)



   FUNC_11(VAR_4->repo,
         VAR_7.oid, VAR_7.nr);
  FUNC_10(&VAR_7);
 }


 if (VAR_4->skip_stat_unmatch)
  FUNC_8(VAR_4);
 if (!VAR_4->found_follow) {

  if (VAR_4->break_opt != -1)
   FUNC_3(VAR_4->repo,
           VAR_4->break_opt);
  if (VAR_4->detect_rename)
   FUNC_7(VAR_4);
  if (VAR_4->break_opt != -1)
   FUNC_4();
 }
 if (VAR_4->pickaxe_opts & VAR_0)
  FUNC_6(VAR_4);
 if (VAR_4->orderfile)
  FUNC_5(VAR_4->orderfile);
 if (!VAR_4->found_follow)

  FUNC_1();
 FUNC_2(VAR_4);

 if (VAR_2.nr && !VAR_4->flags.diff_from_contents)
  VAR_4->flags.has_changes = 1;
 else
  VAR_4->flags.has_changes = 0;

 VAR_4->found_follow = 0;
}
