
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct sun6i_dma_dev {scalar_t__ base; TYPE_1__ slave; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct sun6i_dma_dev *VAR_1)
{
 FUNC_2(VAR_1->slave.dev, "Common register:\n"
  "\tmask0(%04x): 0x%08x\n"
  "\tmask1(%04x): 0x%08x\n"
  "\tpend0(%04x): 0x%08x\n"
  "\tpend1(%04x): 0x%08x\n"
  "\tstats(%04x): 0x%08x\n",
  FUNC_0(0), FUNC_3(VAR_1->base + FUNC_0(0)),
  FUNC_0(1), FUNC_3(VAR_1->base + FUNC_0(1)),
  FUNC_1(0), FUNC_3(VAR_1->base + FUNC_1(0)),
  FUNC_1(1), FUNC_3(VAR_1->base + FUNC_1(1)),
  VAR_0, FUNC_3(VAR_1->base + VAR_0));
}
