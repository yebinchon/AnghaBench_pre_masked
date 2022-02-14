
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_16 {int dummy; } ;
struct TYPE_2__ {int gatt_bus_addr; int dev; int gart_bus_addr; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 u32 VAR_4;
 struct aper_size_info_16 *VAR_5;

 VAR_5 = FUNC_0(VAR_3->current_size);


 VAR_3->gart_bus_addr = FUNC_1(VAR_3->dev,
          VAR_0);


 FUNC_3(VAR_3->dev, VAR_1,
  VAR_3->gatt_bus_addr & 0xfffff000);






 FUNC_2(VAR_3->dev, VAR_2, &VAR_4);
 FUNC_3(VAR_3->dev, VAR_2, VAR_4 | (3<<7));
 return 0;
}
