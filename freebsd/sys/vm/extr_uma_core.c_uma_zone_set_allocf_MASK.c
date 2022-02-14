
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uma_zone_t ;
typedef TYPE_1__* uma_keg_t ;
typedef int uma_alloc ;
struct TYPE_5__ {int uk_allocf; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(uma_zone_t VAR_0, uma_alloc VAR_1)
{
 uma_keg_t VAR_2;

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2);
 VAR_2->uk_allocf = VAR_1;
 FUNC_2(VAR_2);
}
