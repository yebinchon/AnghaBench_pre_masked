
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int parent; } ;
struct dmi_entry_attr_show_data {char* buf; struct attribute* attr; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct dmi_entry_attr_show_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
       struct attribute *VAR_2,
       char *VAR_3)
{
 struct dmi_entry_attr_show_data VAR_4 = {
  .attr = VAR_2,
  .buf = VAR_3,
 };


 return FUNC_0(FUNC_1(VAR_1->parent),
         VAR_0, &VAR_4);
}
