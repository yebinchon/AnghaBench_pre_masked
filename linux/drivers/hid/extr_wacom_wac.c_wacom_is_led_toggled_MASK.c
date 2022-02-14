
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ features; } ;
struct TYPE_4__ {int count; } ;
struct wacom {TYPE_3__ wacom_wac; TYPE_1__ led; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct wacom *VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 int VAR_6;






 if (VAR_2->wacom_wac.features.type == VAR_1)
  VAR_5 = 1 - VAR_5;

 VAR_6 = VAR_5 * (VAR_3/VAR_2->led.count);

 if (VAR_2->wacom_wac.features.type == VAR_0)
  VAR_6 = 8;

 return VAR_4 & (1 << VAR_6);
}
