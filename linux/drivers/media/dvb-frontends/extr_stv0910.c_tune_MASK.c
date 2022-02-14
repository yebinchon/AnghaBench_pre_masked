
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv {int tune_time; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, bool VAR_4,
  unsigned int VAR_5,
  unsigned int *VAR_6, enum fe_status *VAR_7)
{
 struct stv *VAR_8 = VAR_3->demodulator_priv;
 int VAR_9;

 if (VAR_4) {
  VAR_9 = FUNC_1(VAR_3);
  if (VAR_9)
   return VAR_9;
  VAR_8->tune_time = VAR_2;
 }

 VAR_9 = FUNC_0(VAR_3, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (*VAR_7 & VAR_0)
  return 0;
 *VAR_6 = VAR_1;

 return 0;
}
