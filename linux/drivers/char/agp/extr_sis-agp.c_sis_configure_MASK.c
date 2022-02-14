
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {int dev; int gatt_bus_addr; int gart_bus_addr; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct aper_size_info_8 *VAR_5;

 VAR_5 = FUNC_0(VAR_4->current_size);
 FUNC_2(VAR_4->dev, VAR_3, 0x05);
 VAR_4->gart_bus_addr = FUNC_1(VAR_4->dev,
          VAR_0);
 FUNC_3(VAR_4->dev, VAR_2,
          VAR_4->gatt_bus_addr);
 FUNC_2(VAR_4->dev, VAR_1,
         VAR_5->size_value);
 return 0;
}
