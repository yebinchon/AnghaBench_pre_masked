
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_3__ {int attr; } ;
struct dev_ext_attribute {TYPE_1__ attr; } ;
struct coresight_device {scalar_t__ type; struct dev_ext_attribute* ea; } ;
struct TYPE_4__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;

void FUNC_1(struct coresight_device *VAR_3)
{
 struct device *VAR_4 = VAR_2.dev;
 struct dev_ext_attribute *VAR_5 = VAR_3->ea;

 if (VAR_3->type != VAR_1 &&
     VAR_3->type != VAR_0)
  return;

 if (!VAR_5)
  return;

 FUNC_0(&VAR_4->kobj,
         &VAR_5->attr.attr, "sinks");
 VAR_3->ea = ((void*)0);
}
