
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct malidp_hw_device {TYPE_4__* hw; } ;
struct TYPE_6__ {int irq_mask; } ;
struct TYPE_5__ {int irq_mask; } ;
struct TYPE_7__ {TYPE_2__ dc_irq_map; TYPE_1__ de_irq_map; } ;
struct TYPE_8__ {TYPE_3__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct malidp_hw_device*,int ,int ) ;

void FUNC_1(struct malidp_hw_device *VAR_2)
{
 FUNC_0(VAR_2, VAR_1,
         VAR_2->hw->map.de_irq_map.irq_mask);
 FUNC_0(VAR_2, VAR_0,
         VAR_2->hw->map.dc_irq_map.irq_mask);
}
