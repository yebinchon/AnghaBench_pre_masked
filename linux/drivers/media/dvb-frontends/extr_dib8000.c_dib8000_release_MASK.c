
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {struct dib8000_state** fe; int dib8096p_tuner_adap; int i2c_master; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dib8000_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dib8000_state*) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend *VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_1->demodulator_priv;
 u8 VAR_3;

 for (VAR_3 = 1; (VAR_3 < VAR_0) && (VAR_2->fe[VAR_3] != ((void*)0)); VAR_3++)
  FUNC_1(VAR_2->fe[VAR_3]);

 FUNC_0(&VAR_2->i2c_master);
 FUNC_2(&VAR_2->dib8096p_tuner_adap);
 FUNC_3(VAR_2->fe[0]);
 FUNC_3(VAR_2);
}
