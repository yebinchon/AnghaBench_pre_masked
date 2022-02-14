
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_lanes; int rate; } ;
struct TYPE_3__ {TYPE_2__ base; scalar_t__ spread; scalar_t__ scrambler_dis; } ;
struct tc_data {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_0(struct tc_data *VAR_7)
{




 u32 VAR_8 = VAR_4 | VAR_2 | VAR_1;

 if (VAR_7->link.scrambler_dis)
  VAR_8 |= VAR_5;
 if (VAR_7->link.spread)
  VAR_8 |= VAR_6;
 if (VAR_7->link.base.num_lanes == 2)
  VAR_8 |= VAR_3;
 if (VAR_7->link.base.rate != 162000)
  VAR_8 |= VAR_0;
 return VAR_8;
}
