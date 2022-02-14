
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {scalar_t__ tune_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3)
{
 struct dib0090_state *VAR_4 = VAR_3->tuner_priv;
 u32 VAR_5;

 VAR_4->tune_state = VAR_0;

 do {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 == VAR_2)
   break;
  VAR_5 = 10 * (VAR_5 + 99)/100;
  FUNC_1(VAR_5 * 1000, (VAR_5 + 1) * 1000);
 } while (VAR_4->tune_state != VAR_1);

 return 0;
}
