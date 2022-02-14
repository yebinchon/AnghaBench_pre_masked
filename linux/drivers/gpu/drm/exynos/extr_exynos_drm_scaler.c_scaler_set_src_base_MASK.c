
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scaler_context {int dummy; } ;
struct exynos_drm_ipp_buffer {int * dma_addr; TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;





 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct scaler_context *VAR_0,
 struct exynos_drm_ipp_buffer *VAR_1)
{
 static unsigned int VAR_2[] = {
  128,
  130,
  129,
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->format->num_planes; ++VAR_3)
  FUNC_0(VAR_1->dma_addr[VAR_3], VAR_2[VAR_3]);
}
