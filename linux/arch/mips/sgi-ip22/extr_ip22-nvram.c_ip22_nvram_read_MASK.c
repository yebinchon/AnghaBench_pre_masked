
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* bbram; int eeprom; } ;


 TYPE_1__* VAR_0 ;
 unsigned short FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;

unsigned short FUNC_2(int VAR_1)
{
 if (FUNC_1())


  return FUNC_0(&VAR_0->eeprom, VAR_1);
 else {
  unsigned short VAR_2;

  VAR_1 <<= 1;
  VAR_2 = VAR_0->bbram[VAR_1++] & 0xff;
  return (VAR_2 << 8) | (VAR_0->bbram[VAR_1] & 0xff);
 }
}
