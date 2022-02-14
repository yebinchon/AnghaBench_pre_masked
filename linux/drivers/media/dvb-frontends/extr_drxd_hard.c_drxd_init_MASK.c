
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drxd_state* demodulator_priv; } ;
struct drxd_state {int dummy; } ;


 int FUNC_0 (struct drxd_state*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct drxd_state *VAR_1 = VAR_0->demodulator_priv;

 return FUNC_0(VAR_1, ((void*)0), 0);
}
