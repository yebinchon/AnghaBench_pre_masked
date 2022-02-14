
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3bus_softc {int rcount; TYPE_1__* regions; } ;
struct ps3bus_devinfo {scalar_t__* dma_base; } ;
typedef int device_t ;
typedef int bus_size_t ;
struct TYPE_5__ {scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int FUNC_0 (int,char*) ;
 struct ps3bus_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, bus_dma_segment_t *VAR_1, int *VAR_2,
    bus_addr_t VAR_3, bus_addr_t VAR_4, bus_size_t VAR_5, bus_addr_t VAR_6,
    void *VAR_7)
{
 struct ps3bus_devinfo *VAR_8 = VAR_7;
 struct ps3bus_softc *VAR_9 = FUNC_1(VAR_0);
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < *VAR_2; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_9->rcount; VAR_11++) {
   if (VAR_1[VAR_10].ds_addr >= VAR_9->regions[VAR_11].mr_start &&
       VAR_1[VAR_10].ds_addr < VAR_9->regions[VAR_11].mr_start +
         VAR_9->regions[VAR_11].mr_size)
    break;
  }
  FUNC_0(VAR_11 < VAR_9->rcount,
      ("Trying to map address %#lx not in physical memory",
      VAR_1[VAR_10].ds_addr));

  VAR_1[VAR_10].ds_addr = VAR_8->dma_base[VAR_11] +
      (VAR_1[VAR_10].ds_addr - VAR_9->regions[VAR_11].mr_start);
 }

 return (0);
}
