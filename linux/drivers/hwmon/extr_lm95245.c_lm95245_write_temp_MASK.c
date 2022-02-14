
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct lm95245_data {int update_lock; struct regmap* regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long FUNC_0 (long,int,int) ;
 struct lm95245_data* FUNC_1 (struct device*) ;





 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct regmap*,int,unsigned int*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 int FUNC_6 (struct regmap*,int,long) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_10, u32 VAR_11, int VAR_12,
         long VAR_13)
{
 struct lm95245_data *VAR_14 = FUNC_1(VAR_10);
 struct regmap *VAR_15 = VAR_14->regmap;
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 switch (VAR_11) {
 case 130:
  VAR_13 = FUNC_0(VAR_13 / 1000, 0, 255);
  VAR_17 = FUNC_6(VAR_15, VAR_8, VAR_13);
  return VAR_17;
 case 132:
  VAR_18 = VAR_12 ? VAR_9 :
    VAR_5;
  VAR_13 = FUNC_0(VAR_13 / 1000, 0, VAR_12 ? 255 : 127);
  VAR_17 = FUNC_6(VAR_15, VAR_18, VAR_13);
  return VAR_17;
 case 131:
  FUNC_2(&VAR_14->update_lock);
  VAR_17 = FUNC_4(VAR_15, VAR_5,
      &VAR_16);
  if (VAR_17 < 0) {
   FUNC_3(&VAR_14->update_lock);
   return VAR_17;
  }

  VAR_13 = FUNC_0(VAR_13, -1000000, 1000000);
  VAR_13 = VAR_16 - VAR_13 / 1000;
  VAR_13 = FUNC_0(VAR_13, 0, 31);
  VAR_17 = FUNC_6(VAR_15, VAR_3,
       VAR_13);
  FUNC_3(&VAR_14->update_lock);
  return VAR_17;
 case 129:
  VAR_13 = FUNC_0(VAR_13, -128000, 127875);
  VAR_13 = VAR_13 * 256 / 1000;
  FUNC_2(&VAR_14->update_lock);
  VAR_17 = FUNC_6(VAR_15, VAR_7,
       VAR_13 & 0xe0);
  if (VAR_17 < 0) {
   FUNC_3(&VAR_14->update_lock);
   return VAR_17;
  }
  VAR_17 = FUNC_6(VAR_15, VAR_6,
       (VAR_13 >> 8) & 0xff);
  FUNC_3(&VAR_14->update_lock);
  return VAR_17;
 case 128:
  if (VAR_13 != 1 && VAR_13 != 2)
   return -VAR_1;
  VAR_17 = FUNC_5(VAR_15, VAR_4,
      VAR_0,
      VAR_13 == 1 ? VAR_0 : 0);
  return VAR_17;
 default:
  return -VAR_2;
 }
}
