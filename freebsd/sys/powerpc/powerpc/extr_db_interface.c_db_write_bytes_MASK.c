
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef void* jmp_buf ;


 int FUNC_0 (void*,size_t) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

int
FUNC_3(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 jmp_buf VAR_3;
 void *VAR_4;
 char *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_3);
 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 == 0) {
  VAR_5 = (char *)VAR_0;
  VAR_6 = VAR_1;

  if (VAR_1 == 8)
   *((uint64_t*)VAR_5) = *((uint64_t*)VAR_2);
  if (VAR_1 == 4)
   *((int*)VAR_5) = *((int*)VAR_2);
  else
  if (VAR_1 == 2)
   *((short*)VAR_5) = *((short*)VAR_2);
  else
   while (VAR_6-- > 0)
    *VAR_5++ = *VAR_2++;
  FUNC_0((void *)VAR_0, VAR_1);
 }
 (void)FUNC_1(VAR_4);
 return (VAR_7);
}
