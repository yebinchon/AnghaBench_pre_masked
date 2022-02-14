
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct trussinfo*,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;

void
FUNC_5(struct trussinfo *VAR_1, pid_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 10;
 do {
  VAR_3 = FUNC_2(VAR_0, VAR_2, ((void*)0), 0);
  FUNC_3(200);
 } while (VAR_3 && VAR_4-- > 0);
 if (VAR_3)
  FUNC_0(1, "can not attach to target process");

 if (FUNC_4(VAR_2, ((void*)0), 0) < 0)
  FUNC_0(1, "Unexpect stop in waitpid");

 FUNC_1(VAR_1, VAR_2, 0);
}
