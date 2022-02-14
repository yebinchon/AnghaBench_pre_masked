
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nxt200x_state {int dummy; } ;
struct dvb_frontend {struct nxt200x_state* demodulator_priv; } ;


 int FUNC_0 (struct nxt200x_state*,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct nxt200x_state* VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3[3];

 FUNC_0(VAR_2, 0xE6, VAR_3, 3);
 *VAR_1 = VAR_3[2];

 return 0;
}
