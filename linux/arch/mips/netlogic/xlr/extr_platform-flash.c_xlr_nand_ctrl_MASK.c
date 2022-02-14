
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_2__ {int cs; int flash_mmio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3, int VAR_4,
     unsigned int VAR_5)
{
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_2.flash_mmio,
   FUNC_1(VAR_2.cs), VAR_4);
 else if (VAR_5 & VAR_0)
  FUNC_2(VAR_2.flash_mmio,
   FUNC_0(VAR_2.cs), VAR_4);
}
