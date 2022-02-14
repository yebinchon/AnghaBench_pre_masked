
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_5__ {int uz_max_items; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(uma_zone_t VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->uz_max_items;
 FUNC_1(VAR_0);

 return (VAR_1);
}
