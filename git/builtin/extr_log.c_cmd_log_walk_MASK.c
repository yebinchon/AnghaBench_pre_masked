
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ check_failed; } ;
struct TYPE_6__ {int close_file; int needed_rename_limit; int degraded_cc_to_c; int output_format; TYPE_1__ flags; int file; } ;
struct rev_info {scalar_t__ max_count; TYPE_3__ diffopt; int reflog_info; scalar_t__ early_output; } ;
struct commit {int * parents; } ;
struct TYPE_5__ {int parsed_objects; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rev_info*) ;
 int FUNC_5 (int ,struct commit*) ;
 int FUNC_6 (int *) ;
 struct commit* FUNC_7 (struct rev_info*) ;
 int FUNC_8 (struct rev_info*,struct commit*) ;
 scalar_t__ FUNC_9 (struct rev_info*) ;
 int FUNC_10 () ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_11(struct rev_info *VAR_2)
{
 struct commit *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = VAR_2->diffopt.close_file;

 if (VAR_2->early_output)
  FUNC_10();

 if (FUNC_9(VAR_2))
  FUNC_1(FUNC_0("revision walk setup failed"));

 if (VAR_2->early_output)
  FUNC_4(VAR_2);






 VAR_2->diffopt.close_file = 0;
 while ((VAR_3 = FUNC_7(VAR_2)) != ((void*)0)) {
  if (!FUNC_8(VAR_2, VAR_3) && VAR_2->max_count >= 0)




   VAR_2->max_count++;
  if (!VAR_2->reflog_info) {




   FUNC_5(VAR_1->parsed_objects,
        VAR_3);
   FUNC_6(VAR_3->parents);
   VAR_3->parents = ((void*)0);
  }
  if (VAR_4 < VAR_2->diffopt.needed_rename_limit)
   VAR_4 = VAR_2->diffopt.needed_rename_limit;
  if (VAR_2->diffopt.degraded_cc_to_c)
   VAR_5 = 1;
 }
 VAR_2->diffopt.degraded_cc_to_c = VAR_5;
 VAR_2->diffopt.needed_rename_limit = VAR_4;
 if (VAR_6)
  FUNC_3(VAR_2->diffopt.file);

 if (VAR_2->diffopt.output_format & VAR_0 &&
     VAR_2->diffopt.flags.check_failed) {
  return 02;
 }
 return FUNC_2(&VAR_2->diffopt, 0);
}
