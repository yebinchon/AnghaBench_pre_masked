
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_log_data {struct line_log_data* next; } ;


 int FUNC_0 (struct line_log_data*) ;
 int FUNC_1 (struct line_log_data*) ;

__attribute__((used)) static void FUNC_2(struct line_log_data *VAR_0)
{
 while (VAR_0) {
  struct line_log_data *VAR_1 = VAR_0->next;
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
