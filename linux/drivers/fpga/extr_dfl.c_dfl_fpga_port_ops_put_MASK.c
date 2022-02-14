
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_fpga_port_ops {scalar_t__ owner; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct dfl_fpga_port_ops *VAR_0)
{
 if (VAR_0 && VAR_0->owner)
  FUNC_0(VAR_0->owner);
}
