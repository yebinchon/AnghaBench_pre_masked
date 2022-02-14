
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_hwmon_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct xgene_hwmon_dev*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct xgene_hwmon_dev *VAR_2,
         u32 *VAR_3)
{
 u32 VAR_4[3];
 int VAR_5;

 VAR_4[0] = FUNC_0(VAR_0, VAR_1, 0);
 VAR_4[1] = 0;
 VAR_4[2] = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3[0] = VAR_4[0];
 VAR_3[1] = VAR_4[1];
 VAR_3[2] = VAR_4[2];

 return VAR_5;
}
