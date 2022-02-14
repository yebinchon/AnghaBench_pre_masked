
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct devcd_entry {void const* failing_dev; } ;


 struct devcd_entry* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 struct devcd_entry *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->failing_dev == VAR_1;
}
