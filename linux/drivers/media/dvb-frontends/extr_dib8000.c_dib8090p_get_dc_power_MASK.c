
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3 = 0;

 switch (VAR_1) {
 case 1:
   VAR_3 = FUNC_0(VAR_2, 403);
   break;
 case 0:
   VAR_3 = FUNC_0(VAR_2, 404);
   break;
 }
 if (VAR_3 & 0x200)
  VAR_3 -= 1024;

 return VAR_3;
}
