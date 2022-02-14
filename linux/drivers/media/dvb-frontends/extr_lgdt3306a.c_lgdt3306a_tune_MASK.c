
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int current_frequency; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, bool VAR_1,
     unsigned int VAR_2, unsigned int *VAR_3,
     enum fe_status *VAR_4)
{
 int VAR_5 = 0;
 struct lgdt3306a_state *VAR_6 = VAR_0->demodulator_priv;

 FUNC_0("re_tune=%u\n", VAR_1);

 if (VAR_1) {
  VAR_6->current_frequency = -1;
  VAR_5 = FUNC_2(VAR_0);
  if (VAR_5 != 0)
   return VAR_5;
 }
 *VAR_3 = 125;
 VAR_5 = FUNC_1(VAR_0, VAR_4);

 return VAR_5;
}
