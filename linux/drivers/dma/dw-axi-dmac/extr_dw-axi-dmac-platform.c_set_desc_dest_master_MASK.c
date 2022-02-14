
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int ctl_lo; } ;
struct axi_dma_desc {TYPE_5__ lli; TYPE_4__* chan; } ;
struct TYPE_9__ {TYPE_3__* chip; } ;
struct TYPE_8__ {TYPE_2__* dw; } ;
struct TYPE_7__ {TYPE_1__* hdata; } ;
struct TYPE_6__ {int nr_masters; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct axi_dma_desc *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_1(VAR_1->lli.ctl_lo);
 if (VAR_1->chan->chip->dw->hdata->nr_masters > 1)
  VAR_2 |= VAR_0;
 else
  VAR_2 &= ~VAR_0;

 VAR_1->lli.ctl_lo = FUNC_0(VAR_2);
}
