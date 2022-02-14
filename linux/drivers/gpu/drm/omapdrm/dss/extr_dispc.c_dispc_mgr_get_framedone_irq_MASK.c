
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {int framedone_irq; } ;
struct TYPE_3__ {scalar_t__ no_framedone_tv; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct dispc_device *VAR_2,
           enum omap_channel VAR_3)
{
 if (VAR_3 == VAR_0 && VAR_2->feat->no_framedone_tv)
  return 0;

 return VAR_1[VAR_3].framedone_irq;
}
