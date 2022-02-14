
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_window {scalar_t__ start; scalar_t__ end; TYPE_1__* map; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_5__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {int iobn; int vmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__*) ;

int
FUNC_6(device_t VAR_6, bus_dma_segment_t *VAR_7, int *VAR_8,
    bus_addr_t VAR_9, bus_addr_t VAR_10, bus_size_t VAR_11, bus_addr_t VAR_12,
    void *VAR_13)
{
 struct dma_window *VAR_14 = VAR_13;
 bus_addr_t VAR_15, VAR_16;
 bus_addr_t VAR_17;
 bus_size_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 uint64_t VAR_22;
 VAR_15 = VAR_14->start;
 VAR_16 = VAR_14->end;


 if (VAR_9 < VAR_16)
  VAR_16 = VAR_9;


 for (VAR_20 = 0; VAR_20 < *VAR_8; VAR_20++) {
  VAR_18 = FUNC_3(VAR_7[VAR_20].ds_len +
      (VAR_7[VAR_20].ds_addr & VAR_4));
  VAR_19 = FUNC_5(VAR_14->map->vmem, VAR_18,
      (VAR_11 < VAR_5) ? VAR_5 : VAR_11, 0,
      VAR_12, VAR_15, VAR_16, VAR_2 | VAR_3, &VAR_17);
  if (VAR_19 != 0) {
   FUNC_1("VMEM failure: %d\n", VAR_19);
   return (VAR_19);
  }
  FUNC_0(VAR_17 % VAR_5 == 0, ("Alloc not page aligned"));
  FUNC_0((VAR_17 + (VAR_7[VAR_20].ds_addr & VAR_4)) %
      VAR_11 == 0,
      ("Allocated segment does not match alignment constraint"));

  VAR_22 = FUNC_4(VAR_7[VAR_20].ds_addr);
  VAR_22 |= 0x3;
  for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21 += VAR_5) {
   VAR_19 = FUNC_2(VAR_1, VAR_14->map->iobn,
       VAR_17 + VAR_21, VAR_22 + VAR_21);
   if (VAR_19 < 0) {
    FUNC_1("IOMMU mapping error: %d\n", VAR_19);
    return (VAR_0);
   }
  }

  VAR_7[VAR_20].ds_addr = VAR_17 + (VAR_7[VAR_20].ds_addr & VAR_4);
  FUNC_0(VAR_7[VAR_20].ds_addr > 0, ("Address needs to be positive"));
  FUNC_0(VAR_7[VAR_20].ds_addr + VAR_7[VAR_20].ds_len < VAR_16,
      ("Address not in range"));
  if (VAR_19 < 0) {
   FUNC_1("IOMMU mapping error: %d\n", VAR_19);
   return (VAR_0);
  }
 }

 return (0);
}
