
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmp_pdma_phy {int idx; int base; } ;
struct TYPE_4__ {int channels; } ;
struct mmp_pdma_device {TYPE_2__ device; int dev; int base; struct mmp_pdma_phy* phy; } ;
struct TYPE_3__ {int device_node; TYPE_2__* device; } ;
struct mmp_pdma_chan {TYPE_1__ chan; int chain_running; int chain_pending; int tasklet; int dev; int desc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct mmp_pdma_chan* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ,int ,char*,struct mmp_pdma_phy*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mmp_pdma_device *VAR_5, int VAR_6, int VAR_7)
{
 struct mmp_pdma_phy *VAR_8 = &VAR_5->phy[VAR_6];
 struct mmp_pdma_chan *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_5->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_8->idx = VAR_6;
 VAR_8->base = VAR_5->base;

 if (VAR_7) {
  VAR_10 = FUNC_3(VAR_5->dev, VAR_7, VAR_4,
           VAR_2, "pdma", VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_5->dev, "channel request irq fail!\n");
   return VAR_10;
  }
 }

 FUNC_5(&VAR_9->desc_lock);
 VAR_9->dev = VAR_5->dev;
 VAR_9->chan.device = &VAR_5->device;
 FUNC_6(&VAR_9->tasklet, VAR_3, (unsigned long)VAR_9);
 FUNC_0(&VAR_9->chain_pending);
 FUNC_0(&VAR_9->chain_running);


 FUNC_4(&VAR_9->chan.device_node, &VAR_5->device.channels);

 return 0;
}
