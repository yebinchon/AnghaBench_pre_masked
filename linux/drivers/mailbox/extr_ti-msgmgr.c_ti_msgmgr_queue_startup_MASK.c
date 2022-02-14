
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_queue_inst {int is_tx; int rx_buff; int name; int queue_ctrl; } ;
struct ti_msgmgr_inst {struct ti_msgmgr_desc* desc; } ;
struct ti_msgmgr_desc {int max_message_size; scalar_t__ is_sproxy; } ;
struct mbox_chan {struct ti_queue_inst* con_priv; TYPE_1__* mbox; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct ti_msgmgr_inst* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ti_msgmgr_desc const*,struct ti_queue_inst*) ;
 int FUNC_6 (struct device*,struct ti_msgmgr_desc const*,struct ti_queue_inst*,struct mbox_chan*) ;

__attribute__((used)) static int FUNC_7(struct mbox_chan *VAR_4)
{
 struct device *VAR_5 = VAR_4->mbox->dev;
 struct ti_msgmgr_inst *VAR_6 = FUNC_1(VAR_5);
 struct ti_queue_inst *VAR_7 = VAR_4->con_priv;
 const struct ti_msgmgr_desc *VAR_8 = VAR_6->desc;
 int VAR_9;
 int VAR_10;





 if (VAR_8->is_sproxy) {
  VAR_7->is_tx = (FUNC_4(VAR_7->queue_ctrl) &
    VAR_3) ? 0 : 1;

  VAR_10 = FUNC_5(VAR_8, VAR_7);

  if (!VAR_10 && VAR_7->is_tx) {
   FUNC_0(VAR_5, "%s: Cannot transmit with 0 credits!\n",
    VAR_7->name);
   return -VAR_0;
  }
 }

 if (!VAR_7->is_tx) {

  VAR_7->rx_buff = FUNC_3(VAR_8->max_message_size, VAR_2);
  if (!VAR_7->rx_buff)
   return -VAR_1;

  VAR_9 = FUNC_6(VAR_5, VAR_8, VAR_7, VAR_4);
  if (VAR_9) {
   FUNC_2(VAR_7->rx_buff);
   return VAR_9;
  }
 }

 return 0;
}
