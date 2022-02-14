
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drxk_state* demodulator_priv; } ;
struct drxk_state {scalar_t__ m_drxk_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3)
{
 struct drxk_state *VAR_4 = VAR_3->demodulator_priv;

 FUNC_0(1, "\n");

 if (VAR_4->m_drxk_state == VAR_0)
  return -VAR_2;
 if (VAR_4->m_drxk_state == VAR_1)
  return 0;

 FUNC_1(VAR_4);
 return 0;
}
