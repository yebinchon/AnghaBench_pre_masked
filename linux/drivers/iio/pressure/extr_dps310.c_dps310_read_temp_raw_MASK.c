
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {int lock; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dps310_data*) ;
 int FUNC_3 (struct dps310_data*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct dps310_data *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (FUNC_4(&VAR_3->lock))
  return -VAR_2;

 VAR_5 = FUNC_2(VAR_3);
 VAR_7 = FUNC_1(VAR_5);


 VAR_4 = FUNC_6(VAR_3->regmap, VAR_0, VAR_6,
          VAR_6 & VAR_1,
          FUNC_0(VAR_7), VAR_7);
 if (VAR_4 < 0)
  goto done;

 VAR_4 = FUNC_3(VAR_3);

done:
 FUNC_5(&VAR_3->lock);
 return VAR_4;
}
