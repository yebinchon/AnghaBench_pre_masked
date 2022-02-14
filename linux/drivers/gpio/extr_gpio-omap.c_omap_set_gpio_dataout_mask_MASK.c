
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dataout; } ;
struct gpio_bank {TYPE_2__* regs; scalar_t__ base; TYPE_1__ context; } ;
struct TYPE_4__ {scalar_t__ dataout; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_bank *VAR_0, unsigned VAR_1,
           int VAR_2)
{
 VAR_0->context.dataout = FUNC_1(VAR_0->base + VAR_0->regs->dataout,
           FUNC_0(VAR_1), VAR_2);
}
