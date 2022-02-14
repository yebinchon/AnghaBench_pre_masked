
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp8870_state {int dummy; } ;
struct dvb_frontend {struct sp8870_state* demodulator_priv; } ;


 int FUNC_0 (struct sp8870_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 struct sp8870_state* VAR_1 = VAR_0->demodulator_priv;


 return FUNC_0(VAR_1, 0xC18, 0x000);
}
