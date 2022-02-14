
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct line_log_data {struct line_log_data* next; } ;


 int FUNC_0 (struct rev_info*,struct line_log_data*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_0, struct line_log_data *VAR_1)
{
 FUNC_1(VAR_0->diffopt.file, "%s\n", FUNC_2(&VAR_0->diffopt));
 while (VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  VAR_1 = VAR_1->next;
 }
}
