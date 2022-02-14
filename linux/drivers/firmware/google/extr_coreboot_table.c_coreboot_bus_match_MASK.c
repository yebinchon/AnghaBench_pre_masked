
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct coreboot_driver {scalar_t__ tag; } ;
struct TYPE_2__ {scalar_t__ tag; } ;
struct coreboot_device {TYPE_1__ entry; } ;


 struct coreboot_device* FUNC_0 (struct device*) ;
 struct coreboot_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct coreboot_device *VAR_2 = FUNC_0(VAR_0);
 struct coreboot_driver *VAR_3 = FUNC_1(VAR_1);

 return VAR_2->entry.tag == VAR_3->tag;
}
