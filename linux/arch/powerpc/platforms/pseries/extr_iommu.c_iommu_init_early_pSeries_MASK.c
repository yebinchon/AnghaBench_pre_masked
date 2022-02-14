
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_dev_setup; int dma_bus_setup; int iommu_bypass_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 if (VAR_6 && FUNC_2(VAR_6, "linux,iommu-off", ((void*)0)))
  return;

 if (FUNC_0(VAR_0)) {
  VAR_11.dma_bus_setup = VAR_8;
  VAR_11.dma_dev_setup = VAR_10;
  if (!VAR_1)
   VAR_11.iommu_bypass_supported =
    VAR_3;
 } else {
  VAR_11.dma_bus_setup = VAR_7;
  VAR_11.dma_dev_setup = VAR_9;
 }


 FUNC_3(&VAR_5);
 FUNC_4(&VAR_4);
 if (!FUNC_1())
  FUNC_5(&VAR_2);
}
