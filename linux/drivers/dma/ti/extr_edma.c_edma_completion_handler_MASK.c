
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edma_desc {scalar_t__ processed; scalar_t__ pset_nr; scalar_t__ processed_stat; scalar_t__ residue; scalar_t__ residue_stat; scalar_t__ sg_len; int vdesc; scalar_t__ cyclic; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {int lock; TYPE_2__ chan; } ;
struct edma_chan {TYPE_3__ vchan; int ch_num; struct edma_desc* edesc; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct edma_chan*) ;
 int FUNC_2 (struct edma_chan*) ;
 int FUNC_3 (struct edma_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct edma_chan *VAR_0)
{
 struct device *VAR_1 = VAR_0->vchan.chan.device->dev;
 struct edma_desc *VAR_2;

 FUNC_4(&VAR_0->vchan.lock);
 VAR_2 = VAR_0->edesc;
 if (VAR_2) {
  if (VAR_2->cyclic) {
   FUNC_7(&VAR_2->vdesc);
   FUNC_5(&VAR_0->vchan.lock);
   return;
  } else if (VAR_2->processed == VAR_2->pset_nr) {
   VAR_2->residue = 0;
   FUNC_3(VAR_0);
   FUNC_6(&VAR_2->vdesc);
   VAR_0->edesc = ((void*)0);

   FUNC_0(VAR_1, "Transfer completed on channel %d\n",
    VAR_0->ch_num);
  } else {
   FUNC_0(VAR_1, "Sub transfer completed on channel %d\n",
    VAR_0->ch_num);

   FUNC_2(VAR_0);


   VAR_2->residue -= VAR_2->sg_len;
   VAR_2->residue_stat = VAR_2->residue;
   VAR_2->processed_stat = VAR_2->processed;
  }
  FUNC_1(VAR_0);
 }

 FUNC_5(&VAR_0->vchan.lock);
}
