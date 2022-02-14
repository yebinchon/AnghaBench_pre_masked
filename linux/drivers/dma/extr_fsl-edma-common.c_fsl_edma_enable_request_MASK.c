
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int chan_id; } ;
struct TYPE_6__ {TYPE_1__ chan; } ;
struct fsl_edma_chan {TYPE_4__* edma; TYPE_2__ vchan; } ;
struct edma_regs {int serq; int seei; } ;
struct TYPE_8__ {TYPE_3__* drvdata; struct edma_regs regs; } ;
struct TYPE_7__ {scalar_t__ version; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct fsl_edma_chan *VAR_1)
{
 struct edma_regs *VAR_2 = &VAR_1->edma->regs;
 u32 VAR_3 = VAR_1->vchan.chan.chan_id;

 if (VAR_1->edma->drvdata->version == VAR_0) {
  FUNC_1(VAR_1->edma, FUNC_0(VAR_3), VAR_2->seei);
  FUNC_1(VAR_1->edma, VAR_3, VAR_2->serq);
 } else {



  FUNC_2(FUNC_0(VAR_3), VAR_2->seei);
  FUNC_2(VAR_3, VAR_2->serq);
 }
}
