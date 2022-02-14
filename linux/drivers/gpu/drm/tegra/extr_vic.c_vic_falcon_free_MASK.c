
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {int dummy; } ;
struct falcon {struct tegra_drm* data; } ;
typedef int dma_addr_t ;


 void FUNC_0 (struct tegra_drm*,size_t,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct falcon *VAR_0, size_t VAR_1,
       dma_addr_t VAR_2, void *VAR_3)
{
 struct tegra_drm *VAR_4 = VAR_0->data;

 return FUNC_0(VAR_4, VAR_1, VAR_3, VAR_2);
}
