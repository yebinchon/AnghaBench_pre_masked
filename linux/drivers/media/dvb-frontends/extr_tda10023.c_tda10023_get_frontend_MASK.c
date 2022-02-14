
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dvb; } ;
struct tda10023_state {int reg0; TYPE_2__ frontend; } ;
struct dvb_frontend {struct tda10023_state* demodulator_priv; } ;
struct dtv_frontend_properties {int inversion; int frequency; scalar_t__ symbol_rate; int fec_inner; scalar_t__ modulation; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (struct tda10023_state*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3,
     struct dtv_frontend_properties *VAR_4)
{
 struct tda10023_state* VAR_5 = VAR_3->demodulator_priv;
 int VAR_6,VAR_7;
 s8 VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_5, 0x11);
 VAR_8 = FUNC_1(VAR_5, 0x19);
 VAR_7 = FUNC_1(VAR_5, 0x04);

 if (VAR_2) {

  FUNC_0(VAR_6 & 2 ? "DVB: TDA10023(%d): AFC (%d) %dHz\n" :
      "DVB: TDA10023(%d): [AFC (%d) %dHz]\n",
   VAR_5->frontend.dvb->num, VAR_8,
         -((s32)VAR_4->symbol_rate * VAR_8) >> 10);
 }

 VAR_4->inversion = (VAR_7&0x20?0:1);
 VAR_4->modulation = ((VAR_5->reg0 >> 2) & 7) + VAR_1;

 VAR_4->fec_inner = VAR_0;
 VAR_4->frequency = ((VAR_4->frequency + 31250) / 62500) * 62500;

 if (VAR_6 & 2)
  VAR_4->frequency -= ((s32)VAR_4->symbol_rate * VAR_8) >> 10;

 return 0;
}
