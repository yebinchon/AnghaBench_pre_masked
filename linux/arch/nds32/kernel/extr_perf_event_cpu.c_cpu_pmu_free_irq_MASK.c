
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nds32_pmu {struct platform_device* plat_device; } ;


 int FUNC_0 (int,struct nds32_pmu*) ;
 int FUNC_1 (struct platform_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct nds32_pmu *VAR_0)
{
 int VAR_1;
 struct platform_device *VAR_2 = VAR_0->plat_device;

 VAR_1 = FUNC_1(VAR_2, 0);
 if (VAR_1 >= 0)
  FUNC_0(VAR_1, VAR_0);
}
