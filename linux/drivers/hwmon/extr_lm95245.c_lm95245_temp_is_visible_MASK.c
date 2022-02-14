
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_0, u32 VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 133:
 case 131:
 case 130:
 case 136:
 case 134:
  return 0444;
 case 128:
 case 132:
 case 137:
 case 129:
  return 0644;
 case 135:
  return (VAR_2 == 0) ? 0644 : 0444;
 default:
  return 0;
 }
}
