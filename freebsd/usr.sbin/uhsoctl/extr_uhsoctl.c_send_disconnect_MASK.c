
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_3)
{
 char VAR_4[128];
 FILE *VAR_5;
 pid_t VAR_6;
 int VAR_7;

 FUNC_5(VAR_4, 127, VAR_0, VAR_3);
 VAR_5 = FUNC_1(VAR_4, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_6("Cannot open %s", VAR_4);
  return;
 }

 VAR_7 = FUNC_3(VAR_5, "%d", &VAR_6);
 FUNC_0(VAR_5);
 if (VAR_7 != 1) {
  FUNC_7("unable to read daemon pid");
  return;
 }



 FUNC_4(VAR_6, VAR_1);
}
