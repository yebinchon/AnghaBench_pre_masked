
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_channel {unsigned int instance; unsigned int channel; } ;
struct mbox_controller {int num_chans; int dev; struct mbox_chan* chans; } ;
struct mbox_chan {struct sti_channel* con_priv; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static inline
struct mbox_chan *FUNC_1(struct mbox_controller *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{
 struct sti_channel *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_chans; VAR_4++) {
  VAR_3 = VAR_0->chans[VAR_4].con_priv;
  if (VAR_3 &&
      VAR_3->instance == VAR_1 &&
      VAR_3->channel == VAR_2)
   return &VAR_0->chans[VAR_4];
 }

 FUNC_0(VAR_0->dev,
  "Channel not registered: instance: %d channel: %d\n",
  VAR_1, VAR_2);

 return ((void*)0);
}
