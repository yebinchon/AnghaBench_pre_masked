
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_8__ {int gatt_bus_addr; TYPE_1__* dev; int gart_bus_addr; int current_size; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_7(void)
{
 u32 VAR_8;
 u8 VAR_9;
 struct aper_size_info_8 *VAR_10;




 if (VAR_7->gatt_bus_addr & VAR_3) {
  FUNC_1(&VAR_7->dev->dev, "gatt bus addr too high");
  return -VAR_1;
 }

 VAR_10 = FUNC_0(VAR_7->current_size);


 FUNC_5(VAR_7->dev, VAR_5,
   VAR_10->size_value);


 VAR_7->gart_bus_addr = FUNC_2(VAR_7->dev,
          VAR_0);

 FUNC_4(VAR_7->dev, VAR_6, &VAR_8);
 VAR_8 &= VAR_3;
 VAR_8 |= VAR_7->gatt_bus_addr;
 FUNC_6(VAR_7->dev, VAR_6, VAR_8);


 FUNC_6(VAR_7->dev, VAR_4, 0x0000);


 FUNC_3(VAR_7->dev, VAR_2, &VAR_9);
 FUNC_5(VAR_7->dev, VAR_2, VAR_9 | (1 << 1));



 return 0;
}
