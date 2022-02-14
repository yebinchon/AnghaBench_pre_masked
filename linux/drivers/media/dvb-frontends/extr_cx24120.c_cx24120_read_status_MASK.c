
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {int fe_status; scalar_t__ need_clock_set; int mpeg_enabled; TYPE_1__* i2c; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cx24120_state*) ;
 int FUNC_1 (struct cx24120_state*,int) ;
 int FUNC_2 (struct cx24120_state*,int ) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_10, enum fe_status *VAR_11)
{
 struct cx24120_state *VAR_12 = VAR_10->demodulator_priv;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_4);

 FUNC_4(&VAR_12->i2c->dev, "status = 0x%02x\n", VAR_13);

 *VAR_11 = 0;

 if (VAR_13 & VAR_2)
  *VAR_11 = VAR_7;
 if (VAR_13 & VAR_0)
  *VAR_11 |= VAR_5;
 if (VAR_13 & VAR_3)
  *VAR_11 |= VAR_9 | VAR_8;
 if (VAR_13 & VAR_1)
  *VAR_11 |= VAR_6;







 VAR_12->fe_status = *VAR_11;
 FUNC_0(VAR_12);


 if (VAR_12->need_clock_set && *VAR_11 & VAR_6) {

  FUNC_3(VAR_10);




  if (!VAR_12->mpeg_enabled)
   FUNC_1(VAR_12, 1);

  VAR_12->need_clock_set = 0;
 }

 return 0;
}
