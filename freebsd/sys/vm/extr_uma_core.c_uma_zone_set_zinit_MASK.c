
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* uma_zone_t ;
typedef int uma_init ;
struct TYPE_7__ {int uz_init; TYPE_1__* uz_keg; } ;
struct TYPE_6__ {scalar_t__ uk_pages; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(uma_zone_t VAR_0, uma_init VAR_1)
{

 FUNC_1(VAR_0);
 FUNC_0(VAR_0->uz_keg->uk_pages == 0,
     ("uma_zone_set_zinit on non-empty keg"));
 VAR_0->uz_init = VAR_1;
 FUNC_2(VAR_0);
}
