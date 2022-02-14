
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_label {int lab; int * addr; } ;



void FUNC_0(struct uasm_label **VAR_0, u32 *VAR_1, int VAR_2)
{
 (*VAR_0)->addr = VAR_1;
 (*VAR_0)->lab = VAR_2;
 (*VAR_0)++;
}
