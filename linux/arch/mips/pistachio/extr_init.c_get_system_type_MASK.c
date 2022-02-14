
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (void const*) ;

const char *FUNC_1(void)
{
 u32 VAR_1;
 const char *VAR_2;

 VAR_1 = FUNC_0((const void *)VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_2 = "IMG Pistachio SoC (B0)";
  break;

 case 129:
  VAR_2 = "IMG Pistachio SoC (A1)";
  break;

 default:
  VAR_2 = "IMG Pistachio SoC";
  break;
 }

 return VAR_2;
}
