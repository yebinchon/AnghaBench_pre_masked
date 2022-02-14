
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct bme680_data {int regmap; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bme680_data*,scalar_t__) ;
 int FUNC_2 (struct bme680_data*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,int ,int *,int) ;
 struct device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct bme680_data *VAR_4,
        int *VAR_5, int *VAR_6)
{
 struct device *VAR_7 = FUNC_5(VAR_4->regmap);
 int VAR_8;
 __be16 VAR_9 = 0;
 s32 VAR_10;
 u32 VAR_11;


 VAR_8 = FUNC_2(VAR_4, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_4->regmap, VAR_0,
          (u8 *) &VAR_9, 2);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7, "failed to read humidity\n");
  return VAR_8;
 }

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 == VAR_1) {

  FUNC_3(VAR_7, "reading humidity skipped\n");
  return -VAR_2;
 }
 VAR_11 = FUNC_1(VAR_4, VAR_10);

 *VAR_5 = VAR_11;
 *VAR_6 = 1000;
 return VAR_3;
}
