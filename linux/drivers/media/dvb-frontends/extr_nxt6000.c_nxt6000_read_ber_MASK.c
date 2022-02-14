
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_3, u32* VAR_4)
{
 struct nxt6000_state* VAR_5 = VAR_3->demodulator_priv;

 FUNC_1( VAR_5, VAR_2, 0x18 );

 *VAR_4 = (FUNC_0( VAR_5, VAR_1 ) << 8 ) |
  FUNC_0( VAR_5, VAR_0 );

 FUNC_1( VAR_5, VAR_2, 0x18);

 return 0;
}
