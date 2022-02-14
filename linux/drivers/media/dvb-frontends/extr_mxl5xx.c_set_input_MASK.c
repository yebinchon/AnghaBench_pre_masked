
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl {int tuner; } ;
struct dvb_frontend {struct mxl* demodulator_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct mxl *VAR_2 = VAR_0->demodulator_priv;

 VAR_2->tuner = VAR_1;
 return 0;
}
