
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;


 int* VAR_0 ;
 int FUNC_0 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 for (VAR_3=0; VAR_3<44; VAR_3++)
  FUNC_0 (VAR_2, VAR_3, VAR_0[VAR_3]);

 FUNC_0 (VAR_2, 0x00, 0x3c);
 FUNC_0 (VAR_2, 0x00, 0x04);

 return 0;
}
