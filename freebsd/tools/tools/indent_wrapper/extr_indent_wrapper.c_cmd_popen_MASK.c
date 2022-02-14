
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(char *VAR_3, FILE **VAR_4)
{
 char *VAR_5[4];
 int VAR_6[4];
 int VAR_7;

 if (FUNC_5(VAR_6) < 0)
  goto error;

 if (FUNC_5(VAR_6 + 2) < 0) {
  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_6[1]);
  goto error;
 }
 VAR_5[0] = "sh";
 VAR_5[1] = "-c";
 VAR_5[2] = VAR_3;
 VAR_5[3] = ((void*)0);

 switch ((VAR_7 = FUNC_6())) {
 case -1:
  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_6[1]);
  FUNC_0(VAR_6[2]);
  FUNC_0(VAR_6[3]);
  goto error;
 case 0:
  FUNC_1(VAR_6[1], VAR_1);
  FUNC_1(VAR_6[2], VAR_0);
  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_6[3]);
  FUNC_2("/bin/sh", VAR_5, VAR_2);
  FUNC_3(127);
 default:
  break;
 }
 VAR_4[0] = FUNC_4(VAR_6[3], "w");
 VAR_4[1] = FUNC_4(VAR_6[0], "r");
 FUNC_0(VAR_6[1]);
 FUNC_0(VAR_6[2]);
 return;
error:
 VAR_4[0] = VAR_4[1] = ((void*)0);
}
