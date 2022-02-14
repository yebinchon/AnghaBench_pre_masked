
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct cxd2880_priv {int dummy; } ;


 int FUNC_0 (struct cxd2880_priv*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct cxd2880_priv *VAR_1 = ((void*)0);

 if (!VAR_0) {
  FUNC_1("invalid arg.\n");
  return;
 }
 VAR_1 = VAR_0->demodulator_priv;
 FUNC_0(VAR_1);
}
