
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int y ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*,size_t) ;

int
FUNC_6(int VAR_1, char **VAR_2)
{
 char VAR_3[8192];
 char VAR_4[2] = { 'y', '\n' };
 char * VAR_5 = VAR_4;
 size_t VAR_6 = 0;
 size_t VAR_7 = sizeof(VAR_4);
 size_t VAR_8;
 ssize_t VAR_9;

 if (FUNC_1() < 0 || FUNC_0() < 0)
  FUNC_2(1, "capsicum");

 if (VAR_1 > 1) {
  VAR_5 = VAR_2[1];
  VAR_7 = FUNC_4(VAR_5) + 1;
  VAR_5[VAR_7 - 1] = '\n';
 }

 if (VAR_7 <= sizeof(VAR_3)) {
  while (VAR_6 < sizeof(VAR_3) - VAR_7) {
   FUNC_3(VAR_3 + VAR_6, VAR_5, VAR_7);
   VAR_6 += VAR_7;
  }
  VAR_5 = VAR_3;
  VAR_7 = VAR_6;
 }

 VAR_8 = VAR_7;
 while ((VAR_9 = FUNC_5(VAR_0, VAR_5 + (VAR_7 - VAR_8), VAR_8)) > 0)
  if ((VAR_8 -= VAR_9) == 0)
   VAR_8 = VAR_7;

 FUNC_2(1, "stdout");

}
