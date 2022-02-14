
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; unsigned long ways; unsigned long sets; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(void)
{
 unsigned long VAR_2, VAR_3;

 VAR_3 = VAR_1[VAR_0].line_size;
 VAR_2 =
     VAR_3 * VAR_1[VAR_0].ways * VAR_1[VAR_0].sets;

 do {
  VAR_2 -= VAR_3;
  __asm__ volatile ("\n\tcctl %0, L1I_IX_INVAL"::"r" (VAR_2));
  VAR_2 -= VAR_3;
  __asm__ volatile ("\n\tcctl %0, L1I_IX_INVAL"::"r" (VAR_2));
  VAR_2 -= VAR_3;
  __asm__ volatile ("\n\tcctl %0, L1I_IX_INVAL"::"r" (VAR_2));
  VAR_2 -= VAR_3;
  __asm__ volatile ("\n\tcctl %0, L1I_IX_INVAL"::"r" (VAR_2));
 } while (VAR_2 > 0);
 FUNC_0();
}
