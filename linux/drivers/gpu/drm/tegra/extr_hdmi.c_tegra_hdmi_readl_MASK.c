
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_hdmi {int dev; scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct tegra_hdmi *VAR_0,
       unsigned int VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->regs + (VAR_1 << 2));

 FUNC_1(VAR_0->dev, VAR_1, VAR_2);

 return VAR_2;
}
