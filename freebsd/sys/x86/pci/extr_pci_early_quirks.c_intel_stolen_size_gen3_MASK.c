
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint32_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static vm_paddr_t
FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 vm_paddr_t VAR_6;

 VAR_5 = FUNC_1(0, 0, 0, VAR_0, 2);
 VAR_6 = VAR_5 & VAR_1;

 switch (VAR_6) {
 case 137:
  return (FUNC_0(1));
 case 135:
  return (FUNC_0(4));
 case 134:
  return (FUNC_0(8));
 case 138:
  return (FUNC_0(16));
 case 136:
  return (FUNC_0(32));
 case 133:
  return (FUNC_0(48));
 case 132:
  return (FUNC_0(64));
 case 140:
  return (FUNC_0(128));
 case 139:
  return (FUNC_0(256));
 case 128:
  return (FUNC_0(96));
 case 131:
  return (FUNC_0(160));
 case 130:
  return (FUNC_0(224));
 case 129:
  return (FUNC_0(352));
 }
 return (0);
}
