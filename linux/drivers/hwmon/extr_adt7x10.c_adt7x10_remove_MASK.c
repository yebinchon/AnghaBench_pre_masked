
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct adt7x10_data {scalar_t__ oldconfig; scalar_t__ config; scalar_t__ name; int hwmon_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,scalar_t__) ;
 int VAR_2 ;
 struct adt7x10_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (int,struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(struct device *VAR_3, int VAR_4)
{
 struct adt7x10_data *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 > 0)
  FUNC_3(VAR_4, VAR_3);

 FUNC_4(VAR_5->hwmon_dev);
 if (VAR_5->name)
  FUNC_2(VAR_3, &VAR_2);
 FUNC_5(&VAR_3->kobj, &VAR_1);
 if (VAR_5->oldconfig != VAR_5->config)
  FUNC_0(VAR_3, VAR_0, VAR_5->oldconfig);
 return 0;
}
