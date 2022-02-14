
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_hwmon_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xgene_hwmon_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (struct xgene_hwmon_dev*,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct xgene_hwmon_dev *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_4(VAR_5, &VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_8, VAR_1);

 return FUNC_3(VAR_4, VAR_0, "%d\n", FUNC_0(VAR_7));
}
