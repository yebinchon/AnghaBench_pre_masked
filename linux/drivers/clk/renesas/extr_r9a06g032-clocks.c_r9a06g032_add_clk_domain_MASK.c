
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int flags; int detach_dev; int attach_dev; int name; } ;
struct device_node {int name; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct generic_pm_domain* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device_node*,struct generic_pm_domain*) ;
 int VAR_5 ;
 int FUNC_2 (struct generic_pm_domain*,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->of_node;
 struct generic_pm_domain *VAR_10;

 VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->name = VAR_9->name;
 VAR_10->flags = VAR_3 | VAR_2 |
      VAR_1;
 VAR_10->attach_dev = VAR_6;
 VAR_10->detach_dev = VAR_7;
 FUNC_2(VAR_10, &VAR_5, 0);

 FUNC_1(VAR_9, VAR_10);
 return 0;
}
