
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct dvb_pll_priv {int nr; } ;
struct dvb_frontend {struct dvb_pll_priv* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 struct dvb_frontend* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct dvb_frontend *VAR_2 = FUNC_1(VAR_1);
 struct dvb_pll_priv *VAR_3 = VAR_2->tuner_priv;

 FUNC_2(&VAR_0, VAR_3->nr);
 FUNC_0(VAR_2);
 return 0;
}
