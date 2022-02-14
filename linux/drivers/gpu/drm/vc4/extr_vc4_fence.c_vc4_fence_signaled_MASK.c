
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_fence {scalar_t__ seqno; int dev; } ;
struct vc4_dev {scalar_t__ finished_seqno; } ;
struct dma_fence {int dummy; } ;


 struct vc4_dev* FUNC_0 (int ) ;
 struct vc4_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct dma_fence *VAR_0)
{
 struct vc4_fence *VAR_1 = FUNC_1(VAR_0);
 struct vc4_dev *VAR_2 = FUNC_0(VAR_1->dev);

 return VAR_2->finished_seqno >= VAR_1->seqno;
}
