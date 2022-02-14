
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ivc_header {int dummy; } ;
struct tegra_ivc {unsigned int frame_size; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline dma_addr_t FUNC_0(struct tegra_ivc *VAR_0,
           dma_addr_t VAR_1,
           unsigned int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = sizeof(struct tegra_ivc_header) + VAR_0->frame_size * VAR_2;

 return VAR_1 + VAR_3;
}
