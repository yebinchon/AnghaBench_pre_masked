
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct dib9000_state *VAR_3 = VAR_1->demodulator_priv;
 u16 VAR_4 = (u16) VAR_2;
 return FUNC_0(VAR_3, VAR_0, &VAR_4, 1);
}
