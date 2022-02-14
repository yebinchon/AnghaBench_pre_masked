
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu {int num_mmu; int dev; int clocks; int num_clocks; int * bases; scalar_t__ domain; } ;
typedef int irqreturn_t ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct rk_iommu*,int,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,void*,int) ;
 int FUNC_9 (int ,int ) ;
 void* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_14, void *VAR_15)
{
 struct rk_iommu *VAR_16 = VAR_15;
 u32 VAR_17;
 u32 VAR_18;
 dma_addr_t VAR_19;
 irqreturn_t VAR_20 = VAR_3;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_6(VAR_16->dev);
 if (FUNC_1(VAR_22 <= 0))
  return VAR_20;

 if (FUNC_0(FUNC_3(VAR_16->num_clocks, VAR_16->clocks)))
  goto out;

 for (VAR_21 = 0; VAR_21 < VAR_16->num_mmu; VAR_21++) {
  VAR_18 = FUNC_10(VAR_16->bases[VAR_21], VAR_7);
  if (VAR_18 == 0)
   continue;

  VAR_20 = VAR_2;
  VAR_19 = FUNC_10(VAR_16->bases[VAR_21], VAR_11);

  if (VAR_18 & VAR_10) {
   int VAR_23;

   VAR_17 = FUNC_10(VAR_16->bases[VAR_21], VAR_12);
   VAR_23 = (VAR_17 & VAR_13) ?
     VAR_1 : VAR_0;

   FUNC_4(VAR_16->dev, "Page fault at %pad of type %s\n",
    &VAR_19,
    (VAR_23 == VAR_1) ? "write" : "read");

   FUNC_5(VAR_16, VAR_21, VAR_19);






   if (VAR_16->domain)
    FUNC_8(VAR_16->domain, VAR_16->dev, VAR_19,
         VAR_23);
   else
    FUNC_4(VAR_16->dev, "Page fault while iommu not attached to domain?\n");

   FUNC_9(VAR_16->bases[VAR_21], VAR_5);
   FUNC_9(VAR_16->bases[VAR_21], VAR_4);
  }

  if (VAR_18 & VAR_8)
   FUNC_4(VAR_16->dev, "BUS_ERROR occurred at %pad\n", &VAR_19);

  if (VAR_18 & ~VAR_9)
   FUNC_4(VAR_16->dev, "unexpected int_status: %#08x\n",
    VAR_18);

  FUNC_11(VAR_16->bases[VAR_21], VAR_6, VAR_18);
 }

 FUNC_2(VAR_16->num_clocks, VAR_16->clocks);

out:
 FUNC_7(VAR_16->dev);
 return VAR_20;
}
