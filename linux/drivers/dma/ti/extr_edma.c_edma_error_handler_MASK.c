
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edmacc_param {scalar_t__ a_b_cnt; scalar_t__ ccnt; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {int lock; TYPE_2__ chan; } ;
struct edma_chan {int missed; TYPE_3__ vchan; int * slot; int edesc; struct edma_cc* ecc; } ;
struct edma_cc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct edma_chan*) ;
 int FUNC_2 (struct edma_cc*,int ,struct edmacc_param*) ;
 int FUNC_3 (struct edma_chan*) ;
 int FUNC_4 (struct edma_chan*) ;
 int FUNC_5 (struct edma_chan*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct edma_chan *VAR_0)
{
 struct edma_cc *VAR_1 = VAR_0->ecc;
 struct device *VAR_2 = VAR_0->vchan.chan.device->dev;
 struct edmacc_param VAR_3;
 int VAR_4;

 if (!VAR_0->edesc)
  return;

 FUNC_6(&VAR_0->vchan.lock);

 VAR_4 = FUNC_2(VAR_1, VAR_0->slot[0], &VAR_3);
 if (VAR_4 || (VAR_3.a_b_cnt == 0 && VAR_3.ccnt == 0)) {
  FUNC_0(VAR_2, "Error on null slot, setting miss\n");
  VAR_0->missed = 1;
 } else {




  FUNC_0(VAR_2, "Missed event, TRIGGERING\n");
  FUNC_1(VAR_0);
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
  FUNC_5(VAR_0);
 }
 FUNC_7(&VAR_0->vchan.lock);
}
