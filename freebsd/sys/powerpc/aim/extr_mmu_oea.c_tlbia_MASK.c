
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(void)
{
 vm_offset_t VAR_0;

 for (VAR_0 = 0; VAR_0 < 0x00040000; VAR_0 += 0x00001000) {
  __asm __volatile("tlbie %0" :: "r"(VAR_0));
  FUNC_0();
 }
 __asm __volatile("tlbsync");
 FUNC_0();
}
