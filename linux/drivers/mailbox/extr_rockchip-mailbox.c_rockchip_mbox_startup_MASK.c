
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_chans; } ;
struct rockchip_mbox {scalar_t__ mbox_base; TYPE_2__ mbox; } ;
struct mbox_chan {TYPE_1__* mbox; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 struct rockchip_mbox* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mbox_chan *VAR_1)
{
 struct rockchip_mbox *VAR_2 = FUNC_0(VAR_1->mbox->dev);


 FUNC_1((1 << VAR_2->mbox.num_chans) - 1,
         VAR_2->mbox_base + VAR_0);

 return 0;
}
