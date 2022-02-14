
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
struct thread {int td_kstack_pages; scalar_t__ td_kstack; int * td_kstack_obj; } ;
struct TYPE_2__ {int * object; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,int **,int) ;

int
FUNC_6(struct thread *VAR_5, int VAR_6)
{
 vm_object_t VAR_7;
 vm_offset_t VAR_8;


 if (VAR_6 <= 1)
  VAR_6 = VAR_4;
 else if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_8 = 0;
 VAR_7 = ((void*)0);
 if (VAR_6 == VAR_4 && VAR_3 != ((void*)0)) {
  VAR_8 = (vm_offset_t)FUNC_4(VAR_3, VAR_1);
  if (VAR_8 != 0)
   VAR_7 = FUNC_2(FUNC_3(VAR_8))->object;
 }






 if (VAR_8 == 0)
  VAR_8 = FUNC_5(FUNC_0(FUNC_1(VAR_2)),
      &VAR_7, VAR_6);
 if (VAR_8 == 0)
  return (0);
 VAR_5->td_kstack_obj = VAR_7;
 VAR_5->td_kstack = VAR_8;
 VAR_5->td_kstack_pages = VAR_6;
 return (1);
}
