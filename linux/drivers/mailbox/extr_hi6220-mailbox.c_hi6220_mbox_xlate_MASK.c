
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int* args; } ;
struct mbox_controller {int dev; } ;
struct mbox_chan {struct hi6220_mbox_chan* con_priv; } ;
struct hi6220_mbox_chan {unsigned int dst_irq; unsigned int ack_irq; } ;
struct hi6220_mbox {unsigned int chan_num; void** irq_map_chan; int dev; struct mbox_chan* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mbox_chan* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct hi6220_mbox* FUNC_2 (int ) ;

__attribute__((used)) static struct mbox_chan *FUNC_3(struct mbox_controller *VAR_2,
        const struct of_phandle_args *VAR_3)
{
 struct hi6220_mbox *VAR_4 = FUNC_2(VAR_2->dev);
 struct hi6220_mbox_chan *VAR_5;
 struct mbox_chan *VAR_6;
 unsigned int VAR_7 = VAR_3->args[0];
 unsigned int VAR_8 = VAR_3->args[1];
 unsigned int VAR_9 = VAR_3->args[2];


 if (VAR_7 >= VAR_4->chan_num || VAR_8 >= VAR_4->chan_num ||
     VAR_9 >= VAR_4->chan_num) {
  FUNC_1(VAR_4->dev,
   "Invalid channel idx %d dst_irq %d ack_irq %d\n",
   VAR_7, VAR_8, VAR_9);
  return FUNC_0(-VAR_1);
 }


 VAR_6 = &VAR_4->chan[VAR_7];
 if (VAR_4->irq_map_chan[VAR_9] == (void *)VAR_6) {
  FUNC_1(VAR_4->dev, "Channel in use\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5 = VAR_6->con_priv;
 VAR_5->dst_irq = VAR_8;
 VAR_5->ack_irq = VAR_9;

 VAR_4->irq_map_chan[VAR_9] = (void *)VAR_6;
 return VAR_6;
}
