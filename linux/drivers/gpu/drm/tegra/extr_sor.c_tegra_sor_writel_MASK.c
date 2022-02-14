
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_sor {scalar_t__ regs; int dev; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct tegra_sor *VAR_0, u32 VAR_1,
        unsigned int VAR_2)
{
 FUNC_0(VAR_0->dev, VAR_2, VAR_1);
 FUNC_1(VAR_1, VAR_0->regs + (VAR_2 << 2));
}
