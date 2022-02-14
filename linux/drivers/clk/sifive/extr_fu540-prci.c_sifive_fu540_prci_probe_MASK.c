
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct __prci_data {int va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct __prci_data*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct __prci_data* FUNC_6 (struct device*,int,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct resource *VAR_5;
 struct __prci_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_3, VAR_2, 0);
 VAR_6->va = FUNC_5(VAR_4, VAR_5);
 if (FUNC_0(VAR_6->va))
  return FUNC_1(VAR_6->va);

 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_4, "could not register clocks: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_3(VAR_4, "SiFive FU540 PRCI probed\n");

 return 0;
}
