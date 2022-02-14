
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_3__ {void* uz_fails; void* uz_frees; void* uz_allocs; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(uma_zone_t VAR_1)
{

 VAR_1->uz_allocs = FUNC_0(VAR_0);
 VAR_1->uz_frees = FUNC_0(VAR_0);
 VAR_1->uz_fails = FUNC_0(VAR_0);
}
