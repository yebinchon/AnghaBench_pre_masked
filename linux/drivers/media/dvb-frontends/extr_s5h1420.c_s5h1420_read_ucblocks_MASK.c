
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5h1420_state {int dummy; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct s5h1420_state*,int) ;
 int FUNC_2 (struct s5h1420_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct s5h1420_state* VAR_2 = VAR_0->demodulator_priv;

 FUNC_2(VAR_2, 0x46, 0x1f);
 FUNC_0(25);

 *VAR_1 = (FUNC_1(VAR_2, 0x48) << 8) | FUNC_1(VAR_2, 0x47);

 return 0;
}
