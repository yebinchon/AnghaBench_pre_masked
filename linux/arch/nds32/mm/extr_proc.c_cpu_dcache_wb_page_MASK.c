
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(unsigned long VAR_4)
{

 unsigned long VAR_5, VAR_6;

 VAR_5 = VAR_1[VAR_0].line_size;
 VAR_6 = VAR_4 + VAR_3;

 do {
  VAR_6 -= VAR_5;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_WB"::"r" (VAR_6));
  VAR_6 -= VAR_5;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_WB"::"r" (VAR_6));
  VAR_6 -= VAR_5;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_WB"::"r" (VAR_6));
  VAR_6 -= VAR_5;
  __asm__ volatile ("\n\tcctl %0, L1D_VA_WB"::"r" (VAR_6));
 } while (VAR_6 != VAR_4);
 FUNC_0(VAR_2,0);

}
