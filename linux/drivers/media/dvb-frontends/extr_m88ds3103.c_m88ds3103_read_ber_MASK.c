
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m88ds3103_dev {int dvbv3_ber; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct m88ds3103_dev *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = VAR_2->dvbv3_ber;

 return 0;
}
