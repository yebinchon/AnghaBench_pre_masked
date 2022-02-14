
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vm_page_t VAR_3, boolean_t VAR_4)
{
 int VAR_5;
 int VAR_6;







 for (VAR_5 = VAR_6 = 0; VAR_6 <= VAR_2 / VAR_1; ++VAR_6) {
  if (VAR_6 == (VAR_2 / VAR_1) ||
      (VAR_3->valid & ((vm_page_bits_t)1 << VAR_6))) {
   if (VAR_6 > VAR_5) {
    FUNC_0(VAR_3,
        VAR_5 << VAR_0, (VAR_6 - VAR_5) << VAR_0);
   }
   VAR_5 = VAR_6 + 1;
  }
 }






 if (VAR_4)
  FUNC_1(VAR_3);
}
