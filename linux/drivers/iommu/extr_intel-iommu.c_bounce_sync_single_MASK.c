
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int domain; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_sync_target { ____Placeholder_dma_sync_target } dma_sync_target ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int) ;
 struct dmar_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct device*,int ,size_t,int,int) ;

__attribute__((used)) static void
FUNC_5(struct device *VAR_0, dma_addr_t VAR_1, size_t VAR_2,
     enum dma_data_direction VAR_3, enum dma_sync_target VAR_4)
{
 struct dmar_domain *VAR_5;
 phys_addr_t VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 if (FUNC_0(!VAR_5))
  return;

 VAR_6 = FUNC_2(&VAR_5->domain, VAR_1);
 if (FUNC_3(VAR_6))
  FUNC_4(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
}
