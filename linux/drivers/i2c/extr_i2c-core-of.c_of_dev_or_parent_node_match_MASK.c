
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {void const* of_node; TYPE_1__* parent; } ;
struct TYPE_2__ {void const* of_node; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, const void *VAR_1)
{
 if (VAR_0->of_node == VAR_1)
  return 1;

 if (VAR_0->parent)
  return VAR_0->parent->of_node == VAR_1;

 return 0;
}
