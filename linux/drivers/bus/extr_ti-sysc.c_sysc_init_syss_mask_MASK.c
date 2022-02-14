
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int sysc_val; int syss_mask; int quirks; } ;
struct sysc {TYPE_2__ cfg; TYPE_1__* cap; TYPE_3__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev->of_node;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_5, "ti,syss-mask", &VAR_7);
 if (VAR_6) {
  if ((VAR_4->cap->type == VAR_2 ||
       VAR_4->cap->type == VAR_3) &&
      (VAR_4->cfg.sysc_val & VAR_0))
   VAR_4->cfg.quirks |= VAR_1;

  return 0;
 }

 if (!(VAR_7 & 1) && (VAR_4->cfg.sysc_val & VAR_0))
  VAR_4->cfg.quirks |= VAR_1;

 VAR_4->cfg.syss_mask = VAR_7;

 return 0;
}
