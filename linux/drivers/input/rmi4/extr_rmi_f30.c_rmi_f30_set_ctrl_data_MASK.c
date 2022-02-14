
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_f30_ctrl_data {int address; int length; int * regs; } ;



__attribute__((used)) static void FUNC_0(struct rmi_f30_ctrl_data *VAR_0,
      int *VAR_1, int VAR_2, u8 **VAR_3)
{
 VAR_0->address = *VAR_1;
 VAR_0->length = VAR_2;
 VAR_0->regs = *VAR_3;
 *VAR_1 += VAR_2;
 *VAR_3 += VAR_2;
}
