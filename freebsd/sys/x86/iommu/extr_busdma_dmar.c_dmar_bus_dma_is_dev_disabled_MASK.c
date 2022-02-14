
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int,int,int,int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static bool
FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[128], *VAR_5;
 int VAR_6;
 bool VAR_7;
 static const char VAR_8[] = "bounce";
 static const char VAR_9[] = "dmar";

 VAR_6 = 0;
 VAR_5 = FUNC_1("hw.busdma.default");
 if (VAR_5 != ((void*)0)) {
  if (FUNC_3(VAR_5, VAR_8) == 0)
   VAR_6 = 1;
  else if (FUNC_3(VAR_5, VAR_9) == 0)
   VAR_6 = 0;
  FUNC_0(VAR_5);
 }

 FUNC_2(VAR_4, sizeof(VAR_4), "hw.busdma.pci%d.%d.%d.%d",
     VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_6 != 0);
 if (FUNC_3(VAR_5, VAR_8) == 0)
  VAR_7 = 1;
 else if (FUNC_3(VAR_5, VAR_9) == 0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_6 != 0;
 FUNC_0(VAR_5);
 return (VAR_7);
}
