
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ina3221_data {int reg_config; } ;
struct device {int dummy; } ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct ina3221_data* FUNC_2 (struct device*) ;


 long* VAR_1 ;
 long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, u32 VAR_3, long *VAR_4)
{
 struct ina3221_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_1(VAR_5->reg_config);
  *VAR_4 = VAR_1[VAR_6];
  return 0;
 case 128:

  *VAR_4 = FUNC_3(VAR_5->reg_config);
  *VAR_4 = FUNC_0(*VAR_4, 1000);
  return 0;
 default:
  return -VAR_0;
 }
}
