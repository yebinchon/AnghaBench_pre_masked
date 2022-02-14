
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct line_log_data {int dummy; } ;
struct diff_queue_struct {int dummy; } ;
struct diff_options {int pathspec; scalar_t__ detect_rename; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct commit*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (struct object_id*,struct object_id*,char*,struct diff_options*) ;
 int FUNC_5 (struct diff_options*) ;
 int FUNC_6 (struct line_log_data*,int) ;
 struct object_id* FUNC_7 (struct commit*) ;
 int FUNC_8 (struct diff_queue_struct*,int *) ;
 int FUNC_9 (int *,struct line_log_data*) ;
 int FUNC_10 (int *,struct line_log_data*) ;

__attribute__((used)) static void FUNC_11(struct line_log_data *VAR_1,
   struct diff_options *VAR_2,
   struct diff_queue_struct *VAR_3,
   struct commit *VAR_4, struct commit *VAR_5)
{
 struct object_id *VAR_6, *VAR_7;

 FUNC_1(VAR_4);

 VAR_6 = FUNC_7(VAR_4);
 VAR_7 = VAR_5 ? FUNC_7(VAR_5) : ((void*)0);

 if (VAR_2->detect_rename &&
     !FUNC_10(&VAR_2->pathspec, VAR_1)) {
  FUNC_2(&VAR_2->pathspec);
  FUNC_9(&VAR_2->pathspec, VAR_1);
 }
 FUNC_0(&VAR_0);
 FUNC_4(VAR_7, VAR_6, "", VAR_2);
 if (VAR_2->detect_rename && FUNC_3()) {

  FUNC_2(&VAR_2->pathspec);
  FUNC_0(&VAR_0);

  FUNC_4(VAR_7, VAR_6, "", VAR_2);

  FUNC_6(VAR_1, 1);
  FUNC_5(VAR_2);
  FUNC_6(VAR_1, 0);
 }
 FUNC_8(VAR_3, &VAR_0);
}
