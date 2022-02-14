
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ timf ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {scalar_t__ timf; int timf_default; } ;


 int FUNC_0 (struct dib8000_state*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 u32 VAR_3;

 if (VAR_1 == 0)
  VAR_1 = 6000;

 if (VAR_2->timf == 0) {
  FUNC_1("using default timf\n");
  VAR_3 = VAR_2->timf_default;
 } else {
  FUNC_1("using updated timf\n");
  VAR_3 = VAR_2->timf;
 }

 FUNC_0(VAR_2, 29, (u16) ((VAR_3 >> 16) & 0xffff));
 FUNC_0(VAR_2, 30, (u16) ((VAR_3) & 0xffff));

 return 0;
}
