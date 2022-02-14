
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stp_policy_node {int dummy; } ;
struct stm_output {int nr_chans; unsigned int master; unsigned int channel; int lock; } ;
struct stm_device {int mc_lock; int dev; TYPE_2__* pdrv; TYPE_1__* data; } ;
struct TYPE_4__ {int (* output_open ) (void*,struct stm_output*) ;} ;
struct TYPE_3__ {unsigned int sw_nchannels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stm_device*,unsigned int,unsigned int*,unsigned int,unsigned int*,unsigned int) ;
 int FUNC_5 (struct stm_device*,struct stm_output*) ;
 int FUNC_6 (struct stp_policy_node*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 void* FUNC_7 (struct stp_policy_node*) ;
 int FUNC_8 (void*,struct stm_output*) ;

__attribute__((used)) static int FUNC_9(struct stm_device *VAR_1, unsigned int VAR_2,
        struct stp_policy_node *VAR_3,
        struct stm_output *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = -VAR_0;

 if (VAR_2 > VAR_1->data->sw_nchannels)
  return -VAR_0;


 if (FUNC_0(!VAR_3))
  return -VAR_0;





 FUNC_6(VAR_3, &VAR_5, &VAR_7, &VAR_6, &VAR_8);

 FUNC_2(&VAR_1->mc_lock);
 FUNC_2(&VAR_4->lock);

 if (FUNC_0(VAR_4->nr_chans))
  goto unlock;

 VAR_9 = FUNC_4(VAR_1, VAR_2, &VAR_5, VAR_7, &VAR_6, VAR_8);
 if (VAR_9 < 0)
  goto unlock;

 VAR_4->master = VAR_5;
 VAR_4->channel = VAR_6;
 VAR_4->nr_chans = VAR_2;
 if (VAR_1->pdrv->output_open) {
  void *VAR_10 = FUNC_7(VAR_3);

  if (FUNC_0(!VAR_10))
   goto unlock;


  VAR_9 = VAR_1->pdrv->output_open(VAR_10, VAR_4);
  if (VAR_9)
   goto unlock;
 }

 FUNC_5(VAR_1, VAR_4);
 FUNC_1(&VAR_1->dev, "assigned %u:%u (+%u)\n", VAR_5, VAR_6, VAR_2);

 VAR_9 = 0;
unlock:
 if (VAR_9)
  VAR_4->nr_chans = 0;

 FUNC_3(&VAR_4->lock);
 FUNC_3(&VAR_1->mc_lock);

 return VAR_9;
}
