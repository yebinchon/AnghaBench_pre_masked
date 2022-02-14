
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int * vm_object_t ;
typedef int u_int ;
struct TYPE_7__ {int busy_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (TYPE_1__*,int *,char const*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;

__attribute__((used)) static void
FUNC_10(vm_object_t VAR_4, vm_page_t VAR_5, const char *VAR_6,
    bool VAR_7, bool VAR_8)
{
 u_int VAR_9;





 if (VAR_4 != ((void*)0) && FUNC_8(VAR_4)) {
  if (VAR_8)
   FUNC_2(VAR_4);
  FUNC_9(VAR_4, VAR_6);
  return;
 }
 FUNC_5(VAR_5);
 VAR_9 = VAR_5->busy_lock;
 if (VAR_9 == VAR_3 || (VAR_7 && (VAR_9 & VAR_1) != 0) ||
     ((VAR_9 & VAR_2) == 0 &&
     !FUNC_3(&VAR_5->busy_lock, VAR_9, VAR_9 | VAR_2))) {
  if (VAR_8)
   FUNC_2(VAR_4);
  FUNC_6(VAR_5);
  return;
 }
 if (VAR_8)
  FUNC_2(VAR_4);
 FUNC_0();
 FUNC_4(VAR_5, ((void*)0), VAR_6, 0, 0);
 FUNC_7(VAR_5, VAR_0);
 FUNC_1();
}
