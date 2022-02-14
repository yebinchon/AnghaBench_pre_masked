
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv6110x_state {int * regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct stv6110x_state*,size_t,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_7, u32 *VAR_8)
{
 struct stv6110x_state *VAR_9 = VAR_7->tuner_priv;

 FUNC_2(VAR_9, VAR_2, &VAR_9->regs[VAR_2]);
 FUNC_2(VAR_9, VAR_1, &VAR_9->regs[VAR_1]);

 *VAR_8 = (FUNC_0(FUNC_1(VAR_5, VAR_9->regs[VAR_2]),
     FUNC_1(VAR_3, VAR_9->regs[VAR_1]))) * VAR_0;

 *VAR_8 /= (1 << (FUNC_1(VAR_6, VAR_9->regs[VAR_2]) +
        FUNC_1(VAR_4, VAR_9->regs[VAR_2])));

 *VAR_8 >>= 2;

 return 0;
}
