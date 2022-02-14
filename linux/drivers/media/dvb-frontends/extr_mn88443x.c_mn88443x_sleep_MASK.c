
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn88443x_priv {int dummy; } ;
struct dvb_frontend {struct mn88443x_priv* demodulator_priv; } ;


 int FUNC_0 (struct mn88443x_priv*) ;
 int FUNC_1 (struct mn88443x_priv*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct mn88443x_priv *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
