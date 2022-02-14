
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_reconfig_data {int prop; TYPE_2__* dn; } ;
struct nx842_devdata {TYPE_1__* dev; } ;
struct notifier_block {int dummy; } ;
struct device_node {int name; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct nx842_devdata* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3, unsigned long VAR_4,
        void *VAR_5)
{
 struct of_reconfig_data *VAR_6 = VAR_5;
 struct nx842_devdata *VAR_7;
 struct device_node *VAR_8 = ((void*)0);

 FUNC_2();
 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
  VAR_8 = VAR_7->dev->of_node;

 if (VAR_7 &&
   VAR_4 == VAR_1 &&
   !FUNC_4(VAR_6->dn->name, VAR_8->name)) {
  FUNC_3();
  FUNC_0(VAR_6->prop);
 } else
  FUNC_3();

 return VAR_0;
}
