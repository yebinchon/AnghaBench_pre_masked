
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct ds3000_state* demodulator_priv; } ;
struct ds3000_state {int dummy; } ;


 int FUNC_0 (struct ds3000_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct ds3000_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1)
  FUNC_0(VAR_2, 0x03, 0x12);
 else
  FUNC_0(VAR_2, 0x03, 0x02);

 return 0;
}
