
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv {scalar_t__ count; struct stv* base; int stvlist; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;


 int FUNC_0 (struct stv*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct stv *VAR_1 = VAR_0->demodulator_priv;

 VAR_1->base->count--;
 if (VAR_1->base->count == 0) {
  FUNC_1(&VAR_1->base->stvlist);
  FUNC_0(VAR_1->base);
 }
 FUNC_0(VAR_1);
}
