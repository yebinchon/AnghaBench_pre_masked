
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * layout; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; struct nand_chip* priv; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;

 if (VAR_1->writesize == 512)
  VAR_2->ecc.layout = &VAR_0;

 return 0;
}
