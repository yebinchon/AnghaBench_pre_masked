
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_device_attr {struct counter_count_ext_unit* component; } ;
struct counter_count_ext_unit {int count; struct counter_count_ext* ext; } ;
struct counter_count_ext {int priv; int (* read ) (int ,int ,int ,char*) ;} ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 struct counter_device_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 const struct counter_device_attr *const VAR_3 = FUNC_2(VAR_1);
 const struct counter_count_ext_unit *const VAR_4 = VAR_3->component;
 const struct counter_count_ext *const VAR_5 = VAR_4->ext;

 return VAR_5->read(FUNC_0(VAR_0), VAR_4->count, VAR_5->priv, VAR_2);
}
