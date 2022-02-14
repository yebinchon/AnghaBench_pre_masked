
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct omap_sham_dev {int irq; int * pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct resource*,struct resource*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct omap_sham_dev *VAR_3,
  struct platform_device *VAR_4, struct resource *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct resource *VAR_7;
 int VAR_8 = 0;


 VAR_7 = FUNC_3(VAR_4, VAR_1, 0);
 if (!VAR_7) {
  FUNC_0(VAR_6, "no MEM resource info\n");
  VAR_8 = -VAR_0;
  goto err;
 }
 FUNC_1(VAR_5, VAR_7, sizeof(*VAR_5));


 VAR_3->irq = FUNC_2(VAR_4, 0);
 if (VAR_3->irq < 0) {
  VAR_8 = VAR_3->irq;
  goto err;
 }


 VAR_3->pdata = &VAR_2;

err:
 return VAR_8;
}
