
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_nand_host {scalar_t__ nf_base; } ;
struct nand_chip {struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2)
{
 struct nand_chip *VAR_3 = VAR_2->priv;
 struct s5p_nand_host *VAR_4 = VAR_3->priv;




 return FUNC_0(VAR_4->nf_base + VAR_0) & VAR_1;
}
