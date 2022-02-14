
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* reset_reg; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(char *VAR_2)
{
 FUNC_0();

 if (VAR_0) {
  *(volatile unsigned int *)0xa0000024 = 0xdeadbeef;
  *(volatile unsigned int *)0xa00000fc = 0xfedeabba;
 }
 *VAR_1->reset_reg = 0xbedead;
 for (;;) ;
}
