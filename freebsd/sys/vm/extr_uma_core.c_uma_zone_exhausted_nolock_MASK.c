
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_3__ {scalar_t__ uz_sleepers; } ;



int
FUNC_0(uma_zone_t VAR_0)
{
 return (VAR_0->uz_sleepers > 0);
}
