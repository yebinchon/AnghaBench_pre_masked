
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_context {int dummy; } ;
struct exynos_drm_ipp_buffer {int * dma_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fimc_context*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fimc_context *VAR_0,
         struct exynos_drm_ipp_buffer *VAR_1)
{
 FUNC_3(VAR_0, VAR_1->dma_addr[0], FUNC_2(0));
 FUNC_3(VAR_0, VAR_1->dma_addr[1], FUNC_0(0));
 FUNC_3(VAR_0, VAR_1->dma_addr[2], FUNC_1(0));
}
