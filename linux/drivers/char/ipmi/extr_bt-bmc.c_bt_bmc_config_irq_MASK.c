
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct bt_bmc {scalar_t__ offset; int map; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ,int ,struct bt_bmc*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_4(struct bt_bmc *VAR_7,
        struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 int VAR_10;

 VAR_7->irq = FUNC_2(VAR_8, 0);
 if (!VAR_7->irq)
  return -VAR_4;

 VAR_10 = FUNC_1(VAR_9, VAR_7->irq, VAR_6, VAR_5,
         VAR_3, VAR_7);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9, "Unable to request IRQ %d\n", VAR_7->irq);
  VAR_7->irq = 0;
  return VAR_10;
 }







 VAR_10 = FUNC_3(VAR_7->map, VAR_7->offset + VAR_0,
    (VAR_1 | VAR_2),
    (VAR_1 | VAR_2));

 return VAR_10;
}
