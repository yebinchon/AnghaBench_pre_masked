
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;

void
FUNC_1(void *VAR_1, size_t VAR_2)
{
 register_t VAR_3, VAR_4;






 VAR_3 = (uintptr_t)VAR_1;
 VAR_4 = VAR_3 & (VAR_0 - 1);
 VAR_3 -= VAR_4;
 VAR_2 = FUNC_0(VAR_2 + VAR_4, VAR_0);

 while (VAR_2 > 0) {
  __asm __volatile ("dcbf 0,%0" :: "r"(VAR_3));
  __asm __volatile ("sync");
  VAR_3 += VAR_0;
  VAR_2 -= VAR_0;
 }
}
