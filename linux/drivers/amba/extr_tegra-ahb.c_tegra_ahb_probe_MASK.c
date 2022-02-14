
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_ahb {int * dev; int regs; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct tegra_ahb* FUNC_5 (int *,size_t,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct tegra_ahb*) ;
 int VAR_4 ;
 int FUNC_8 (struct tegra_ahb*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct tegra_ahb *VAR_7;
 size_t VAR_8;

 VAR_8 = sizeof(*VAR_7) + sizeof(u32) * FUNC_0(VAR_4);
 VAR_7 = FUNC_5(&VAR_5->dev, VAR_8, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_5, VAR_3, 0);


 if (VAR_6 &&
     (VAR_6->start & VAR_2) ==
     VAR_2) {
  FUNC_3(&VAR_5->dev, "incorrect AHB base address in DT data - enabling workaround\n");
  VAR_6->start -= VAR_2;
 }

 VAR_7->regs = FUNC_4(&VAR_5->dev, VAR_6);
 if (FUNC_1(VAR_7->regs))
  return FUNC_2(VAR_7->regs);

 VAR_7->dev = &VAR_5->dev;
 FUNC_7(VAR_5, VAR_7);
 FUNC_8(VAR_7);
 return 0;
}
