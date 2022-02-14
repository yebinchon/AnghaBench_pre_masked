
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct nand_chip *VAR_3, int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 == VAR_2)
  return;

 VAR_6 = (VAR_5 & VAR_1) ? 0x02 : 0;
 if (VAR_5 & VAR_0)
  VAR_6 |= 0x04;

 FUNC_0(VAR_4, VAR_3->legacy.IO_ADDR_W + VAR_6);
}
