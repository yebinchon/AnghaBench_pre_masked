
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_dma_chan {int lock; int err_status; int chan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pch_dma_chan*) ;
 int FUNC_3 (struct pch_dma_chan*) ;
 int FUNC_4 (struct pch_dma_chan*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_0)
{
 struct pch_dma_chan *VAR_1 = (struct pch_dma_chan *)VAR_0;
 unsigned long VAR_2;

 if (!FUNC_4(VAR_1)) {
  FUNC_1(FUNC_0(&VAR_1->chan),
   "BUG: handle non-idle channel in tasklet\n");
  return;
 }

 FUNC_5(&VAR_1->lock, VAR_2);
 if (FUNC_7(0, &VAR_1->err_status))
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);
 FUNC_6(&VAR_1->lock, VAR_2);
}
