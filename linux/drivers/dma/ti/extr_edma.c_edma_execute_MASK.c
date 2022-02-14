
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct virt_dma_desc {int tx; int node; } ;
struct edma_desc {int pset_nr; int processed; scalar_t__ cyclic; TYPE_3__* pset; scalar_t__ sg_len; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_9__ {TYPE_2__ chan; } ;
struct edma_chan {int ch_num; scalar_t__ missed; struct edma_cc* ecc; int * slot; struct edma_desc* edesc; TYPE_4__ vchan; } ;
struct edma_cc {int dummy_slot; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int link_bcntrld; int src_dst_cidx; int src_dst_bidx; int ccnt; int a_b_cnt; int dst; int src; int opt; } ;
struct TYPE_8__ {TYPE_5__ param; scalar_t__ len; } ;
struct TYPE_6__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct device*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct edma_chan*) ;
 int FUNC_3 (struct edma_cc*,int ,int ) ;
 int FUNC_4 (struct edma_chan*) ;
 int FUNC_5 (struct edma_chan*) ;
 int FUNC_6 (struct edma_chan*) ;
 int FUNC_7 (struct edma_chan*) ;
 int FUNC_8 (struct edma_cc*,int ,TYPE_5__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int) ;
 struct edma_desc* FUNC_11 (int *) ;
 struct virt_dma_desc* FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_13(struct edma_chan *VAR_1)
{
 struct edma_cc *VAR_2 = VAR_1->ecc;
 struct virt_dma_desc *VAR_3;
 struct edma_desc *VAR_4;
 struct device *VAR_5 = VAR_1->vchan.chan.device->dev;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_1->edesc) {

  VAR_3 = FUNC_12(&VAR_1->vchan);
  if (!VAR_3)
   return;
  FUNC_9(&VAR_3->node);
  VAR_1->edesc = FUNC_11(&VAR_3->tx);
 }

 VAR_4 = VAR_1->edesc;


 VAR_8 = VAR_4->pset_nr - VAR_4->processed;
 VAR_9 = FUNC_10(VAR_0, VAR_8);
 VAR_4->sg_len = 0;


 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_7 = VAR_6 + VAR_4->processed;
  FUNC_8(VAR_2, VAR_1->slot[VAR_6], &VAR_4->pset[VAR_7].param);
  VAR_4->sg_len += VAR_4->pset[VAR_7].len;
  FUNC_1(VAR_5,
    "\n pset[%d]:\n"
    "  chnum\t%d\n"
    "  slot\t%d\n"
    "  opt\t%08x\n"
    "  src\t%08x\n"
    "  dst\t%08x\n"
    "  abcnt\t%08x\n"
    "  ccnt\t%08x\n"
    "  bidx\t%08x\n"
    "  cidx\t%08x\n"
    "  lkrld\t%08x\n",
    VAR_7, VAR_1->ch_num, VAR_1->slot[VAR_6],
    VAR_4->pset[VAR_7].param.opt,
    VAR_4->pset[VAR_7].param.src,
    VAR_4->pset[VAR_7].param.dst,
    VAR_4->pset[VAR_7].param.a_b_cnt,
    VAR_4->pset[VAR_7].param.ccnt,
    VAR_4->pset[VAR_7].param.src_dst_bidx,
    VAR_4->pset[VAR_7].param.src_dst_cidx,
    VAR_4->pset[VAR_7].param.link_bcntrld);

  if (VAR_6 != (VAR_9 - 1))
   FUNC_3(VAR_2, VAR_1->slot[VAR_6], VAR_1->slot[VAR_6 + 1]);
 }

 VAR_4->processed += VAR_9;






 if (VAR_4->processed == VAR_4->pset_nr) {
  if (VAR_4->cyclic)
   FUNC_3(VAR_2, VAR_1->slot[VAR_9 - 1], VAR_1->slot[1]);
  else
   FUNC_3(VAR_2, VAR_1->slot[VAR_9 - 1],
      VAR_1->ecc->dummy_slot);
 }

 if (VAR_1->missed) {





  FUNC_0(VAR_5, "missed event on channel %d\n", VAR_1->ch_num);
  FUNC_2(VAR_1);
  FUNC_6(VAR_1);
  FUNC_5(VAR_1);
  FUNC_7(VAR_1);
  VAR_1->missed = 0;
 } else if (VAR_4->processed <= VAR_0) {
  FUNC_0(VAR_5, "first transfer starting on channel %d\n",
   VAR_1->ch_num);
  FUNC_5(VAR_1);
 } else {
  FUNC_0(VAR_5, "chan: %d: completed %d elements, resuming\n",
   VAR_1->ch_num, VAR_4->processed);
  FUNC_4(VAR_1);
 }
}
