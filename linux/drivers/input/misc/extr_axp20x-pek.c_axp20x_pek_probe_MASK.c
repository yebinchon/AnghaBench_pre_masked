
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device_id {scalar_t__ driver_data; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct axp20x_pek {struct axp20x_info* info; int axp20x; } ;
struct axp20x_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axp20x_pek*,struct platform_device*) ;
 scalar_t__ FUNC_1 (struct axp20x_pek*,struct platform_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ) ;
 struct axp20x_pek* FUNC_4 (TYPE_1__*,int,int ) ;
 struct platform_device_id* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct axp20x_pek*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct axp20x_pek *VAR_4;
 const struct platform_device_id *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 if (!VAR_5) {
  FUNC_2(&VAR_3->dev, "Failed to get platform_device_id\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(&VAR_3->dev, sizeof(struct axp20x_pek),
      VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->axp20x = FUNC_3(VAR_3->dev.parent);

 if (FUNC_1(VAR_4, VAR_3)) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 VAR_4->info = (struct axp20x_info *)VAR_5->driver_data;

 FUNC_6(VAR_3, VAR_4);

 return 0;
}
