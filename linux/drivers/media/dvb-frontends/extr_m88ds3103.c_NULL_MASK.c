
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct m88ds3103_dev {int regmap; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;


 int FUNC_0 (int ,int,unsigned int*) ;

int FUNC_1(struct dvb_frontend *VAR_0, u8 *VAR_1)
{
 struct m88ds3103_dev *VAR_2 = VAR_0->demodulator_priv;
 unsigned VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, 0x3f, &VAR_3);
 if (VAR_4 == 0)
  *VAR_1 = VAR_3;
 return VAR_4;
}
