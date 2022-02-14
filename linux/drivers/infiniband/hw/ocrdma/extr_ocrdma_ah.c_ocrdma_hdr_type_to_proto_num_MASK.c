
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;

__attribute__((used)) static u16 FUNC_1(int VAR_1, u8 VAR_2)
{
 switch (VAR_2) {
 case 130:
  return (u16)VAR_0;
 case 129:
  return (u16)0x0800;
 case 128:
  return (u16)0x86dd;
 default:
  FUNC_0("ocrdma%d: Invalid network header\n", VAR_1);
  return 0;
 }
}
