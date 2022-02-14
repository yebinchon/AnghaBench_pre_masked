
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;

u32 FUNC_1(phys_addr_t VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev->of_node;
 u32 VAR_3 = VAR_1 & 0xffff8000;

 if (FUNC_0(VAR_2, "fsl,elbc"))
  return VAR_3;

 return VAR_3 | ((VAR_1 & 0x300000000ull) >> 19);
}
