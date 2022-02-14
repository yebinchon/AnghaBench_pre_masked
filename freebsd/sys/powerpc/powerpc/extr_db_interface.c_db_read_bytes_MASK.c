
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef void* jmp_buf ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

int
FUNC_2(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 jmp_buf VAR_3;
 void *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == 0) {
  VAR_5 = (char *)VAR_0;

  if (VAR_1 == 8)
   *((uint64_t*)VAR_2) = *((uint64_t*)VAR_5);
  if (VAR_1 == 4)
   *((int *)VAR_2) = *((int *)VAR_5);
  else if (VAR_1 == 2)
   *((short *)VAR_2) = *((short *)VAR_5);
  else
   while (VAR_1-- > 0)
    *VAR_2++ = *VAR_5++;
 }
 (void)FUNC_0(VAR_4);
 return (VAR_6);
}
