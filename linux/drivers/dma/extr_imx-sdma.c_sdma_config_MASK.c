
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdma_channel {scalar_t__ event_id0; scalar_t__ event_id1; TYPE_1__* sdma; int slave_config; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_events; } ;
struct TYPE_3__ {TYPE_2__* drvdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct dma_slave_config*,int) ;
 int FUNC_1 (struct sdma_channel*,scalar_t__) ;
 struct sdma_channel* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_1,
         struct dma_slave_config *VAR_2)
{
 struct sdma_channel *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(&VAR_3->slave_config, VAR_2, sizeof(*VAR_2));


 if (VAR_3->event_id0) {
  if (VAR_3->event_id0 >= VAR_3->sdma->drvdata->num_events)
   return -VAR_0;
  FUNC_1(VAR_3, VAR_3->event_id0);
 }

 if (VAR_3->event_id1) {
  if (VAR_3->event_id1 >= VAR_3->sdma->drvdata->num_events)
   return -VAR_0;
  FUNC_1(VAR_3, VAR_3->event_id1);
 }

 return 0;
}
