
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int sysc_val; } ;
struct sysc {TYPE_3__* cap; TYPE_2__ cfg; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int sysc_mask; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_0(VAR_1, "ti,sysc-mask", &VAR_3);
 if (VAR_2)
  return 0;

 VAR_0->cfg.sysc_val = VAR_3 & VAR_0->cap->sysc_mask;

 return 0;
}
