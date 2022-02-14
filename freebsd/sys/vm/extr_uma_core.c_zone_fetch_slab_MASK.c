
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef int * uma_slab_t ;
typedef int * uma_keg_t ;
struct TYPE_4__ {int * uz_keg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,TYPE_1__*,int,int) ;

__attribute__((used)) static uma_slab_t
FUNC_3(uma_zone_t VAR_2, uma_keg_t VAR_3, int VAR_4, int VAR_5)
{
 uma_slab_t VAR_6;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_2->uz_keg;
  FUNC_0(VAR_3);
 }

 for (;;) {
  VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_4, VAR_5);
  if (VAR_6)
   return (VAR_6);
  if (VAR_5 & (VAR_1 | VAR_0))
   break;
 }
 FUNC_1(VAR_3);
 return (((void*)0));
}
