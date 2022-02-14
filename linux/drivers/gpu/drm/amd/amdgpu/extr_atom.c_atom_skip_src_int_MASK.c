
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;
__attribute__((used)) static void FUNC_0(atom_exec_context *VAR_0, uint8_t VAR_1, int *VAR_2)
{
 uint32_t VAR_3 = (VAR_1 >> 3) & 7, VAR_4 = VAR_1 & 7;
 switch (VAR_4) {
 case 137:
 case 142:
  (*VAR_2) += 2;
  break;
 case 139:
 case 140:
 case 138:
 case 136:
 case 143:
  (*VAR_2)++;
  break;
 case 141:
  switch (VAR_3) {
  case 131:
   (*VAR_2) += 4;
   return;
  case 130:
  case 128:
  case 129:
   (*VAR_2) += 2;
   return;
  case 135:
  case 132:
  case 134:
  case 133:
   (*VAR_2)++;
   return;
  }
  return;
 }
}
