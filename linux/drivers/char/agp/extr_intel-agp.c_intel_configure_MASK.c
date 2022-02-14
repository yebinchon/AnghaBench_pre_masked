
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct aper_size_info_16 {int size_value; } ;
struct TYPE_2__ {int gatt_bus_addr; int dev; int gart_bus_addr; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u16 VAR_7;
 struct aper_size_info_16 *VAR_8;

 VAR_8 = FUNC_0(VAR_6->current_size);


 FUNC_5(VAR_6->dev, VAR_2, VAR_8->size_value);


 VAR_6->gart_bus_addr = FUNC_1(VAR_6->dev,
          VAR_0);


 FUNC_4(VAR_6->dev, VAR_3, VAR_6->gatt_bus_addr);


 FUNC_4(VAR_6->dev, VAR_1, 0x2280);


 FUNC_2(VAR_6->dev, VAR_5, &VAR_7);
 FUNC_5(VAR_6->dev, VAR_5,
   (VAR_7 & ~(1 << 10)) | (1 << 9));

 FUNC_3(VAR_6->dev, VAR_4 + 1, 7);
 return 0;
}
