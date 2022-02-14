
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl {int tune_time; } ;
struct dvb_frontend {struct mxl* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, bool VAR_3,
  unsigned int VAR_4,
  unsigned int *VAR_5, enum fe_status *VAR_6)
{
 struct mxl *VAR_7 = VAR_2->demodulator_priv;
 int VAR_8 = 0;

 *VAR_5 = VAR_0 / 2;
 if (VAR_3) {
  VAR_8 = FUNC_1(VAR_2);
  if (VAR_8)
   return VAR_8;
  VAR_7->tune_time = VAR_1;
 }

 return FUNC_0(VAR_2, VAR_6);
}
