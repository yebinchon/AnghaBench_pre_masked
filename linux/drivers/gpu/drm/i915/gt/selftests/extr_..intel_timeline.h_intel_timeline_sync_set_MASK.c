
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int dummy; } ;
struct dma_fence {int seqno; int context; } ;


 int FUNC_0 (struct intel_timeline*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct intel_timeline *VAR_0,
       const struct dma_fence *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->context, VAR_1->seqno);
}
