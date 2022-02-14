
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv6110x_state {int * regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct stv6110x_state*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u32 VAR_3)
{
 struct stv6110x_state *VAR_4 = VAR_2->tuner_priv;

 FUNC_0(VAR_4->regs[VAR_1], VAR_0, VAR_3 / 2);
 FUNC_1(VAR_4, VAR_1, VAR_4->regs[VAR_1]);

 return 0;
}
