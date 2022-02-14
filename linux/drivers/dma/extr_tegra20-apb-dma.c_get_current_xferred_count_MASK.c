
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_sg_req {unsigned long req_len; } ;
struct tegra_dma_channel {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct tegra_dma_channel *VAR_1,
 struct tegra_dma_sg_req *VAR_2, unsigned long VAR_3)
{
 return VAR_2->req_len - (VAR_3 & VAR_0) - 4;
}
