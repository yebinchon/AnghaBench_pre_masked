
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct desc_ptr {unsigned long address; int size; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u16 VAR_1)
{
 struct desc_ptr VAR_2;


 VAR_2.size = VAR_1;
 VAR_2.address = (unsigned long)VAR_0;

 __asm__ __volatile__ (
  "lidtq %0\n"
  : : "m" (VAR_2)
  );
}
