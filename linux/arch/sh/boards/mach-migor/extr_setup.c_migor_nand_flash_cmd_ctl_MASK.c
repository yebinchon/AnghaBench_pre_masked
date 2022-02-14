
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

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_3, int VAR_4,
         unsigned int VAR_5)
{
 if (VAR_4 == VAR_2)
  return;

 if (VAR_5 & VAR_1)
  FUNC_0(VAR_4, VAR_3->legacy.IO_ADDR_W + 0x00400000);
 else if (VAR_5 & VAR_0)
  FUNC_0(VAR_4, VAR_3->legacy.IO_ADDR_W + 0x00800000);
 else
  FUNC_0(VAR_4, VAR_3->legacy.IO_ADDR_W);
}
