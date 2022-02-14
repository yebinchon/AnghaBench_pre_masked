
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l64781_state {scalar_t__ first; } ;
struct dvb_frontend {struct l64781_state* demodulator_priv; } ;


 int FUNC_0 (struct l64781_state*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct l64781_state*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_0)
{
 struct l64781_state* VAR_1 = VAR_0->demodulator_priv;

 FUNC_2 (VAR_1);


 FUNC_0 (VAR_1, 0x3e, 0xa5);


 FUNC_0 (VAR_1, 0x2a, 0x04);
 FUNC_0 (VAR_1, 0x2a, 0x00);



 FUNC_0 (VAR_1, 0x07, 0x8e);


 FUNC_0 (VAR_1, 0x0b, 0x81);


 FUNC_0 (VAR_1, 0x0c, 0x84);


 FUNC_0 (VAR_1, 0x0d, 0x8c);







 FUNC_0 (VAR_1, 0x1e, 0x09);


 if (VAR_1->first) {
  VAR_1->first = 0;
  FUNC_1(200);
 }

 return 0;
}
