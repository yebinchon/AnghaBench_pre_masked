
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int * vm_object_t ;
typedef int u_int ;
struct TYPE_9__ {int oflags; int ref_count; int * object; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int) ;
 scalar_t__ FUNC_6 (int **) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int) ;

void
FUNC_14(vm_page_t VAR_2, int VAR_3)
{
 vm_object_t VAR_4;
 u_int VAR_5;
 bool VAR_6;

 FUNC_0((VAR_2->oflags & VAR_0) == 0,
     ("vm_page_release: page %p is unmanaged", VAR_2));

 if ((VAR_3 & VAR_1) != 0) {
  for (;;) {
   VAR_4 = (vm_object_t)FUNC_6(&VAR_2->object);
   if (VAR_4 == ((void*)0))
    break;

   if (FUNC_7(VAR_2) || !FUNC_1(VAR_4)) {
    VAR_4 = ((void*)0);
    break;
   }
   if (VAR_4 == VAR_2->object)
    break;
   FUNC_2(VAR_4);
  }
  if (FUNC_4(VAR_4 != ((void*)0))) {
   FUNC_10(VAR_2, VAR_3);
   FUNC_2(VAR_4);
   return;
  }
 }






 VAR_5 = VAR_2->ref_count;
 VAR_6 = 0;
 do {
  FUNC_0(FUNC_3(VAR_5) > 0,
      ("vm_page_unwire: wire count underflow for page %p", VAR_2));
  if (!VAR_6 && FUNC_3(VAR_5) == 1) {
   FUNC_9(VAR_2);
   VAR_6 = 1;
   FUNC_11(VAR_2, VAR_3);
  }
 } while (!FUNC_5(&VAR_2->ref_count, &VAR_5, VAR_5 - 1));






 if (VAR_6)
  FUNC_12(VAR_2);

 if (FUNC_3(VAR_5) == 1) {
  FUNC_13(1);
  if (VAR_5 == 1)
   FUNC_8(VAR_2);
 }
}
