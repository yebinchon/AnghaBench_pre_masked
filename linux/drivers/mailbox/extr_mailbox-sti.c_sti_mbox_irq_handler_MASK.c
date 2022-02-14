
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mbox_pdata {unsigned int num_inst; } ;
struct sti_mbox_device {int dev; int * enabled; int name; } ;
struct sti_channel {int channel; int instance; } ;
struct mbox_chan {struct sti_channel* con_priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct sti_mbox_pdata* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct mbox_chan*) ;
 int FUNC_4 (struct mbox_chan*) ;
 struct mbox_chan* FUNC_5 (struct sti_mbox_device*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct sti_mbox_device *VAR_5 = VAR_4;
 struct sti_mbox_pdata *VAR_6 = FUNC_1(VAR_5->dev);
 struct sti_channel *VAR_7;
 struct mbox_chan *VAR_8;
 unsigned int VAR_9;
 int VAR_10 = VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_inst; VAR_9++) {
  VAR_8 = FUNC_5(VAR_5, VAR_9);
  if (!VAR_8)
   continue;
  VAR_7 = VAR_8->con_priv;

  if (!FUNC_3(VAR_8)) {
   FUNC_2(VAR_5->dev,
     "Unexpected IRQ: %s\n"
     "  instance: %d: channel: %d [enabled: %x]\n",
     VAR_5->name, VAR_7->instance,
     VAR_7->channel, VAR_5->enabled[VAR_9]);


   if (VAR_10 == VAR_1)
    VAR_10 = VAR_0;
   continue;
  }

  FUNC_4(VAR_8);
  VAR_10 = VAR_2;
 }

 if (VAR_10 == VAR_1)
  FUNC_0(VAR_5->dev, "Spurious IRQ - was a channel requested?\n");

 return VAR_10;
}
