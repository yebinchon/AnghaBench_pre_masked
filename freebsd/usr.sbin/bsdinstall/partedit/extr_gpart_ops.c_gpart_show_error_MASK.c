
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,int ,int ,int ) ;
 int FUNC_1 (char*,char*,char const*,char*,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char VAR_5[512];
 int VAR_6;

 if (VAR_2 == ((void*)0))
  VAR_2 = "";

 VAR_6 = FUNC_3(VAR_3, &VAR_4, 0);
 if (VAR_4 != VAR_3) {
  while (VAR_4[0] == ' ')
   VAR_4++;
  if (VAR_4[0] != '\0')
   FUNC_1(VAR_5, "%s%s. %s", VAR_2,
       FUNC_2(VAR_6), VAR_4);
  else
   FUNC_1(VAR_5, "%s%s", VAR_2, FUNC_2(VAR_6));
 } else {
  FUNC_1(VAR_5, "%s%s", VAR_2, VAR_4);
 }

 FUNC_0(VAR_1, VAR_5, 0, 0, VAR_0);
}
