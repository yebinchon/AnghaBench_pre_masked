
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_hwmon_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct xgene_hwmon_dev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct xgene_hwmon_dev *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_3 = FUNC_0(VAR_4) + VAR_5;
 return 0;
}
