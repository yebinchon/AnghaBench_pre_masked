
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_fs {int nsdiv; int sdiv; int pe; int mdiv; } ;
struct st_clk_quadfs_fsynth {int nsdiv; int sdiv; int pe; int md; } ;


 int FUNC_0 (struct st_clk_quadfs_fsynth*) ;
 int FUNC_1 (struct st_clk_quadfs_fsynth*) ;

__attribute__((used)) static void FUNC_2(struct st_clk_quadfs_fsynth *VAR_0,
  struct stm_fs *VAR_1)
{
 VAR_0->md = VAR_1->mdiv;
 VAR_0->pe = VAR_1->pe;
 VAR_0->sdiv = VAR_1->sdiv;
 VAR_0->nsdiv = VAR_1->nsdiv;





 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
