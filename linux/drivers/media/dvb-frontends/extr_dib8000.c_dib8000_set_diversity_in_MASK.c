
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int diversity_onoff; int revision; int differential_constellation; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3, VAR_4 = FUNC_0(VAR_2, 273) & 0xfff0;

 FUNC_2("set diversity input to %i\n", VAR_1);
 if (!VAR_2->differential_constellation) {
  FUNC_1(VAR_2, 272, 1 << 9);
  FUNC_1(VAR_2, 273, VAR_4 | (1 << 2) | 2);
 } else {
  FUNC_1(VAR_2, 272, 0);
  FUNC_1(VAR_2, 273, VAR_4);
 }
 VAR_2->diversity_onoff = VAR_1;

 switch (VAR_1) {
 case 0:
  FUNC_1(VAR_2, 270, 1);
  FUNC_1(VAR_2, 271, 0);
  break;
 case 1:
  FUNC_1(VAR_2, 270, 6);
  FUNC_1(VAR_2, 271, 6);
  break;
 case 2:
  FUNC_1(VAR_2, 270, 0);
  FUNC_1(VAR_2, 271, 1);
  break;
 }

 if (VAR_2->revision == 0x8002) {
  VAR_3 = FUNC_0(VAR_2, 903);
  FUNC_1(VAR_2, 903, VAR_3 & ~(1 << 3));
  FUNC_3(30);
  FUNC_1(VAR_2, 903, VAR_3 | (1 << 3));
 }
 return 0;
}
