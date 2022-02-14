
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_driver_data {int mem_buses; TYPE_3__* vd; TYPE_2__* pd; TYPE_1__* adev; } ;
struct TYPE_6__ {scalar_t__ dualmaster; } ;
struct TYPE_5__ {int memcpy_burst_size; int memcpy_bus_width; scalar_t__ memcpy_prot_cache; scalar_t__ memcpy_prot_buff; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct pl08x_driver_data *VAR_20)
{
 u32 VAR_21 = 0;


 switch (VAR_20->pd->memcpy_burst_size) {
 default:
  FUNC_0(&VAR_20->adev->dev,
   "illegal burst size for memcpy, set to 1\n");

 case 138:
  VAR_21 |= VAR_0 << VAR_14 |
   VAR_0 << VAR_8;
  break;
 case 133:
  VAR_21 |= VAR_5 << VAR_14 |
   VAR_5 << VAR_8;
  break;
 case 131:
  VAR_21 |= VAR_7 << VAR_14 |
   VAR_7 << VAR_8;
  break;
 case 136:
  VAR_21 |= VAR_2 << VAR_14 |
   VAR_2 << VAR_8;
  break;
 case 134:
  VAR_21 |= VAR_4 << VAR_14 |
   VAR_4 << VAR_8;
  break;
 case 132:
  VAR_21 |= VAR_6 << VAR_14 |
   VAR_6 << VAR_8;
  break;
 case 137:
  VAR_21 |= VAR_1 << VAR_14 |
   VAR_1 << VAR_8;
  break;
 case 135:
  VAR_21 |= VAR_3 << VAR_14 |
   VAR_3 << VAR_8;
  break;
 }

 switch (VAR_20->pd->memcpy_bus_width) {
 default:
  FUNC_0(&VAR_20->adev->dev,
   "illegal bus width for memcpy, set to 8 bits\n");

 case 128:
  VAR_21 |= VAR_19 << VAR_16 |
   VAR_19 << VAR_10;
  break;
 case 130:
  VAR_21 |= VAR_17 << VAR_16 |
   VAR_17 << VAR_10;
  break;
 case 129:
  VAR_21 |= VAR_18 << VAR_16 |
   VAR_18 << VAR_10;
  break;
 }


 if (VAR_20->pd->memcpy_prot_buff)
  VAR_21 |= VAR_11;
 if (VAR_20->pd->memcpy_prot_cache)
  VAR_21 |= VAR_12;


 VAR_21 |= VAR_13;


 VAR_21 |= VAR_15 | VAR_9;

 if (VAR_20->vd->dualmaster)
  VAR_21 |= FUNC_1(0,
      VAR_20->mem_buses,
      VAR_20->mem_buses);

 return VAR_21;
}
