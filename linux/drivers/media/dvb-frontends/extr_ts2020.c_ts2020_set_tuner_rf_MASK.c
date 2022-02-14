
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts2020_priv {int regmap; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; } ;


 int FUNC_0 (int ,int,unsigned int*) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct ts2020_priv *VAR_1 = VAR_0->tuner_priv;
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_1->regmap, 0x3d, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_3 &= 0x7f;
 if (VAR_3 < 0x16)
  VAR_3 = 0xa1;
 else if (VAR_3 == 0x16)
  VAR_3 = 0x99;
 else
  VAR_3 = 0xf9;

 FUNC_1(VAR_1->regmap, 0x60, VAR_3);
 VAR_2 = FUNC_2(VAR_0, 0x08);

 return VAR_2;
}
