
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct drxk_state* demodulator_priv; } ;
struct drxk_state {scalar_t__ m_drxk_state; } ;
struct TYPE_3__ {int uvalue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4,
         u16 *VAR_5)
{
 struct drxk_state *VAR_6 = VAR_4->demodulator_priv;
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;

 FUNC_0(1, "\n");

 if (VAR_6->m_drxk_state == VAR_0)
  return -VAR_3;
 if (VAR_6->m_drxk_state == VAR_1)
  return -VAR_2;

 *VAR_5 = VAR_7->strength.stat[0].uvalue;
 return 0;
}
