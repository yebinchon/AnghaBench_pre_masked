
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {char* data; } ;
struct mc_request {TYPE_1__ request; } ;


 struct task_struct* FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mc_request*,char*,int,int ) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mc_request*,int ,struct task_struct*) ;

void FUNC_6(struct mc_request *VAR_2)
{
 char *VAR_3 = VAR_2->request.data;
 int VAR_4= -1;
 struct task_struct *VAR_5 = ((void*)0);







 VAR_3 += FUNC_4("stack");
 VAR_3 = FUNC_2(VAR_3);





 if (FUNC_3(VAR_3, "%d", &VAR_4) == 0) {
  FUNC_1(VAR_2, "Please specify a pid", 1, 0);
  return;
 }

 VAR_5 = FUNC_0(VAR_4, &VAR_0);
 if ((VAR_5 == ((void*)0)) || (VAR_4 == 0)) {
  FUNC_1(VAR_2, "Couldn't find that pid", 1, 0);
  return;
 }
 FUNC_5(VAR_2, VAR_1, VAR_5);
}
