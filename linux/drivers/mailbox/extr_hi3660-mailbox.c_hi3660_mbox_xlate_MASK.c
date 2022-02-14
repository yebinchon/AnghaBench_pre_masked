
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int* args; } ;
struct mbox_controller {int dummy; } ;
struct mbox_chan {int dummy; } ;
struct hi3660_mbox {struct mbox_chan* chan; struct hi3660_chan_info* mchan; int dev; } ;
struct hi3660_chan_info {unsigned int dst_irq; unsigned int ack_irq; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct hi3660_mbox* FUNC_2 (struct mbox_controller*) ;

__attribute__((used)) static struct mbox_chan *FUNC_3(struct mbox_controller *VAR_2,
        const struct of_phandle_args *VAR_3)
{
 struct hi3660_mbox *VAR_4 = FUNC_2(VAR_2);
 struct hi3660_chan_info *VAR_5;
 unsigned int VAR_6 = VAR_3->args[0];

 if (VAR_6 >= VAR_1) {
  FUNC_1(VAR_4->dev, "Invalid channel idx %d\n", VAR_6);
  return FUNC_0(-VAR_0);
 }

 VAR_5 = &VAR_4->mchan[VAR_6];
 VAR_5->dst_irq = VAR_3->args[1];
 VAR_5->ack_irq = VAR_3->args[2];

 return &VAR_4->chan[VAR_6];
}
