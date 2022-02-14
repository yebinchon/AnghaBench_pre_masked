
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rackmeter_dma {scalar_t__ mark; int buf2; int buf1; } ;
struct rackmeter {int paused; int dma_buf_p; TYPE_1__* dma_regs; struct rackmeter_dma* dma_buf_v; } ;
struct TYPE_2__ {int control; int cmdptr; int cmdptr_hi; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct rackmeter *VAR_1, int VAR_2)
{
 struct rackmeter_dma *VAR_3 = VAR_1->dma_buf_v;

 FUNC_4("rackmeter: %s\n", VAR_2 ? "paused" : "started");

 VAR_1->paused = VAR_2;
 if (VAR_2) {
  FUNC_0(VAR_1->dma_regs);
  return;
 }
 FUNC_2(VAR_3->buf1, 0, sizeof(VAR_3->buf1));
 FUNC_2(VAR_3->buf2, 0, sizeof(VAR_3->buf2));

 VAR_1->dma_buf_v->mark = 0;

 FUNC_1();
 FUNC_3(&VAR_1->dma_regs->cmdptr_hi, 0);
 FUNC_3(&VAR_1->dma_regs->cmdptr, VAR_1->dma_buf_p);
 FUNC_3(&VAR_1->dma_regs->control, (VAR_0 << 16) | VAR_0);
}
