
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct dvb_frontend {struct lgs8gxx_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lgs8gxx_state*,int *) ;
 int FUNC_1 (struct lgs8gxx_state*,int *) ;
 int FUNC_2 (struct lgs8gxx_state*,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct lgs8gxx_state *VAR_4 = VAR_2->demodulator_priv;

 if (VAR_4->config->prod == VAR_0)
  return FUNC_0(VAR_4, VAR_3);
 else if (VAR_4->config->prod == VAR_1)
  return FUNC_1(VAR_4, VAR_3);
 else
  return FUNC_2(VAR_4, VAR_3);
}
