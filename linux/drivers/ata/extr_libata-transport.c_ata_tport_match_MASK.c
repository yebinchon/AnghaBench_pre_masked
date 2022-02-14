
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct attribute_container {int dummy; } ;
struct TYPE_3__ {struct attribute_container ac; } ;
struct TYPE_4__ {TYPE_1__ host_attrs; } ;


 int FUNC_0 (struct device*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct attribute_container *VAR_1,
      struct device *VAR_2)
{
 if (!FUNC_0(VAR_2))
  return 0;
 return &VAR_0->host_attrs.ac == VAR_1;
}
