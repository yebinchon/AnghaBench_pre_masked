
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mbox_pdata {unsigned int num_inst; unsigned int num_chan; } ;
struct sti_mbox_device {scalar_t__ dev; int name; } ;
struct sti_channel {unsigned int instance; unsigned int channel; struct sti_mbox_device* mdev; } ;
struct of_phandle_args {unsigned int* args; } ;
struct mbox_controller {scalar_t__ dev; int num_chans; struct mbox_chan* chans; } ;
struct mbox_chan {struct sti_channel* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mbox_chan* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,char*,...) ;
 struct sti_mbox_device* FUNC_2 (scalar_t__) ;
 struct sti_mbox_pdata* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int ,unsigned int,unsigned int) ;
 struct sti_channel* FUNC_5 (scalar_t__,int,int ) ;

__attribute__((used)) static struct mbox_chan *FUNC_6(struct mbox_controller *VAR_4,
     const struct of_phandle_args *VAR_5)
{
 struct sti_mbox_device *VAR_6 = FUNC_2(VAR_4->dev);
 struct sti_mbox_pdata *VAR_7 = FUNC_3(VAR_6->dev);
 struct sti_channel *VAR_8;
 struct mbox_chan *VAR_9 = ((void*)0);
 unsigned int VAR_10 = VAR_5->args[0];
 unsigned int VAR_11 = VAR_5->args[1];
 int VAR_12;


 if (VAR_10 >= VAR_7->num_inst || VAR_11 >= VAR_7->num_chan) {
  FUNC_1(VAR_4->dev,
   "Invalid channel requested instance: %d channel: %d\n",
   VAR_10, VAR_11);
  return FUNC_0(-VAR_1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_4->num_chans; VAR_12++) {
  VAR_8 = VAR_4->chans[VAR_12].con_priv;


  if (VAR_8 &&
      VAR_4->dev == VAR_8->mdev->dev &&
      VAR_10 == VAR_8->instance &&
      VAR_11 == VAR_8->channel) {

   FUNC_1(VAR_4->dev, "Channel in use\n");
   return FUNC_0(-VAR_0);
  }





  if (!VAR_9 && !VAR_8)
   VAR_9 = &VAR_4->chans[VAR_12];
 }

 if (!VAR_9) {
  FUNC_1(VAR_4->dev, "No free channels left\n");
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_5(VAR_4->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 VAR_8->mdev = VAR_6;
 VAR_8->instance = VAR_10;
 VAR_8->channel = VAR_11;

 VAR_9->con_priv = VAR_8;

 FUNC_4(VAR_4->dev,
   "Mbox: %s: Created channel: instance: %d channel: %d\n",
   VAR_6->name, VAR_10, VAR_11);

 return VAR_9;
}
