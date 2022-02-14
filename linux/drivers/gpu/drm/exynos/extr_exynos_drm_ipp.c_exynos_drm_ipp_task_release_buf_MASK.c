
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_ipp_buffer {int * exynos_gem; TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct exynos_drm_ipp_buffer *VAR_0)
{
 int VAR_1;

 if (!VAR_0->exynos_gem[0])
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->format->num_planes; VAR_1++)
  FUNC_0(VAR_0->exynos_gem[VAR_1]);
}
