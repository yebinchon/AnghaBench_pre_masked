
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_window {TYPE_1__* map; } ;
typedef int device_t ;
typedef int bus_size_t ;
struct TYPE_5__ {int ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {int vmem; int iobn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int,int ,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;

int
FUNC_4(device_t VAR_5, bus_dma_segment_t *VAR_6, int VAR_7, void *VAR_8)
{
 struct dma_window *VAR_9 = VAR_8;
 bus_addr_t VAR_10;
 bus_size_t VAR_11;
 int VAR_12;
 bus_addr_t VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_10 = FUNC_2(VAR_6[VAR_12].ds_addr);
  VAR_11 = FUNC_1(VAR_6[VAR_12].ds_len +
      (VAR_6[VAR_12].ds_addr & VAR_2));

  if (VAR_4) {
   FUNC_0(VAR_1, VAR_9->map->iobn, VAR_10, 0,
       VAR_11/VAR_3);
  } else {
   for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13 += VAR_3)
    FUNC_0(VAR_0, VAR_9->map->iobn,
        VAR_10 + VAR_13, 0);
  }

  FUNC_3(VAR_9->map->vmem, VAR_10, VAR_11);
 }

 return (0);
}
