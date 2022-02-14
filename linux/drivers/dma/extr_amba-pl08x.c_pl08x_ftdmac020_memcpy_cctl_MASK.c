
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_driver_data {int mem_buses; TYPE_1__* vd; TYPE_3__* adev; TYPE_2__* pd; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int memcpy_bus_width; } ;
struct TYPE_4__ {scalar_t__ dualmaster; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct pl08x_driver_data *VAR_6)
{
 u32 VAR_7 = 0;


 switch (VAR_6->pd->memcpy_bus_width) {
 default:
  FUNC_0(&VAR_6->adev->dev,
   "illegal bus width for memcpy, set to 8 bits\n");

 case 128:
  VAR_7 |= VAR_5 << VAR_1 |
   VAR_5 << VAR_0;
  break;
 case 130:
  VAR_7 |= VAR_3 << VAR_1 |
   VAR_3 << VAR_0;
  break;
 case 129:
  VAR_7 |= VAR_4 << VAR_1 |
   VAR_4 << VAR_0;
  break;
 }





 VAR_7 |= VAR_2;





 if (VAR_6->vd->dualmaster)
  VAR_7 |= FUNC_1(1,
      VAR_6->mem_buses,
      VAR_6->mem_buses);

 return VAR_7;
}
