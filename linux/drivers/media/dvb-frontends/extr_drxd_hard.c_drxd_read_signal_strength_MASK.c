
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct drxd_state* demodulator_priv; } ;
struct drxd_state {int dummy; } ;


 int FUNC_0 (struct drxd_state*,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 * VAR_1)
{
 struct drxd_state *VAR_2 = VAR_0->demodulator_priv;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  *VAR_1 = 0;
 else
  *VAR_1 = 0xffff - (VAR_3 << 4);
 return 0;
}
