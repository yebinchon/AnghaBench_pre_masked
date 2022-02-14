
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct hw_gpio_pin {int id; } ;
struct TYPE_4__ {int * regs; } ;
struct hw_ddc {int * masks; int * shifts; TYPE_1__ base; TYPE_2__* regs; } ;
struct TYPE_5__ {int gpio; } ;


 int FUNC_0 (int) ;


 struct hw_ddc* FUNC_1 (struct hw_gpio_pin*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(
  struct hw_gpio_pin *VAR_4,
  uint32_t VAR_5)
{
 struct hw_ddc *VAR_6 = FUNC_1(VAR_4);

 switch (VAR_4->id) {
 case 128:
  VAR_6->regs = &VAR_1[VAR_5];
  VAR_6->base.regs = &VAR_1[VAR_5].gpio;
  break;
 case 129:
  VAR_6->regs = &VAR_0[VAR_5];
  VAR_6->base.regs = &VAR_0[VAR_5].gpio;
  break;
 default:
  FUNC_0(0);
  return;
 }

 VAR_6->shifts = &VAR_3;
 VAR_6->masks = &VAR_2;

}
