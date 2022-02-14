
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct ecard_driver {TYPE_1__ drv; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct ecard_driver *VAR_1)
{
 VAR_1->drv.bus = &VAR_0;

 return FUNC_0(&VAR_1->drv);
}
