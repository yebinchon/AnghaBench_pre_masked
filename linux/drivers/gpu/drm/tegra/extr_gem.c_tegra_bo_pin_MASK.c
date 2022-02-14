
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int paddr; struct sg_table* sgt; } ;
struct sg_table {int dummy; } ;
struct host1x_bo {int dummy; } ;
typedef int dma_addr_t ;


 struct tegra_bo* FUNC_0 (struct host1x_bo*) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct host1x_bo *VAR_0, struct sg_table **VAR_1)
{
 struct tegra_bo *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->sgt;

 return VAR_2->paddr;
}
