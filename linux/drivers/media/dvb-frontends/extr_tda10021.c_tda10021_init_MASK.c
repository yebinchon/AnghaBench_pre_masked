
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda10021_state {int pwm; } ;
struct dvb_frontend {TYPE_1__* adapter; struct tda10021_state* demodulator_priv; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (struct tda10021_state*,int,int) ;
 int FUNC_1 (char*,int ) ;
 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2 (struct dvb_frontend *VAR_2)
{
 struct tda10021_state* VAR_3 = VAR_2->demodulator_priv;
 int VAR_4;

 FUNC_1("DVB: TDA10021(%d): init chip\n", VAR_2->adapter->num);



 for (VAR_4=0; VAR_4<VAR_1; VAR_4++)
  FUNC_0 (VAR_3, VAR_4, VAR_0[VAR_4]);

 FUNC_0 (VAR_3, 0x34, VAR_3->pwm);
 FUNC_0(VAR_3, 0x2a, VAR_0[0x2a] & 0xef);
 return 0;
}
