
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int lab; int type; int * addr; } ;


 int VAR_0 ;

void FUNC_0(struct uasm_reloc **VAR_1, u32 *VAR_2, int VAR_3)
{
 (*VAR_1)->addr = VAR_2;
 (*VAR_1)->type = VAR_0;
 (*VAR_1)->lab = VAR_3;
 (*VAR_1)++;
}
