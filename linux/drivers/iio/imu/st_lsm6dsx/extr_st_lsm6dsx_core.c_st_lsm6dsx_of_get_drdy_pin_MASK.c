
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_lsm6dsx_hw {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct st_lsm6dsx_hw *VAR_1, int *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev->of_node;

 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_3, "st,drdy-int-pin", VAR_2);
}
