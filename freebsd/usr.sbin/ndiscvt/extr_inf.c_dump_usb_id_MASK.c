
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1)
{
 char *VAR_2;
 char VAR_3[7], VAR_4[7];

 VAR_2 = FUNC_1(VAR_1, "VID_");
 if (VAR_2 == ((void*)0))
  return;
 VAR_2 += 4;
 FUNC_2(VAR_3, "0x");
 FUNC_3(VAR_3, VAR_2, 4);
 VAR_2 = FUNC_1(VAR_1, "PID_");
 if (VAR_2 == ((void*)0))
  return;
 VAR_2 += 4;
 FUNC_2(VAR_4, "0x");
 FUNC_3(VAR_4, VAR_2, 4);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_0, "\t\\\n\t{ %s, %s, ", VAR_3, VAR_4);
}
