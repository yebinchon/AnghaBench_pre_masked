
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int attr; } ;
struct pmbus_label {int name; int label; struct device_attribute attribute; } ;
struct pmbus_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmbus_label* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct pmbus_data*,int *) ;
 int FUNC_2 (struct device_attribute*,int ,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,char*,char const*,int) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct pmbus_data *VAR_3,
      const char *VAR_4, int VAR_5,
      const char *VAR_6, int VAR_7)
{
 struct pmbus_label *VAR_8;
 struct device_attribute *VAR_9;

 VAR_8 = FUNC_0(VAR_3->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = &VAR_8->attribute;

 FUNC_3(VAR_8->name, sizeof(VAR_8->name), "%s%d_label", VAR_4, VAR_5);
 if (!VAR_7)
  FUNC_4(VAR_8->label, VAR_6, sizeof(VAR_8->label) - 1);
 else
  FUNC_3(VAR_8->label, sizeof(VAR_8->label), "%s%d", VAR_6,
    VAR_7);

 FUNC_2(VAR_9, VAR_8->name, 0444, VAR_2, ((void*)0));
 return FUNC_1(VAR_3, &VAR_9->attr);
}
