
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct malidp_hw_device {TYPE_3__* hw; } ;
struct TYPE_4__ {int irq_mask; } ;
struct TYPE_5__ {TYPE_1__ se_irq_map; } ;
struct TYPE_6__ {TYPE_2__ map; } ;


 int VAR_0 ;
 int FUNC_0 (struct malidp_hw_device*,int ,int ) ;

void FUNC_1(struct malidp_hw_device *VAR_1)
{
 FUNC_0(VAR_1, VAR_0,
         VAR_1->hw->map.se_irq_map.irq_mask);
}
