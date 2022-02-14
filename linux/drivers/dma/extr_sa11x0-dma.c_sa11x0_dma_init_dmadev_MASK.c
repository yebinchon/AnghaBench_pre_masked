
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int desc_free; } ;
struct sa11x0_dma_chan {TYPE_1__ vc; int node; int name; int ddar; int status; } ;
struct dma_device {int device_issue_pending; int device_tx_status; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_free_chan_resources; struct device* dev; int channels; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int name; int ddar; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 int FUNC_3 (struct dma_device*) ;
 struct sa11x0_dma_chan* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_1__*,struct dma_device*) ;

__attribute__((used)) static int FUNC_6(struct dma_device *VAR_12,
 struct device *VAR_13)
{
 unsigned VAR_14;

 FUNC_1(&VAR_12->channels);
 VAR_12->dev = VAR_13;
 VAR_12->device_free_chan_resources = VAR_8;
 VAR_12->device_config = VAR_4;
 VAR_12->device_pause = VAR_5;
 VAR_12->device_resume = VAR_6;
 VAR_12->device_terminate_all = VAR_7;
 VAR_12->device_tx_status = VAR_11;
 VAR_12->device_issue_pending = VAR_10;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_3); VAR_14++) {
  struct sa11x0_dma_chan *VAR_15;

  VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_2);
  if (!VAR_15) {
   FUNC_2(VAR_13, "no memory for channel %u\n", VAR_14);
   return -VAR_1;
  }

  VAR_15->status = VAR_0;
  VAR_15->ddar = VAR_3[VAR_14].ddar;
  VAR_15->name = VAR_3[VAR_14].name;
  FUNC_1(&VAR_15->node);

  VAR_15->vc.desc_free = VAR_9;
  FUNC_5(&VAR_15->vc, VAR_12);
 }

 return FUNC_3(VAR_12);
}
