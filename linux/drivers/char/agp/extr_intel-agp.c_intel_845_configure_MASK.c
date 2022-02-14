
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {scalar_t__ apbase_config; int gart_bus_addr; int gatt_bus_addr; int dev; int current_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u8 VAR_8;
 struct aper_size_info_8 *VAR_9;

 VAR_9 = FUNC_0(VAR_7->current_size);


 FUNC_3(VAR_7->dev, VAR_3, VAR_9->size_value);

 if (VAR_7->apbase_config != 0) {
  FUNC_4(VAR_7->dev, VAR_0,
           VAR_7->apbase_config);
 } else {

  VAR_7->gart_bus_addr = FUNC_1(VAR_7->dev,
           VAR_1);
  VAR_7->apbase_config = VAR_7->gart_bus_addr;
 }


 FUNC_4(VAR_7->dev, VAR_4, VAR_7->gatt_bus_addr);


 FUNC_4(VAR_7->dev, VAR_2, 0x0000);


 FUNC_2(VAR_7->dev, VAR_5, &VAR_8);
 FUNC_3(VAR_7->dev, VAR_5, VAR_8 | (1 << 1));

 FUNC_5(VAR_7->dev, VAR_6, 0x001c);
 return 0;
}
