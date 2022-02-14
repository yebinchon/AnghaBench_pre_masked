
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_f30_ctrl_data {int* regs; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(int VAR_0, struct rmi_f30_ctrl_data *VAR_1)
{
 int VAR_2 = VAR_0 >> 3;
 int VAR_3 = VAR_0 & 0x07;





 return !(VAR_1[2].regs[VAR_2] & FUNC_0(VAR_3)) &&
  (VAR_1[3].regs[VAR_2] & FUNC_0(VAR_3));
}
