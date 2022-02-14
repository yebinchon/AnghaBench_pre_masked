
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int verbose; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct stb0899_state*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct stb0899_state *VAR_3 = VAR_2->demodulator_priv;



 FUNC_0(VAR_3->verbose, VAR_0, 1, "Going to Sleep .. (Really tired .. :-))");

 FUNC_1(VAR_3, VAR_1, 0);

 return 0;
}
