
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_nand_host {scalar_t__ nf_base; } ;
struct nand_chip {struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;
 struct s5p_nand_host *VAR_5 = VAR_4->priv;
 u32 VAR_6 = FUNC_0(VAR_5->nf_base + VAR_0);

 if (VAR_3 == -1)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 FUNC_1(VAR_6, VAR_5->nf_base + VAR_0);
}
