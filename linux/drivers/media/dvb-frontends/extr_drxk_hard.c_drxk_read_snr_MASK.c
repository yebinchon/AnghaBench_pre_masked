
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct drxk_state* demodulator_priv; } ;
struct drxk_state {scalar_t__ m_drxk_state; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4, u16 *VAR_5)
{
 struct drxk_state *VAR_6 = VAR_4->demodulator_priv;
 s32 VAR_7;

 FUNC_0(1, "\n");

 if (VAR_6->m_drxk_state == VAR_0)
  return -VAR_3;
 if (VAR_6->m_drxk_state == VAR_1)
  return -VAR_2;

 FUNC_1(VAR_6, &VAR_7);


 if (VAR_7 < 0)
  VAR_7 = 0;
 *VAR_5 = VAR_7 & 0xffff;
 return 0;
}
