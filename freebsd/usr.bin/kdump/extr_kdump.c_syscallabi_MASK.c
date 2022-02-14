
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef enum sysdecode_abi { ____Placeholder_sysdecode_abi } sysdecode_abi ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum sysdecode_abi
FUNC_0(u_int VAR_7)
{

 if (VAR_7 == 0)
  return (VAR_3);
 switch (VAR_7 & VAR_0) {
 case 129:
  return (VAR_3);
 case 128:

  if (VAR_7 & VAR_1)
   return (VAR_5);

  return (VAR_4);
 case 130:
  return (VAR_2);
 default:
  return (VAR_6);
 }
}
