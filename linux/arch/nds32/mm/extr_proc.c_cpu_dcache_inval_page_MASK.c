
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long VAR_2 ;

void FUNC_0(unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_1[VAR_0].line_size;
 VAR_5 = VAR_3 + VAR_2;

 do {
  VAR_5 -= VAR_4;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_INVAL"::"r" (VAR_5));
  VAR_5 -= VAR_4;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_INVAL"::"r" (VAR_5));
  VAR_5 -= VAR_4;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_INVAL"::"r" (VAR_5));
  VAR_5 -= VAR_4;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_INVAL"::"r" (VAR_5));
 } while (VAR_5 != VAR_3);
}
