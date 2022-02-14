
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct TYPE_2__ {struct device_node const* of_node; } ;


 int FUNC_0 (struct device*,char*,struct device_node const*,struct device_node const*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 const struct device_node *VAR_2 = VAR_1;

 FUNC_0(VAR_0, "Parent node %p, looking for %p\n",
   VAR_0->parent->of_node, VAR_2);

 return VAR_0->parent->of_node == VAR_2;
}
