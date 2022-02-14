
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_2, int VAR_3,
          unsigned int VAR_4)
{
 if (VAR_3 == VAR_1)
  return;

 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, VAR_2->legacy.IO_ADDR_W + (1 << 24));
 else
  FUNC_0(VAR_3, VAR_2->legacy.IO_ADDR_W + (1 << 23));
}
