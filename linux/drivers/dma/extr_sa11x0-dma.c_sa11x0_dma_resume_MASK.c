
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa11x0_dma_phy {scalar_t__ base; int dcsr; int * dbt; int * dbs; struct sa11x0_dma_desc* txd_load; struct sa11x0_dma_desc* txd_done; } ;
struct sa11x0_dma_dev {struct sa11x0_dma_phy* phy; } ;
struct sa11x0_dma_desc {int ddar; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int) ;
 struct sa11x0_dma_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_12)
{
 struct sa11x0_dma_dev *VAR_13 = FUNC_1(VAR_12);
 unsigned VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct sa11x0_dma_phy *VAR_15 = &VAR_13->phy[VAR_14];
  struct sa11x0_dma_desc *VAR_16 = ((void*)0);
  u32 VAR_17 = FUNC_2(VAR_15->base + VAR_8);

  FUNC_0(VAR_17 & (VAR_0 | VAR_2 | VAR_3 | VAR_1));

  if (VAR_15->txd_done)
   VAR_16 = VAR_15->txd_done;
  else if (VAR_15->txd_load)
   VAR_16 = VAR_15->txd_load;

  if (!VAR_16)
   continue;

  FUNC_3(VAR_16->ddar, VAR_15->base + VAR_10);

  FUNC_3(VAR_15->dbs[0], VAR_15->base + VAR_4);
  FUNC_3(VAR_15->dbt[0], VAR_15->base + VAR_6);
  FUNC_3(VAR_15->dbs[1], VAR_15->base + VAR_5);
  FUNC_3(VAR_15->dbt[1], VAR_15->base + VAR_7);
  FUNC_3(VAR_15->dcsr, VAR_15->base + VAR_9);
 }

 return 0;
}
