
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb153_cf_info {int gpio_line; } ;
struct platform_device {int dummy; } ;
struct ata_host {struct rb153_cf_info* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int ) ;
 struct ata_host* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_2(VAR_0);
 struct rb153_cf_info *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2->gpio_line);

 return 0;
}
