
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_32 {int size_value; } ;
struct TYPE_6__ {int gatt_bus_addr; int gart_bus_addr; scalar_t__ type; TYPE_1__* dev; int current_size; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct aper_size_info_32* FUNC_0 (int ) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 u32 VAR_5;
 struct aper_size_info_32 *VAR_6;

 VAR_6 = FUNC_0(VAR_4->current_size);


 FUNC_3(VAR_4->dev, VAR_1, &VAR_5);
 VAR_5 = (((VAR_5 & 0x00000ff0) | (VAR_4->gatt_bus_addr & 0xfffff000))
   | (VAR_6->size_value & 0xf));
 FUNC_4(VAR_4->dev, VAR_1, VAR_5);


 FUNC_3(VAR_4->dev, VAR_3, &VAR_5);
 FUNC_4(VAR_4->dev, VAR_3, ((VAR_5 & 0xffffff00) | 0x00000010));


 VAR_4->gart_bus_addr = FUNC_2(VAR_4->dev,
          VAR_0);
 FUNC_3(VAR_4->dev, VAR_3, &VAR_5);
 VAR_5 &= 0xffffff7f;
 FUNC_4(VAR_4->dev, VAR_3, VAR_5);

 return 0;
}
