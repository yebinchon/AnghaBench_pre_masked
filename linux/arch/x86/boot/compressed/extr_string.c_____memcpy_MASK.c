
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void *FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 long VAR_3, VAR_4, VAR_5;
 asm volatile(
  "rep ; movsq\n\t"
  "movq %4,%%rcx\n\t"
  "rep ; movsb\n\t"
  : "=&c" (VAR_3), "=&D" (VAR_4), "=&S" (VAR_5)
  : "0" (VAR_2 >> 3), "g" (VAR_2 & 7), "1" (VAR_0), "2" (VAR_1)
  : "memory");

 return VAR_0;
}
