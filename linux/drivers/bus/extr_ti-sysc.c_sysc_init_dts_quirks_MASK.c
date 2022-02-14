
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ srst_udelay; } ;
struct sysc {TYPE_1__ cfg; TYPE_2__* dev; int legacy_mode; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct sysc*,struct device_node*,int) ;

__attribute__((used)) static int FUNC_4(struct sysc *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 int VAR_2;
 u32 VAR_3;

 VAR_0->legacy_mode = FUNC_1(VAR_1, "ti,hwmods", ((void*)0));

 FUNC_3(VAR_0, VAR_1, 0);
 VAR_2 = FUNC_2(VAR_1, "ti,sysc-delay-us", &VAR_3);
 if (!VAR_2) {
  if (VAR_3 > 255) {
   FUNC_0(VAR_0->dev, "bad ti,sysc-delay-us: %i\n",
     VAR_3);
  }

  VAR_0->cfg.srst_udelay = (u8)VAR_3;
 }

 return 0;
}
