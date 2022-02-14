
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa11x0_dma_phy {int dcsr; scalar_t__ base; void** dbt; void** dbs; } ;
struct sa11x0_dma_dev {struct sa11x0_dma_phy* phy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 struct sa11x0_dma_dev* FUNC_0 (struct device*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_12)
{
 struct sa11x0_dma_dev *VAR_13 = FUNC_0(VAR_12);
 unsigned VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct sa11x0_dma_phy *VAR_15 = &VAR_13->phy[VAR_14];
  u32 VAR_16, VAR_17;

  VAR_16 = VAR_17 = FUNC_1(VAR_15->base + VAR_10);
  if (VAR_16 & VAR_2) {
   FUNC_2(VAR_2 | VAR_1, VAR_15->base + VAR_9);
   VAR_16 = FUNC_1(VAR_15->base + VAR_10);
  }

  VAR_17 &= VAR_2 | VAR_1;
  if (VAR_16 & VAR_0) {
   VAR_15->dbs[0] = FUNC_1(VAR_15->base + VAR_6);
   VAR_15->dbt[0] = FUNC_1(VAR_15->base + VAR_8);
   VAR_15->dbs[1] = FUNC_1(VAR_15->base + VAR_5);
   VAR_15->dbt[1] = FUNC_1(VAR_15->base + VAR_7);
   VAR_17 |= (VAR_16 & VAR_3 ? VAR_4 : 0) |
          (VAR_16 & VAR_4 ? VAR_3 : 0);
  } else {
   VAR_15->dbs[0] = FUNC_1(VAR_15->base + VAR_5);
   VAR_15->dbt[0] = FUNC_1(VAR_15->base + VAR_7);
   VAR_15->dbs[1] = FUNC_1(VAR_15->base + VAR_6);
   VAR_15->dbt[1] = FUNC_1(VAR_15->base + VAR_8);
   VAR_17 |= VAR_16 & (VAR_3 | VAR_4);
  }
  VAR_15->dcsr = VAR_17;

  FUNC_2(VAR_3 | VAR_4, VAR_15->base + VAR_9);
 }

 return 0;
}
