
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct fpga_irq_data {int domain; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,struct pt_regs*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fpga_irq_data *VAR_1, struct pt_regs *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 u32 VAR_5;

 while ((VAR_5 = FUNC_2(VAR_1->base + VAR_0))) {
  VAR_4 = FUNC_0(VAR_5) - 1;
  FUNC_1(VAR_1->domain, VAR_4, VAR_2);
  VAR_3 = 1;
 }

 return VAR_3;
}
