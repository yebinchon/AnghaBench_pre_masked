
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int * regs; } ;
struct hw_hpd {TYPE_1__ base; int * masks; int * shifts; TYPE_2__* regs; } ;
struct hw_gpio_pin {int dummy; } ;
struct TYPE_4__ {int gpio; } ;


 struct hw_hpd* FUNC_0 (struct hw_gpio_pin*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct hw_gpio_pin *VAR_3, uint32_t VAR_4)
{
 struct hw_hpd *VAR_5 = FUNC_0(VAR_3);

 VAR_5->regs = &VAR_1[VAR_4];
 VAR_5->shifts = &VAR_2;
 VAR_5->masks = &VAR_0;
 VAR_5->base.regs = &VAR_1[VAR_4].gpio;
}
