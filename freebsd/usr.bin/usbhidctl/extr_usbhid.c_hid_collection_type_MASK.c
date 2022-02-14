
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int num ;
typedef int int32_t ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int32_t VAR_0)
{
 static char VAR_1[8];

 switch (VAR_0) {
 case 0: return ("Physical");
 case 1: return ("Application");
 case 2: return ("Logical");
 case 3: return ("Report");
 case 4: return ("Named_Array");
 case 5: return ("Usage_Switch");
 case 6: return ("Usage_Modifier");
 }
 FUNC_0(VAR_1, sizeof(VAR_1), "0x%02x", VAR_0);
 return (VAR_1);
}
