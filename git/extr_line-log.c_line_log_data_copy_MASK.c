
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_log_data {struct line_log_data* next; } ;


 int FUNC_0 (struct line_log_data*) ;
 struct line_log_data* FUNC_1 (struct line_log_data*) ;

__attribute__((used)) static struct line_log_data *
FUNC_2(struct line_log_data *VAR_0)
{
 struct line_log_data *VAR_1 = ((void*)0);
 struct line_log_data *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

 FUNC_0(VAR_0);
 VAR_1 = VAR_2 = VAR_3 = FUNC_1(VAR_0);
 VAR_0 = VAR_0->next;
 while (VAR_0) {
  VAR_2 = FUNC_1(VAR_0);
  VAR_3->next = VAR_2;
  VAR_3 = VAR_2;
  VAR_0 = VAR_0->next;
 }

 return VAR_1;
}
