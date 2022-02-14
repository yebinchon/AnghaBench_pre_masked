
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zx_dma_chan {TYPE_1__* phy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct zx_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2)
{
 struct zx_dma_chan *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_3->phy->base + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_3->phy->base + VAR_0);

 return 0;
}
