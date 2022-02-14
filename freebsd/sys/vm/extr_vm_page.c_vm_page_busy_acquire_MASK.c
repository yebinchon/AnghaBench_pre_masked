
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int * vm_object_t ;
struct TYPE_7__ {int * object; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,char*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

int
FUNC_8(vm_page_t VAR_5, int VAR_6)
{
 vm_object_t VAR_7;
 bool VAR_8;
 VAR_7 = VAR_5->object;
 for (;;) {
  if ((VAR_6 & VAR_3) == 0) {
   if (FUNC_6(VAR_5))
    return (VAR_1);
  } else {
   if (FUNC_5(VAR_5))
    return (VAR_1);
  }
  if ((VAR_6 & VAR_2) != 0)
   return (VAR_0);
  if (VAR_7 != ((void*)0))
   VAR_8 = FUNC_3(VAR_7);
  else
   VAR_8 = VAR_0;
  FUNC_1(VAR_8 || FUNC_7(VAR_5));
  FUNC_4(VAR_7, VAR_5, "vmpba",
      (VAR_6 & VAR_3) != 0, VAR_8);
  if (VAR_8)
   FUNC_2(VAR_7);
  if ((VAR_6 & VAR_4) != 0)
   return (VAR_0);
  FUNC_0(VAR_5->object == VAR_7 || VAR_5->object == ((void*)0),
      ("vm_page_busy_acquire: page %p does not belong to %p",
      VAR_5, VAR_7));
 }
}
