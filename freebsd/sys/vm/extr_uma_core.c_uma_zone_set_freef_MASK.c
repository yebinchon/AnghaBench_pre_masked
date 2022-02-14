
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uma_zone_t ;
typedef TYPE_1__* uma_keg_t ;
typedef int uma_free ;
struct TYPE_5__ {int uk_freef; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(uma_zone_t VAR_0, uma_free VAR_1)
{
 uma_keg_t VAR_2;

 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_2 != ((void*)0), ("uma_zone_set_freef: Invalid zone type"));
 FUNC_2(VAR_2);
 VAR_2->uk_freef = VAR_1;
 FUNC_3(VAR_2);
}
