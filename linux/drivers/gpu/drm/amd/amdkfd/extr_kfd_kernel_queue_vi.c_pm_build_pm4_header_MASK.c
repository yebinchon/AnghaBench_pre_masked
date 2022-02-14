
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union PM4_MES_TYPE_3_HEADER {unsigned int u32All; unsigned int opcode; size_t count; int type; } ;


 int VAR_0 ;

unsigned int FUNC_0(unsigned int VAR_1, size_t VAR_2)
{
 union PM4_MES_TYPE_3_HEADER VAR_3;

 VAR_3.u32All = 0;
 VAR_3.opcode = VAR_1;
 VAR_3.count = VAR_2 / 4 - 2;
 VAR_3.type = VAR_0;

 return VAR_3.u32All;
}
