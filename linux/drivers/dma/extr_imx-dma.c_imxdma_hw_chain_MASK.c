
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxdma_engine {int dummy; } ;
struct imxdma_channel {int hw_chaining; struct imxdma_engine* imxdma; } ;


 scalar_t__ FUNC_0 (struct imxdma_engine*) ;

__attribute__((used)) static int FUNC_1(struct imxdma_channel *VAR_0)
{
 struct imxdma_engine *VAR_1 = VAR_0->imxdma;

 if (FUNC_0(VAR_1))
  return VAR_0->hw_chaining;
 else
  return 0;
}
