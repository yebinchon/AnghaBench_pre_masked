
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_nand_host {scalar_t__ nf_base; } ;
struct nand_chip {struct s5p_nand_host* priv; } ;
struct mtd_info {int writesize; struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_3)
{
 struct nand_chip *VAR_4 = VAR_3->priv;
 struct s5p_nand_host *VAR_5 = VAR_4->priv;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->nf_base + VAR_0);

 if (FUNC_0(VAR_4)) {
  VAR_6 &= ~VAR_1;

  if (VAR_3->writesize == 512) {
   VAR_6 |= VAR_2;

  } else {
   VAR_6 &= ~VAR_2;
  }
 } else {
  VAR_6 |= VAR_1;

  if (VAR_3->writesize == 4096)
   VAR_6 &= ~VAR_2;
  else
   VAR_6 |= VAR_2;
 }
}
