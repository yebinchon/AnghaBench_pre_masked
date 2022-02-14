
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmg160_data {int mutex; int regmap; } ;
typedef int raw_val ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bmg160_data*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int) ;
 struct device* FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct bmg160_data *VAR_1, int VAR_2, int *VAR_3)
{
 struct device *VAR_4 = FUNC_7(VAR_1->regmap);
 int VAR_5;
 __le16 VAR_6;

 FUNC_4(&VAR_1->mutex);
 VAR_5 = FUNC_1(VAR_1, 1);
 if (VAR_5 < 0) {
  FUNC_5(&VAR_1->mutex);
  return VAR_5;
 }

 VAR_5 = FUNC_6(VAR_1->regmap, FUNC_0(VAR_2), &VAR_6,
          sizeof(VAR_6));
 if (VAR_5 < 0) {
  FUNC_2(VAR_4, "Error reading axis %d\n", VAR_2);
  FUNC_1(VAR_1, 0);
  FUNC_5(&VAR_1->mutex);
  return VAR_5;
 }

 *VAR_3 = FUNC_8(FUNC_3(VAR_6), 15);
 VAR_5 = FUNC_1(VAR_1, 0);
 FUNC_5(&VAR_1->mutex);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_0;
}
