
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ connector_type; } ;
struct drm_writeback_connector {int fence_seqno; int fence_context; int fence_lock; TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,int ) ;
 int VAR_2 ;
 struct dma_fence* FUNC_2 (int,int ) ;

struct dma_fence *
FUNC_3(struct drm_writeback_connector *VAR_3)
{
 struct dma_fence *VAR_4;

 if (FUNC_0(VAR_3->base.connector_type !=
      VAR_0))
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(VAR_4, &VAR_2,
         &VAR_3->fence_lock, VAR_3->fence_context,
         ++VAR_3->fence_seqno);

 return VAR_4;
}
