
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_mbox_chan {size_t idx; int * msg; } ;
struct rockchip_mbox {struct rockchip_mbox_chan* chans; scalar_t__ mbox_base; } ;
struct mbox_chan {TYPE_1__* mbox; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 struct rockchip_mbox* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mbox_chan *VAR_1)
{
 struct rockchip_mbox *VAR_2 = FUNC_0(VAR_1->mbox->dev);
 struct rockchip_mbox_chan *VAR_3 = VAR_2->chans;


 FUNC_1(0, VAR_2->mbox_base + VAR_0);

 VAR_2->chans[VAR_3->idx].msg = ((void*)0);
}
