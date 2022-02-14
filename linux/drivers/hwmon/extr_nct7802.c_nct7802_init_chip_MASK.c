
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7802_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct nct7802_data *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3->regmap, VAR_1, 0x01, 0x01);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_3->regmap, VAR_0, 0x40, 0x40);
 if (VAR_4)
  return VAR_4;


 return FUNC_0(VAR_3->regmap, VAR_2, 0x03, 0x03);
}
