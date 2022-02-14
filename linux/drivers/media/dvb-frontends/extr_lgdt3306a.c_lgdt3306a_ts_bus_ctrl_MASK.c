
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct lgdt3306a_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_0("acquire=%d\n", VAR_1);

 return FUNC_1(VAR_2, VAR_1 ? 0 : 1);

}
