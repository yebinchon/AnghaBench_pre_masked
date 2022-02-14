
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channels; } ;
struct mmp_tdma_device {TYPE_2__ device; struct mmp_tdma_chan** tdmac; scalar_t__ base; int dev; } ;
struct TYPE_3__ {int device_node; TYPE_2__* device; } ;
struct mmp_tdma_chan {int irq; int idx; int type; TYPE_1__ chan; int tasklet; int status; struct gen_pool* pool; scalar_t__ reg_base; int dev; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct mmp_tdma_chan* FUNC_1 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mmp_tdma_device *VAR_6,
     int VAR_7, int VAR_8,
     int VAR_9, struct gen_pool *VAR_10)
{
 struct mmp_tdma_chan *VAR_11;

 if (VAR_7 >= VAR_4) {
  FUNC_0(VAR_6->dev, "too many channels for device!\n");
  return -VAR_1;
 }


 VAR_11 = FUNC_1(VAR_6->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 if (VAR_8)
  VAR_11->irq = VAR_8;
 VAR_11->dev = VAR_6->dev;
 VAR_11->chan.device = &VAR_6->device;
 VAR_11->idx = VAR_7;
 VAR_11->type = VAR_9;
 VAR_11->reg_base = VAR_6->base + VAR_7 * 4;
 VAR_11->pool = VAR_10;
 VAR_11->status = VAR_0;
 VAR_6->tdmac[VAR_11->idx] = VAR_11;
 FUNC_3(&VAR_11->tasklet, VAR_5, (unsigned long)VAR_11);


 FUNC_2(&VAR_11->chan.device_node,
   &VAR_6->device.channels);
 return 0;
}
