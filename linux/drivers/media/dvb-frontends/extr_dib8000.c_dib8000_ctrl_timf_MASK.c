
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int timf; int * fe; } ;





 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct dib8000_state*) ;

__attribute__((used)) static u32 FUNC_2(struct dvb_frontend *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
 struct dib8000_state *VAR_3 = VAR_0->demodulator_priv;

 switch (VAR_1) {
 case 129:
   VAR_3->timf = VAR_2;
   break;
 case 128:
   FUNC_1(VAR_3);
   break;
 case 130:
   break;
 }
 FUNC_0(VAR_3->fe[0], 6000);

 return VAR_3->timf;
}
