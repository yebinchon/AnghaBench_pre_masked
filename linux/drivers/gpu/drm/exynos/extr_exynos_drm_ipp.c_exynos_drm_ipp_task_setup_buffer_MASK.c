
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int height; unsigned int* pitch; scalar_t__* offset; int * gem_id; } ;
struct exynos_drm_ipp_buffer {scalar_t__* dma_addr; struct exynos_drm_gem** exynos_gem; TYPE_2__ buf; TYPE_1__* format; } ;
struct exynos_drm_gem {scalar_t__ size; scalar_t__ dma_addr; } ;
struct drm_file {int dummy; } ;
struct TYPE_3__ {int num_planes; int vsub; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct exynos_drm_gem* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct exynos_drm_gem*) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_ipp_buffer *VAR_2,
         struct drm_file *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2->format->num_planes; VAR_5++) {
  unsigned int VAR_6 = (VAR_5 == 0) ? VAR_2->buf.height :
        FUNC_0(VAR_2->buf.height, VAR_2->format->vsub);
  unsigned long VAR_7 = VAR_6 * VAR_2->buf.pitch[VAR_5];
  struct exynos_drm_gem *VAR_8 = FUNC_1(VAR_3,
           VAR_2->buf.gem_id[VAR_5]);
  if (!VAR_8) {
   VAR_4 = -VAR_1;
   goto gem_free;
  }
  VAR_2->exynos_gem[VAR_5] = VAR_8;

  if (VAR_7 + VAR_2->buf.offset[VAR_5] > VAR_2->exynos_gem[VAR_5]->size) {
   VAR_5++;
   VAR_4 = -VAR_0;
   goto gem_free;
  }
  VAR_2->dma_addr[VAR_5] = VAR_2->exynos_gem[VAR_5]->dma_addr +
       VAR_2->buf.offset[VAR_5];
 }

 return 0;
gem_free:
 while (VAR_5--) {
  FUNC_2(VAR_2->exynos_gem[VAR_5]);
  VAR_2->exynos_gem[VAR_5] = ((void*)0);
 }
 return VAR_4;
}
