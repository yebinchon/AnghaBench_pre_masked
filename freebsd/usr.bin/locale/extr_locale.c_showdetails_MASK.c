
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char**,int*,int*,int*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_5(const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8;

 if (FUNC_2(VAR_3, &VAR_8, &VAR_5, &VAR_4, &VAR_7) == 0) {




  FUNC_0(VAR_2, "Unknown keyword: `%s'\n", VAR_3);
  return;
 }

 if (VAR_0) {
  if (VAR_1)
   FUNC_4("%-20s ", FUNC_3(VAR_5));
  else
   FUNC_4("%-20s\t%s\n", VAR_3, FUNC_3(VAR_5));
 }

 if (VAR_1) {
  switch (VAR_4) {
  case 130:
   VAR_6 = (char)*VAR_8;
   FUNC_4("%s=%d\n", VAR_3, VAR_6);
   break;
  case 129:
   FUNC_4("%s=\"%s\"\n", VAR_3, VAR_8);
   break;
  case 128:
   FUNC_4("%s=%s\n", VAR_3, VAR_8);
   break;
  }
 }

 if (!VAR_0 && !VAR_1) {
  switch (VAR_4) {
  case 130:
   VAR_6 = (char)*VAR_8;
   FUNC_4("%d\n", VAR_6);
   break;
  case 129:
  case 128:
   FUNC_4("%s\n", VAR_8);
   break;
  }
 }

 if (VAR_7)
  FUNC_1(VAR_8);
}
