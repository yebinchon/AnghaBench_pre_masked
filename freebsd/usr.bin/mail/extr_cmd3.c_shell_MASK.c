
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int,int,char*,char*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*) ;

int
FUNC_6(char *VAR_4)
{
 sig_t VAR_5 = FUNC_3(VAR_1, VAR_2);
 char *VAR_6;
 char VAR_7[VAR_0];

 if (FUNC_4(VAR_7, VAR_4, sizeof(VAR_7)) >= sizeof(VAR_7))
  return (1);
 if (FUNC_0(VAR_7, sizeof(VAR_7)) < 0)
  return (1);
 if ((VAR_6 = FUNC_5("SHELL")) == ((void*)0))
  VAR_6 = VAR_3;
 (void)FUNC_2(VAR_6, 0, -1, -1, "-c", VAR_7, ((void*)0));
 (void)FUNC_3(VAR_1, VAR_5);
 FUNC_1("!\n");
 return (0);
}
