
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lgdt3306a_state {int dummy; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct lgdt3306a_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct lgdt3306a_state *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = 0;



 *VAR_1 = FUNC_1(VAR_2, 0x00f4);
 FUNC_0("ucblocks=%u\n", *VAR_1);


 return 0;
}
