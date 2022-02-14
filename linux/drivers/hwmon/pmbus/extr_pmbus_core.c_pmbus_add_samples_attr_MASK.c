
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr; } ;
struct pmbus_samples_reg {int page; TYPE_1__ dev_attr; struct pmbus_samples_attr* attr; } ;
struct pmbus_samples_attr {int name; } ;
struct pmbus_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmbus_samples_reg* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct pmbus_data*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pmbus_data *VAR_4, int VAR_5,
      struct pmbus_samples_attr *VAR_6)
{
 struct pmbus_samples_reg *VAR_7;

 VAR_7 = FUNC_0(VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->attr = VAR_6;
 VAR_7->page = VAR_5;

 FUNC_2(&VAR_7->dev_attr, VAR_6->name, 0644,
       VAR_3, VAR_2);

 return FUNC_1(VAR_4, &VAR_7->dev_attr.attr);
}
