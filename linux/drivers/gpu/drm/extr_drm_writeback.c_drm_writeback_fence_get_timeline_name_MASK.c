
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_writeback_connector {char const* timeline_name; } ;
struct dma_fence {int dummy; } ;


 struct drm_writeback_connector* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *
FUNC_1(struct dma_fence *VAR_0)
{
 struct drm_writeback_connector *VAR_1 =
  FUNC_0(VAR_0);

 return VAR_1->timeline_name;
}
