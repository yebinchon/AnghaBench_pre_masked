
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl {scalar_t__ count; struct mxl* base; int mxllist; int mxl; } ;
struct dvb_frontend {struct mxl* demodulator_priv; } ;


 int FUNC_0 (struct mxl*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct mxl *VAR_1 = VAR_0->demodulator_priv;

 FUNC_1(&VAR_1->mxl);

 VAR_1->base->count--;
 if (VAR_1->base->count == 0) {
  FUNC_1(&VAR_1->base->mxllist);
  FUNC_0(VAR_1->base);
 }
 FUNC_0(VAR_1);
}
