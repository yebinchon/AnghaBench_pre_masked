
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zl10353_state {int dummy; } ;
struct dvb_frontend {struct zl10353_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zl10353_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3, u32 *VAR_4)
{
 struct zl10353_state *VAR_5 = VAR_3->demodulator_priv;

 *VAR_4 = FUNC_0(VAR_5, VAR_2) << 16 |
        FUNC_0(VAR_5, VAR_1) << 8 |
        FUNC_0(VAR_5, VAR_0);

 return 0;
}
