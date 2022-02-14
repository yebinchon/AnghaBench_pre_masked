
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int device_terminate_all; int device_synchronize; int device_config; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int channels; } ;
struct pxad_device {unsigned int nr_chans; unsigned int nr_requestors; TYPE_2__ slave; } ;
struct TYPE_6__ {int desc_free; } ;
struct pxad_chan {int wq_state; TYPE_1__ vc; int prio; int drcmr; } ;
struct TYPE_8__ {scalar_t__ coherent_dma_mask; } ;
struct platform_device {TYPE_4__ dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct pxad_chan* FUNC_2 (TYPE_4__*,int,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct platform_device*,struct pxad_device*,unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_12,
       struct pxad_device *VAR_13,
       unsigned int VAR_14,
       unsigned int VAR_15)
{
 int VAR_16;
 unsigned int VAR_17;
 struct pxad_chan *VAR_18;

 VAR_13->nr_chans = VAR_14;
 VAR_13->nr_requestors = VAR_15;
 FUNC_1(&VAR_13->slave.channels);
 VAR_13->slave.device_alloc_chan_resources = VAR_4;
 VAR_13->slave.device_free_chan_resources = VAR_6;
 VAR_13->slave.device_tx_status = VAR_11;
 VAR_13->slave.device_issue_pending = VAR_8;
 VAR_13->slave.device_config = VAR_5;
 VAR_13->slave.device_synchronize = VAR_9;
 VAR_13->slave.device_terminate_all = VAR_10;

 if (VAR_12->dev.coherent_dma_mask)
  FUNC_3(&VAR_12->dev, VAR_12->dev.coherent_dma_mask);
 else
  FUNC_3(&VAR_12->dev, FUNC_0(32));

 VAR_16 = FUNC_6(VAR_12, VAR_13, VAR_14);
 if (VAR_16)
  return VAR_16;

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  VAR_18 = FUNC_2(&VAR_12->dev, sizeof(*VAR_18), VAR_1);
  if (!VAR_18)
   return -VAR_0;

  VAR_18->drcmr = VAR_3;
  VAR_18->prio = VAR_2;
  VAR_18->vc.desc_free = VAR_7;
  FUNC_7(&VAR_18->vc, &VAR_13->slave);
  FUNC_5(&VAR_18->wq_state);
 }

 return FUNC_4(&VAR_13->slave);
}
