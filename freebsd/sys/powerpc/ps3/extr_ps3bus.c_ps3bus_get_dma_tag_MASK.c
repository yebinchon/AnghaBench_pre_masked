
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3bus_softc {int rcount; TYPE_1__* regions; } ;
struct ps3bus_devinfo {scalar_t__ bustype; scalar_t__ devtype; int * dma_tag; int iommu_mtx; int * dma_base; int dev; int bus; } ;
typedef int device_t ;
typedef int * bus_dma_tag_t ;
struct TYPE_2__ {int mr_size; int mr_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int **) ;
 int FUNC_1 (int *,int ,struct ps3bus_devinfo*) ;
 int * FUNC_2 (int ) ;
 struct ps3bus_devinfo* FUNC_3 (int ) ;
 struct ps3bus_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int ,int ,int ,int,int,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bus_dma_tag_t
FUNC_10(device_t VAR_5, device_t VAR_6)
{
 struct ps3bus_devinfo *VAR_7 = FUNC_3(VAR_6);
 struct ps3bus_softc *VAR_8 = FUNC_4(VAR_5);
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_7->bustype != VAR_3 &&
     VAR_7->bustype != VAR_2)
  return (FUNC_2(VAR_5));

 FUNC_8(&VAR_7->iommu_mtx);
 if (VAR_7->dma_tag != ((void*)0)) {
  FUNC_9(&VAR_7->iommu_mtx);
  return (VAR_7->dma_tag);
 }

 VAR_11 = 0;
 if (VAR_7->bustype == VAR_3 &&
     VAR_7->devtype == VAR_4)
  VAR_11 = 2;

 VAR_12 = 24;
 if (VAR_7->bustype == VAR_2)
  VAR_12 = 12;

 for (VAR_9 = 0; VAR_9 < VAR_8->rcount; VAR_9++) {
  VAR_10 = FUNC_6(VAR_7->bus, VAR_7->dev,
      VAR_8->regions[VAR_9].mr_size, VAR_12, VAR_11,
      &VAR_7->dma_base[VAR_9]);
  if (VAR_10 != 0) {
   FUNC_5(VAR_6,
       "could not allocate DMA region %d: %d\n", VAR_9, VAR_10);
   goto fail;
  }

  VAR_10 = FUNC_7(VAR_7->bus, VAR_7->dev,
      VAR_8->regions[VAR_9].mr_start, VAR_7->dma_base[VAR_9],
      VAR_8->regions[VAR_9].mr_size,
      0xf800000000000800UL );
  if (VAR_10 != 0) {
   FUNC_5(VAR_6,
       "could not map DMA region %d: %d\n", VAR_9, VAR_10);
   goto fail;
  }
 }

 VAR_10 = FUNC_0(FUNC_2(VAR_5),
     1, 0, VAR_0, VAR_0,
     ((void*)0), ((void*)0), VAR_1, 0, VAR_1,
     0, ((void*)0), ((void*)0), &VAR_7->dma_tag);
 if (VAR_7->bustype != VAR_2)
  FUNC_1(VAR_7->dma_tag, VAR_5, VAR_7);

fail:
 FUNC_9(&VAR_7->iommu_mtx);

 if (VAR_10)
  return (((void*)0));

 return (VAR_7->dma_tag);
}
