
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noa1305_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct noa1305_priv *VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->regmap, VAR_2, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;







 switch (VAR_6) {
 case 128:
  *VAR_4 = 100;
  *VAR_5 = 77 * 8;
  break;
 case 131:
  *VAR_4 = 100;
  *VAR_5 = 77 * 4;
  break;
 case 133:
  *VAR_4 = 100;
  *VAR_5 = 77 * 2;
  break;
 case 135:
  *VAR_4 = 100;
  *VAR_5 = 77;
  break;
 case 130:
  *VAR_4 = 1000;
  *VAR_5 = 77 * 5;
  break;
 case 132:
  *VAR_4 = 10000;
  *VAR_5 = 77 * 25;
  break;
 case 134:
  *VAR_4 = 100000;
  *VAR_5 = 77 * 125;
  break;
 case 129:
  *VAR_4 = 1000000;
  *VAR_5 = 77 * 625;
  break;
 default:
  return -VAR_0;
 }

 return VAR_1;
}
