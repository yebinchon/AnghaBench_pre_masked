
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioatdma_chan {int dummy; } ;
struct TYPE_2__ {int compl_write; int int_en; int op; } ;
struct ioat_dma_descriptor {TYPE_1__ ctl_f; int ctl; scalar_t__ next; } ;
struct dma_async_tx_descriptor {int flags; int cookie; scalar_t__ phys; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,unsigned long long,unsigned long long,int ,int ,int ,int ,int ,int ) ;
 struct device* FUNC_1 (struct ioatdma_chan*) ;

__attribute__((used)) static inline void
FUNC_2(struct ioatdma_chan *VAR_0, struct ioat_dma_descriptor *VAR_1,
  struct dma_async_tx_descriptor *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4, "desc[%d]: (%#llx->%#llx) cookie: %d flags: %#x"
  " ctl: %#10.8x (op: %#x int_en: %d compl: %d)\n", VAR_3,
  (unsigned long long) VAR_2->phys,
  (unsigned long long) VAR_1->next, VAR_2->cookie, VAR_2->flags,
  VAR_1->ctl, VAR_1->ctl_f.op, VAR_1->ctl_f.int_en, VAR_1->ctl_f.compl_write);
}
