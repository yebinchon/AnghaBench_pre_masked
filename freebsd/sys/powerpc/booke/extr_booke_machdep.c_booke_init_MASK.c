
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_offset_t ;
typedef uintptr_t u_long ;





 scalar_t__ VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (uintptr_t,uintptr_t*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (void*,void*,scalar_t__) ;
 int FUNC_7 () ;
 uintptr_t FUNC_8 (uintptr_t,int ,int ,void*,int) ;
 uintptr_t FUNC_9 (uintptr_t,int) ;
 int FUNC_10 () ;

uintptr_t
FUNC_11(u_long VAR_8, u_long VAR_9)
{
 uintptr_t VAR_10;
 void *VAR_11;
 vm_offset_t VAR_12, VAR_13;

 VAR_13 = (uintptr_t)VAR_4;
 VAR_12 = (vm_offset_t)((void*)0);


 VAR_5 = ((void*)0);
 FUNC_4(VAR_3, VAR_2 - VAR_3);
 FUNC_4(VAR_0, VAR_4 - VAR_0);
 FUNC_10();
 if (VAR_8 == 0)
  VAR_11 = (void *)VAR_9;
 else if (FUNC_0(VAR_8, &VAR_12) == 0) {
  VAR_13 = FUNC_9(VAR_13, 8);
  FUNC_6((void *)VAR_13, (void *)VAR_12, FUNC_5((void *)VAR_12));
  VAR_12 = VAR_13;
  VAR_13 += FUNC_5((void *)VAR_12);
  VAR_1 = VAR_13;
  VAR_11 = ((void*)0);
 } else if (VAR_8 > (uintptr_t)VAR_7)
  VAR_11 = (void *)VAR_8;
 else
  VAR_11 = ((void*)0);


 switch ((FUNC_7()) >> 16) {
 case 130:
 case 129:
 case 128:
  VAR_6 = 64;
  break;
 }





 VAR_10 = FUNC_8(VAR_12, 0, 0, VAR_11, (VAR_11 == ((void*)0)) ? 0 : 0xfb5d104d);


 FUNC_2();
 FUNC_3();

 FUNC_1();

 return (VAR_10);
}
