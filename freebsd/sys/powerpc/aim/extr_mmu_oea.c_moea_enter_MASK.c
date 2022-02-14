
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pmap_t ;
typedef int mmu_t ;
typedef int int8_t ;
struct TYPE_4__ {int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(mmu_t VAR_5, pmap_t VAR_6, vm_offset_t VAR_7, vm_page_t VAR_8, vm_prot_t VAR_9,
    u_int VAR_10, int8_t VAR_11)
{
 int VAR_12;

 for (;;) {
  FUNC_4(&VAR_4);
  FUNC_0(VAR_6);
  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  FUNC_5(&VAR_4);
  FUNC_1(VAR_6);
  if (VAR_12 != VAR_0)
   return (VAR_2);
  if ((VAR_10 & VAR_3) != 0)
   return (VAR_1);
  FUNC_2(VAR_8->object);
  FUNC_6(((void*)0));
 }
}
