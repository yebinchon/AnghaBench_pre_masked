
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1)
{
 char *VAR_2;
 char VAR_3[7], VAR_4[7], VAR_5[14];

 VAR_2 = FUNC_1(VAR_1, "VEN_");
 if (VAR_2 == ((void*)0))
  return;
 VAR_2 += 4;
 FUNC_2(VAR_3, "0x");
 FUNC_3(VAR_3, VAR_2, 4);
 VAR_2 = FUNC_1(VAR_1, "DEV_");
 if (VAR_2 == ((void*)0))
  return;
 VAR_2 += 4;
 FUNC_2(VAR_4, "0x");
 FUNC_3(VAR_4, VAR_2, 4);
 if (VAR_2 == ((void*)0))
  return;
 VAR_2 = FUNC_1(VAR_1, "SUBSYS_");
 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_5, "0x00000000");
 else {
  VAR_2 += 7;
  FUNC_2(VAR_5, "0x");
  FUNC_3(VAR_5, VAR_2, 8);
 }

 FUNC_0(VAR_0, "\t\\\n\t{ %s, %s, %s, ", VAR_3, VAR_4, VAR_5);
 return;
}
