
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_12__ {int oflags; scalar_t__ dirty; TYPE_10__* object; } ;
struct TYPE_11__ {scalar_t__ ref_count; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_10__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

void
FUNC_9(vm_page_t VAR_2, int VAR_3)
{

 FUNC_1(VAR_2->object);
 FUNC_0((VAR_2->oflags & VAR_0) == 0,
     ("vm_page_release_locked: page %p is unmanaged", VAR_2));

 if (FUNC_8(VAR_2)) {
  if ((VAR_3 & VAR_1) != 0 &&
      (VAR_2->object->ref_count == 0 || !FUNC_2(VAR_2)) &&
      VAR_2->dirty == 0 && !FUNC_3(VAR_2)) {
   FUNC_4(VAR_2);
  } else {
   FUNC_5(VAR_2);
   FUNC_6(VAR_2, VAR_3);
   FUNC_7(VAR_2);
  }
 }
}
