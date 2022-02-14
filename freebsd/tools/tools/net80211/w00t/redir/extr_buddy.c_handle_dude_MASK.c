
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,int,int ) ;

void FUNC_3(int VAR_0, int VAR_1)
{
 char VAR_2[4096];
 int VAR_3;

 while (1) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, sizeof(VAR_2), 0);
  if (VAR_3 == -1)
   FUNC_0(1, "recv()");

  if (FUNC_1(VAR_0, VAR_2, VAR_3) == -1)
   return;
 }
}
