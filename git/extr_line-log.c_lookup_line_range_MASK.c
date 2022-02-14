
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int line_log_data; } ;
struct line_log_data {int ranges; struct line_log_data* next; } ;
struct commit {int object; } ;


 struct line_log_data* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct line_log_data *FUNC_2(struct rev_info *VAR_0,
            struct commit *VAR_1)
{
 struct line_log_data *VAR_2 = ((void*)0);
 struct line_log_data *VAR_3;

 VAR_2 = FUNC_0(&VAR_0->line_log_data, &VAR_1->object);

 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next)
  FUNC_1(&VAR_3->ranges);

 return VAR_2;
}
