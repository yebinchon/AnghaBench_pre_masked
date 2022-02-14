
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dummy; } ;
struct exynos_drm_ipp_buffer {int * dma_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gsc_context*,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gsc_context *VAR_0, u32 VAR_1,
       struct exynos_drm_ipp_buffer *VAR_2)
{

 FUNC_4(VAR_2->dma_addr[0], FUNC_2(VAR_1));
 FUNC_4(VAR_2->dma_addr[1], FUNC_0(VAR_1));
 FUNC_4(VAR_2->dma_addr[2], FUNC_1(VAR_1));

 FUNC_3(VAR_0, VAR_1, 1);
}
