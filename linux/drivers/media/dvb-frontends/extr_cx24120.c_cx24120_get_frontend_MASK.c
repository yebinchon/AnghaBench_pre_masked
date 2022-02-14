
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct cx24120_state*,int ) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5,
    struct dtv_frontend_properties *VAR_6)
{
 struct cx24120_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_2(&VAR_7->i2c->dev, "\n");


 VAR_11 = FUNC_1(VAR_7, VAR_4);
 if (!(VAR_11 & VAR_0))
  return 0;


 VAR_8 = FUNC_1(VAR_7, VAR_1);
 VAR_9 = FUNC_1(VAR_7, VAR_2);
 VAR_10 = FUNC_1(VAR_7, VAR_3);
 VAR_6->frequency = (VAR_10 << 16) | (VAR_9 << 8) | VAR_8;
 FUNC_2(&VAR_7->i2c->dev, "frequency = %d\n", VAR_6->frequency);


 FUNC_0(VAR_5);

 return 0;
}
