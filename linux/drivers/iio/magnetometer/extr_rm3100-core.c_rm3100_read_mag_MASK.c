
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rm3100_data {int lock; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regmap*,scalar_t__,int*,int) ;
 int FUNC_4 (struct regmap*,int ,int ) ;
 int FUNC_5 (struct rm3100_data*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct rm3100_data *VAR_3, int VAR_4, int *VAR_5)
{
 struct regmap *VAR_6 = VAR_3->regmap;
 u8 VAR_7[3];
 int VAR_8;

 FUNC_1(&VAR_3->lock);
 VAR_8 = FUNC_4(VAR_6, VAR_2, FUNC_0(4 + VAR_4));
 if (VAR_8 < 0)
  goto unlock_return;

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 < 0)
  goto unlock_return;

 VAR_8 = FUNC_3(VAR_6, VAR_1 + 3 * VAR_4, VAR_7, 3);
 if (VAR_8 < 0)
  goto unlock_return;
 FUNC_2(&VAR_3->lock);

 *VAR_5 = FUNC_6((VAR_7[0] << 16) | (VAR_7[1] << 8) | VAR_7[2],
        23);

 return VAR_0;

unlock_return:
 FUNC_2(&VAR_3->lock);
 return VAR_8;
}
