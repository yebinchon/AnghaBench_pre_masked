
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {void const* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 TYPE_2__* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 return FUNC_0(VAR_0)->dev.of_node == VAR_1;
}
