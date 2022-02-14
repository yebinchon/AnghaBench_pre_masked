
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_edma_engine {int n_chans; struct fsl_edma_chan* chans; } ;
struct TYPE_2__ {int lock; } ;
struct fsl_edma_chan {TYPE_1__ vchan; int pm_state; int idle; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct fsl_edma_engine* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct fsl_edma_chan*,int ,int) ;
 int FUNC_3 (struct fsl_edma_chan*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 struct fsl_edma_engine *VAR_2 = FUNC_0(VAR_1);
 struct fsl_edma_chan *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->n_chans; VAR_5++) {
  VAR_3 = &VAR_2->chans[VAR_5];
  FUNC_4(&VAR_3->vchan.lock, VAR_4);

  if (FUNC_6(!VAR_3->idle)) {
   FUNC_1(VAR_1, "WARN: There is non-idle channel.");
   FUNC_3(VAR_3);
   FUNC_2(VAR_3, 0, 0);
  }

  VAR_3->pm_state = VAR_0;
  FUNC_5(&VAR_3->vchan.lock, VAR_4);
 }

 return 0;
}
