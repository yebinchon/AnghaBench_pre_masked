
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sa11x0_dma_phy {int num; TYPE_3__* dev; scalar_t__ sg_load; struct sa11x0_dma_desc* txd_load; } ;
struct TYPE_5__ {int cookie; } ;
struct TYPE_8__ {TYPE_1__ tx; int node; } ;
struct sa11x0_dma_desc {int ddar; TYPE_4__ vd; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_7__ {TYPE_2__ slave; } ;


 int FUNC_0 (int ,char*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sa11x0_dma_phy *VAR_0, struct sa11x0_dma_desc *VAR_1)
{
 FUNC_1(&VAR_1->vd.node);
 VAR_0->txd_load = VAR_1;
 VAR_0->sg_load = 0;

 FUNC_0(VAR_0->dev->slave.dev, "pchan %u: txd %p[%x]: starting: DDAR:%x\n",
  VAR_0->num, &VAR_1->vd, VAR_1->vd.tx.cookie, VAR_1->ddar);
}
