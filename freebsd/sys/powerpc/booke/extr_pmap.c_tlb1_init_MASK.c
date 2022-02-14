
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef void* vm_offset_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;

void
FUNC_8()
{
 vm_offset_t VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
 uint32_t VAR_17;

 FUNC_5();

 VAR_13 = FUNC_1(1) | FUNC_0(0);
 FUNC_3(VAR_4, VAR_13);
 __asm __volatile("isync; tlbre");

 VAR_14 = FUNC_2(VAR_5);
 VAR_12 = FUNC_2(VAR_6);
 VAR_15 = FUNC_2(VAR_7);
 VAR_16 = FUNC_2(VAR_8);

 VAR_9 = ((vm_paddr_t)(VAR_16 & VAR_3) << 32) |
     (VAR_15 & VAR_2);

 VAR_17 = (VAR_14 & VAR_0) >> VAR_1;
 VAR_10 += (VAR_17 > 0) ? FUNC_7(VAR_17) : 0;
 VAR_11 = FUNC_6(VAR_12);


 FUNC_4();
}
