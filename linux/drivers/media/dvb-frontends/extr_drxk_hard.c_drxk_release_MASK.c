
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drxk_state* demodulator_priv; } ;
struct drxk_state {int fw; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_0)
{
 struct drxk_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(1, "\n");
 FUNC_2(VAR_1->fw);

 FUNC_1(VAR_1);
}
