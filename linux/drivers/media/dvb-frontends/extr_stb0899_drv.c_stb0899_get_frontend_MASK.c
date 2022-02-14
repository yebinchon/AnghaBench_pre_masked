
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_internal {int freq; int srate; } ;
struct stb0899_state {int verbose; struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
    struct dtv_frontend_properties *VAR_2)
{
 struct stb0899_state *VAR_3 = VAR_1->demodulator_priv;
 struct stb0899_internal *VAR_4 = &VAR_3->internal;

 FUNC_0(VAR_3->verbose, VAR_0, 1, "Get params");
 VAR_2->symbol_rate = VAR_4->srate;
 VAR_2->frequency = VAR_4->freq;

 return 0;
}
