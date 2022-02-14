
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ata_host {TYPE_1__** ports; } ;
struct arasan_cf_dev {int dummy; } ;
struct TYPE_2__ {struct arasan_cf_dev* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (struct arasan_cf_dev*) ;
 struct ata_host* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_2(VAR_0);
 struct arasan_cf_dev *VAR_2 = VAR_1->ports[0]->private_data;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);

 return 0;
}
