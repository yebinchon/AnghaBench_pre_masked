
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence_chan {scalar_t__ (* read ) (struct nouveau_channel*) ;} ;
struct TYPE_2__ {scalar_t__ seqno; } ;
struct nouveau_fence {TYPE_1__ base; int channel; } ;
struct nouveau_channel {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct nouveau_fence* FUNC_0 (struct dma_fence*) ;
 struct nouveau_fence_chan* FUNC_1 (struct nouveau_fence*) ;
 struct nouveau_channel* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct nouveau_channel*) ;

__attribute__((used)) static bool FUNC_6(struct dma_fence *VAR_0)
{
 struct nouveau_fence *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_fence_chan *VAR_2 = FUNC_1(VAR_1);
 struct nouveau_channel *VAR_3;
 bool VAR_4 = 0;

 FUNC_3();
 VAR_3 = FUNC_2(VAR_1->channel);
 if (VAR_3)
  VAR_4 = (int)(VAR_2->read(VAR_3) - VAR_1->base.seqno) >= 0;
 FUNC_4();

 return VAR_4;
}
