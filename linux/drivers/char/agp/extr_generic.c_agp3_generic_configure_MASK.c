
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_16 {int size_value; } ;
struct TYPE_2__ {int gatt_bus_addr; scalar_t__ capndx; int dev; int gart_bus_addr; int current_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

int FUNC_5(void)
{
 u32 VAR_7;
 struct aper_size_info_16 *VAR_8;

 VAR_8 = FUNC_0(VAR_6->current_size);

 VAR_6->gart_bus_addr = FUNC_1(VAR_6->dev,
          VAR_5);


 FUNC_4(VAR_6->dev, VAR_6->capndx+VAR_0, VAR_8->size_value);

 FUNC_3(VAR_6->dev, VAR_6->capndx+VAR_4, VAR_6->gatt_bus_addr);

 FUNC_2(VAR_6->dev, VAR_6->capndx+VAR_1, &VAR_7);
 FUNC_3(VAR_6->dev, VAR_6->capndx+VAR_1, VAR_7 | VAR_2 | VAR_3);
 return 0;
}
