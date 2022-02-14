
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef int register_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,void*,int ,scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;

void
FUNC_6(vm_offset_t VAR_6, vm_offset_t VAR_7, vm_offset_t VAR_8, void *VAR_9,
    uint32_t VAR_10)
{
 register_t VAR_11;
 if (VAR_8 == 0)
  FUNC_4(FUNC_1() & ~(VAR_3 | VAR_2));
 switch (FUNC_2() >> 16) {





  case 137:
  case 136:
  case 134:
  case 135:
   VAR_11 = FUNC_3(VAR_4);
   VAR_11 &= ~VAR_1;
   FUNC_5(VAR_4, VAR_11);
   break;
 }
}
