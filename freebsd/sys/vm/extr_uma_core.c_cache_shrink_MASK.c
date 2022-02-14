
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_5__ {int uz_flags; int uz_count; int uz_count_min; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(uma_zone_t VAR_1)
{

 if (VAR_1->uz_flags & VAR_0)
  return;

 FUNC_0(VAR_1);
 VAR_1->uz_count = (VAR_1->uz_count_min + VAR_1->uz_count) / 2;
 FUNC_1(VAR_1);
}
