
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stv {int started; int demod_timeout; int fec_timeout; int demod_bits; int search_range; scalar_t__ demod_lock_time; scalar_t__ regoff; TYPE_1__* base; scalar_t__ nr; int receive_mode; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
typedef int s32 ;
struct TYPE_2__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (struct stv*,int ) ;
 int FUNC_1 (struct stv*,struct dtv_frontend_properties*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct stv*,scalar_t__,int*) ;
 int FUNC_4 (struct stv*) ;
 int FUNC_5 (struct stv*,scalar_t__,int) ;
 int FUNC_6 (struct stv*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct stv *VAR_30, struct dtv_frontend_properties *VAR_31)
{
 s32 VAR_32;
 u8 VAR_33;
 u16 VAR_34;

 if (VAR_31->symbol_rate < 100000 || VAR_31->symbol_rate > 70000000)
  return -VAR_0;

 VAR_30->receive_mode = VAR_2;
 VAR_30->demod_lock_time = 0;


 if (VAR_30->started)
  FUNC_5(VAR_30, VAR_22 + VAR_30->regoff, 0x5C);

 FUNC_1(VAR_30, VAR_31);

 if (VAR_31->symbol_rate <= 1000000) {
  VAR_30->demod_timeout = 3000;
  VAR_30->fec_timeout = 2000;
 } else if (VAR_31->symbol_rate <= 2000000) {
  VAR_30->demod_timeout = 2500;
  VAR_30->fec_timeout = 1300;
 } else if (VAR_31->symbol_rate <= 5000000) {
  VAR_30->demod_timeout = 1000;
  VAR_30->fec_timeout = 650;
 } else if (VAR_31->symbol_rate <= 10000000) {
  VAR_30->demod_timeout = 700;
  VAR_30->fec_timeout = 350;
 } else if (VAR_31->symbol_rate < 20000000) {
  VAR_30->demod_timeout = 400;
  VAR_30->fec_timeout = 200;
 } else {
  VAR_30->demod_timeout = 300;
  VAR_30->fec_timeout = 200;
 }


 VAR_34 = FUNC_2(VAR_31->symbol_rate, 65536, VAR_30->base->mclk);
 FUNC_5(VAR_30, VAR_26 + VAR_30->regoff,
    ((VAR_34 >> 8) & 0x7F));
 FUNC_5(VAR_30, VAR_25 + VAR_30->regoff, (VAR_34 & 0xFF));

 VAR_30->demod_bits |= 0x80;
 FUNC_5(VAR_30, VAR_20 + VAR_30->regoff, VAR_30->demod_bits);


 FUNC_3(VAR_30, VAR_21 + VAR_30->regoff, &VAR_33);
 FUNC_5(VAR_30, VAR_21 + VAR_30->regoff,
    VAR_33 |= 0xC0);

 FUNC_6(VAR_30,
    VAR_28, VAR_30->nr ? 0x02 : 0x01, 0x00);


 FUNC_5(VAR_30, VAR_23 + VAR_30->regoff, 0x00);
 FUNC_5(VAR_30, VAR_24 + VAR_30->regoff, 0x2F);

 FUNC_0(VAR_30, VAR_1);


 FUNC_5(VAR_30, VAR_6 + VAR_30->regoff, 0x0B);
 FUNC_5(VAR_30, VAR_5 + VAR_30->regoff, 0x0A);
 FUNC_5(VAR_30, VAR_10 + VAR_30->regoff, 0x84);
 FUNC_5(VAR_30, VAR_9 + VAR_30->regoff, 0x84);
 FUNC_5(VAR_30, VAR_13 + VAR_30->regoff, 0x1C);
 FUNC_5(VAR_30, VAR_12 + VAR_30->regoff, 0x79);

 FUNC_5(VAR_30, VAR_3 + VAR_30->regoff, 0x29);
 FUNC_5(VAR_30, VAR_4 + VAR_30->regoff, 0x09);
 FUNC_5(VAR_30, VAR_7 + VAR_30->regoff, 0x84);
 FUNC_5(VAR_30, VAR_8 + VAR_30->regoff, 0x84);





 FUNC_5(VAR_30, VAR_27, VAR_30->nr ? 0x04 : 0x08);
 FUNC_5(VAR_30, VAR_27, 0);

 FUNC_4(VAR_30);

 FUNC_5(VAR_30, VAR_22 + VAR_30->regoff, 0x1F);

 FUNC_5(VAR_30, VAR_11 + VAR_30->regoff, 0x46);

 if (VAR_31->symbol_rate <= 5000000)
  VAR_32 = (VAR_30->search_range / 2000) + 80;
 else
  VAR_32 = (VAR_30->search_range / 2000) + 1600;
 VAR_32 = (VAR_32 << 16) / (VAR_30->base->mclk / 1000);

 FUNC_5(VAR_30, VAR_19 + VAR_30->regoff,
    (VAR_32 >> 8) & 0xff);
 FUNC_5(VAR_30, VAR_18 + VAR_30->regoff, (VAR_32 & 0xff));

 VAR_32 = -VAR_32;
 FUNC_5(VAR_30, VAR_17 + VAR_30->regoff,
    (VAR_32 >> 8) & 0xff);
 FUNC_5(VAR_30, VAR_16 + VAR_30->regoff, (VAR_32 & 0xff));


 FUNC_5(VAR_30, VAR_15 + VAR_30->regoff, 0);
 FUNC_5(VAR_30, VAR_14 + VAR_30->regoff, 0);

 FUNC_5(VAR_30, VAR_22 + VAR_30->regoff, 0x1F);

 FUNC_5(VAR_30, VAR_22 + VAR_30->regoff, 0x15);

 VAR_30->demod_lock_time += VAR_29;
 VAR_30->started = 1;

 return 0;
}
