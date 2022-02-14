
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct device *VAR_1, phys_addr_t VAR_2,
  size_t VAR_3, enum dma_data_direction VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_2);

 do {
  FUNC_2(VAR_0, &FUNC_1(VAR_5)->flags);
 } while (++VAR_5 <= FUNC_0(VAR_2 + VAR_3 - 1));
}
