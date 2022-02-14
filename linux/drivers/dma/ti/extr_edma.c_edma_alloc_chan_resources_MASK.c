
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edma_chan {int* slot; int alloced; scalar_t__ hw_triggered; int ch_num; TYPE_2__* tc; struct edma_cc* ecc; } ;
struct edma_cc {TYPE_1__* info; TYPE_2__* tc_list; struct device* dev; } ;
struct dma_chan {int chan_id; } ;
struct device {int dummy; } ;
typedef enum dma_event_q { ____Placeholder_dma_event_q } dma_event_q ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {size_t default_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,int ,int ,char*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct edma_chan*,int) ;
 int FUNC_4 (struct edma_cc*,int ) ;
 int FUNC_5 (struct edma_chan*) ;
 int FUNC_6 (struct edma_chan*,int) ;
 struct edma_chan* FUNC_7 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct edma_chan *VAR_2 = FUNC_7(VAR_1);
 struct edma_cc *VAR_3 = VAR_2->ecc;
 struct device *VAR_4 = VAR_3->dev;
 enum dma_event_q VAR_5 = VAR_0;
 int VAR_6;

 if (VAR_2->tc) {
  VAR_5 = VAR_2->tc->id;
 } else if (VAR_3->tc_list) {

  VAR_2->tc = &VAR_3->tc_list[VAR_3->info->default_queue];
  VAR_5 = VAR_2->tc->id;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_2->slot[0] = FUNC_4(VAR_3, VAR_2->ch_num);
 if (VAR_2->slot[0] < 0) {
  FUNC_2(VAR_4, "Entry slot allocation failed for channel %u\n",
   FUNC_0(VAR_2->ch_num));
  VAR_6 = VAR_2->slot[0];
  goto err_slot;
 }


 FUNC_6(VAR_2, VAR_2->slot[0]);
 VAR_2->alloced = 1;

 FUNC_1(VAR_4, "Got eDMA channel %d for virt channel %d (%s trigger)\n",
  FUNC_0(VAR_2->ch_num), VAR_1->chan_id,
  VAR_2->hw_triggered ? "HW" : "SW");

 return 0;

err_slot:
 FUNC_5(VAR_2);
 return VAR_6;
}
