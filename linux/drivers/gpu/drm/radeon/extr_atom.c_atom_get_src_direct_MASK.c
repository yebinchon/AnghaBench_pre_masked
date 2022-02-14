
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint32_t FUNC_3(atom_exec_context *VAR_0, uint8_t VAR_1, int *VAR_2)
{
 uint32_t VAR_3 = 0xCDCDCDCD;

 switch (VAR_1) {
 case 131:
  VAR_3 = FUNC_1(*VAR_2);
  (*VAR_2) += 4;
  break;
 case 130:
 case 128:
 case 129:
  VAR_3 = FUNC_0(*VAR_2);
  (*VAR_2) += 2;
  break;
 case 135:
 case 132:
 case 134:
 case 133:
  VAR_3 = FUNC_2(*VAR_2);
  (*VAR_2)++;
  break;
 }
 return VAR_3;
}
