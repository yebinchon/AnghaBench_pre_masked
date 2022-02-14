
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int diffopt; } ;
struct line_log_data {int dummy; } ;
struct diff_queue_struct {int dummy; } ;
struct commit {TYPE_1__* parents; } ;
struct TYPE_2__ {struct commit* item; } ;


 int FUNC_0 (struct rev_info*,struct commit*,struct line_log_data*) ;
 int FUNC_1 (struct line_log_data*) ;
 int FUNC_2 (struct line_log_data**,struct rev_info*,struct diff_queue_struct*,struct line_log_data*) ;
 int FUNC_3 (struct line_log_data*,int *,struct diff_queue_struct*,struct commit*,struct commit*) ;

__attribute__((used)) static int FUNC_4(struct rev_info *VAR_0, struct commit *VAR_1,
       struct line_log_data *VAR_2)
{
 struct commit *VAR_3 = ((void*)0);
 struct diff_queue_struct VAR_4;
 struct line_log_data *VAR_5;
 int VAR_6;

 if (VAR_1->parents)
  VAR_3 = VAR_1->parents->item;

 FUNC_3(VAR_2, &VAR_0->diffopt, &VAR_4, VAR_1, VAR_3);
 VAR_6 = FUNC_2(&VAR_5, VAR_0, &VAR_4, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_3, VAR_5);
 FUNC_1(VAR_5);
 return VAR_6;
}
