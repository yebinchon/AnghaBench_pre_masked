
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_hwmon_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct xgene_hwmon_dev*,int*) ;
 int FUNC_2 (struct xgene_hwmon_dev*,int*) ;

__attribute__((used)) static int FUNC_3(struct xgene_hwmon_dev *VAR_4, u32 VAR_5,
      u32 *VAR_6)
{
 u32 VAR_7[3];
 int VAR_8;

 VAR_7[0] = VAR_2;
 VAR_7[1] = FUNC_0(VAR_5);
 VAR_7[2] = 0;

 if (VAR_3)
  VAR_8 = FUNC_2(VAR_4, VAR_7);
 else
  VAR_8 = FUNC_1(VAR_4, VAR_7);

 if (VAR_8 < 0)
  return VAR_8;




 if (VAR_7[1] & VAR_1)
  return -VAR_0;

 *VAR_6 = VAR_7[1];

 return VAR_8;
}
