
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int** VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rm3100_data *VAR_4, int *VAR_5, int *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(&VAR_4->lock);
 VAR_8 = FUNC_2(VAR_4->regmap, VAR_1, &VAR_7);
 FUNC_1(&VAR_4->lock);
 if (VAR_8 < 0)
  return VAR_8;
 *VAR_5 = VAR_3[VAR_7 - VAR_2][0];
 *VAR_6 = VAR_3[VAR_7 - VAR_2][1];

 return VAR_0;
}
