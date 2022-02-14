
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drxk_state* demodulator_priv; } ;
struct drxk_state {scalar_t__ m_drxk_state; } ;


 int FUNC_0 (struct drxk_state*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct drxk_state *VAR_4 = VAR_2->demodulator_priv;

 FUNC_1(1, ": %s\n", VAR_3 ? "enable" : "disable");

 if (VAR_4->m_drxk_state == VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_4, VAR_3 ? 1 : 0);
}
