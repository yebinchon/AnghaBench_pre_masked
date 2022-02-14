
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts2020_priv {int regmap; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct ts2020_priv *VAR_2 = VAR_0->tuner_priv;
 int VAR_3;
 VAR_3 = FUNC_1(VAR_2->regmap, 0x51, 0x1f - VAR_1);
 VAR_3 |= FUNC_1(VAR_2->regmap, 0x51, 0x1f);
 VAR_3 |= FUNC_1(VAR_2->regmap, 0x50, VAR_1);
 VAR_3 |= FUNC_1(VAR_2->regmap, 0x50, 0x00);
 FUNC_0(20);
 return VAR_3;
}
