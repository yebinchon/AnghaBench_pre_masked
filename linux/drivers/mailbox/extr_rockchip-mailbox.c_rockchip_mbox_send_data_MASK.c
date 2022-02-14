
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_mbox_msg {scalar_t__ rx_size; scalar_t__ cmd; } ;
struct rockchip_mbox_chan {size_t idx; struct rockchip_mbox_msg* msg; } ;
struct TYPE_4__ {int dev; } ;
struct rockchip_mbox {scalar_t__ buf_size; scalar_t__ mbox_base; struct rockchip_mbox_chan* chans; TYPE_2__ mbox; } ;
struct mbox_chan {TYPE_1__* mbox; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,size_t,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 struct rockchip_mbox* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mbox_chan *VAR_1, void *VAR_2)
{
 struct rockchip_mbox *VAR_3 = FUNC_4(VAR_1->mbox->dev);
 struct rockchip_mbox_msg *VAR_4 = VAR_2;
 struct rockchip_mbox_chan *VAR_5 = VAR_3->chans;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_4->rx_size > VAR_3->buf_size) {
  FUNC_3(VAR_3->mbox.dev, "Transmit size over buf size(%d)\n",
   VAR_3->buf_size);
  return -VAR_0;
 }

 FUNC_2(VAR_3->mbox.dev, "Chan[%d]: A2B message, cmd 0x%08x\n",
  VAR_5->idx, VAR_4->cmd);

 VAR_3->chans[VAR_5->idx].msg = VAR_4;

 FUNC_5(VAR_4->cmd, VAR_3->mbox_base + FUNC_0(VAR_5->idx));
 FUNC_5(VAR_4->rx_size, VAR_3->mbox_base +
         FUNC_1(VAR_5->idx));

 return 0;
}
