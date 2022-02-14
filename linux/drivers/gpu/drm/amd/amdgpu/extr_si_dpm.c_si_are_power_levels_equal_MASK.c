
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_pl {scalar_t__ mclk; scalar_t__ sclk; scalar_t__ pcie_gen; scalar_t__ vddc; scalar_t__ vddci; } ;



__attribute__((used)) static inline bool FUNC_0(const struct rv7xx_pl *VAR_0,
      const struct rv7xx_pl *VAR_1)
{
 return ((VAR_0->mclk == VAR_1->mclk) &&
    (VAR_0->sclk == VAR_1->sclk) &&
    (VAR_0->pcie_gen == VAR_1->pcie_gen) &&
    (VAR_0->vddc == VAR_1->vddc) &&
    (VAR_0->vddci == VAR_1->vddci));
}
