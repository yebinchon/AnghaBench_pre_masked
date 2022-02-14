
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_5__ {int aflags; scalar_t__ dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_2(vm_page_t VAR_3, int VAR_4, boolean_t *VAR_5)
{

 FUNC_1(VAR_3);






 if ((VAR_4 & VAR_1) != 0 && (VAR_3->aflags & VAR_2) != 0) {
  *VAR_5 = VAR_0;
  return (VAR_0);
 } else {
  FUNC_0(VAR_3);
  return (VAR_3->dirty != 0);
 }
}
