
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hmc5843_data {int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hmc5843_data *VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_3->lock);
 VAR_5 = FUNC_2(VAR_3->regmap, VAR_0,
     VAR_1,
     VAR_4 << VAR_2);
 FUNC_1(&VAR_3->lock);

 return VAR_5;
}
