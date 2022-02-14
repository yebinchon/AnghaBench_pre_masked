
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sysfs_show_func ;
struct TYPE_2__ {char* name; int mode; } ;
struct device_attribute {int * store; int show; TYPE_1__ attr; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct device_attribute *VAR_0, char *VAR_1,
  sysfs_show_func VAR_2)
{
 FUNC_0(&VAR_0->attr);
 VAR_0->attr.name = VAR_1;
 VAR_0->attr.mode = 0444;
 VAR_0->show = VAR_2;
 VAR_0->store = ((void*)0);
}
