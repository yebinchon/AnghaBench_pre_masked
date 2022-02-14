
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
struct hmc5843_data {int lock; int regmap; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hmc5843_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct hmc5843_data *VAR_2,
        int VAR_3, int *VAR_4)
{
 __be16 VAR_5[3];
 int VAR_6;

 FUNC_2(&VAR_2->lock);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_2->lock);
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_2->regmap, VAR_0,
          VAR_5, sizeof(VAR_5));
 FUNC_3(&VAR_2->lock);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_4 = FUNC_5(FUNC_0(VAR_5[VAR_3]), 15);
 return VAR_1;
}
