
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jsa1212_data {int pxs_en; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct jsa1212_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_1,
    VAR_0,
    VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->pxs_en = !!VAR_3;

 return 0;
}
