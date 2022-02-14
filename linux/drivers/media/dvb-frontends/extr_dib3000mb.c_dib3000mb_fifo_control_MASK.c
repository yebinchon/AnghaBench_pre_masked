
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, int VAR_4)
{
 struct dib3000_state *VAR_5 = VAR_3->demodulator_priv;

 FUNC_0("%s fifo\n",VAR_4 ? "enabling" : "disabling");
 if (VAR_4) {
  FUNC_1(VAR_2, VAR_0);
 } else {
  FUNC_1(VAR_2, VAR_1);
 }
 return 0;
}
