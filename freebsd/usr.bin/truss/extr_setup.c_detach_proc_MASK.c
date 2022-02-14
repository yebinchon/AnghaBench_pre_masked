
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(pid_t VAR_3)
{


 FUNC_1(VAR_3, VAR_2);
 if (FUNC_3(VAR_3, ((void*)0), 0) < 0)
  FUNC_0(1, "Unexpected stop in waitpid");

 if (FUNC_2(VAR_0, VAR_3, (caddr_t)1, 0) < 0)
  FUNC_0(1, "Can not detach the process");

 FUNC_1(VAR_3, VAR_1);
}
