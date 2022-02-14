
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
struct TYPE_10__ {int needs_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int *,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

vm_offset_t
FUNC_10(vm_map_t VAR_3, vm_size_t VAR_4)
{
 vm_offset_t VAR_5;

 VAR_4 = FUNC_0(VAR_4);
 if (!FUNC_2(VAR_4))
  return (0);

 for (;;) {




  FUNC_5(VAR_3);
  VAR_5 = FUNC_3(VAR_3, FUNC_7(VAR_3), VAR_4);
  if (VAR_5 + VAR_4 <= FUNC_6(VAR_3))
   break;

  if (FUNC_6(VAR_3) - FUNC_7(VAR_3) < VAR_4) {
   FUNC_8(VAR_3);
   FUNC_1(VAR_4);
   return (0);
  }
  VAR_3->needs_wakeup = VAR_1;
  FUNC_9(VAR_3, 0);
 }
 FUNC_4(VAR_3, ((void*)0), 0, VAR_5, VAR_5 + VAR_4, VAR_2, VAR_2,
     VAR_0);
 FUNC_8(VAR_3);
 return (VAR_5);
}
