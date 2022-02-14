
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*,char*,char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void
FUNC_10(char **VAR_6)
{
 const char *VAR_7;

 VAR_7 = FUNC_6("SHELL");
 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_0;

 (void)FUNC_0(VAR_4);
 (void)FUNC_4(VAR_3);
 FUNC_5(VAR_1);
 FUNC_7(VAR_5);
 FUNC_8("SCRIPT", VAR_2, 1);
 if (VAR_6[0]) {
  FUNC_2(VAR_6[0], VAR_6);
  FUNC_9("%s", VAR_6[0]);
 } else {
  FUNC_1(VAR_7, VAR_7, "-i", (char *)((void*)0));
  FUNC_9("%s", VAR_7);
 }
 FUNC_3(1);
}
