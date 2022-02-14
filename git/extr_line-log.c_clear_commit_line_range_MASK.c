
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int line_log_data; } ;
struct line_log_data {int dummy; } ;
struct commit {int object; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct line_log_data*) ;
 struct line_log_data* FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_0, struct commit *VAR_1)
{
 struct line_log_data *VAR_2;
 VAR_2 = FUNC_2(&VAR_0->line_log_data, &VAR_1->object);
 if (!VAR_2)
  return;
 FUNC_1(VAR_2);
 FUNC_0(&VAR_0->line_log_data, &VAR_1->object, ((void*)0));
}
