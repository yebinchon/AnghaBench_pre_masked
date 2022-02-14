
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct stv {scalar_t__ receive_mode; scalar_t__ regoff; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
struct dtv_frontend_properties {int modulation; int fec_inner; size_t symbol_rate; int rolloff; int pilot; } ;
typedef enum fe_modulation { ____Placeholder_fe_modulation } fe_modulation ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct stv*,size_t*) ;
 int FUNC_1 (struct stv*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_23,
   struct dtv_frontend_properties *VAR_24)
{
 struct stv *VAR_25 = VAR_23->demodulator_priv;
 u8 VAR_26;
 u32 VAR_27;

 if (VAR_25->receive_mode == VAR_18) {
  u32 VAR_28;
  const enum fe_modulation VAR_29[0x20] = {
   VAR_16, VAR_16, VAR_16, VAR_16,
   VAR_16, VAR_16, VAR_16, VAR_16,
   VAR_16, VAR_16, VAR_16, VAR_16,
   VAR_15, VAR_15, VAR_15, VAR_15,
   VAR_15, VAR_15, VAR_0, VAR_0,
   VAR_0, VAR_0, VAR_0, VAR_0,
   VAR_1, VAR_1, VAR_1, VAR_1,
   VAR_1,
  };
  const enum fe_code_rate VAR_30[0x20] = {
   VAR_12, VAR_12, VAR_12, VAR_4,
   VAR_2, VAR_6, VAR_3, VAR_5,
   VAR_7, VAR_8, VAR_10, VAR_11,
   VAR_6, VAR_3, VAR_5, VAR_8,
   VAR_10, VAR_11, VAR_3, VAR_5,
   VAR_7, VAR_8, VAR_10, VAR_11,
   VAR_5, VAR_7, VAR_8, VAR_10,
   VAR_11
  };
  FUNC_1(VAR_25, VAR_21 + VAR_25->regoff, &VAR_26);
  VAR_28 = ((VAR_26 & 0x7c) >> 2);
  VAR_24->pilot = (VAR_26 & 0x01) ? VAR_14 : VAR_13;
  VAR_24->modulation = VAR_29[VAR_28];
  VAR_24->fec_inner = VAR_30[VAR_28];
 } else if (VAR_25->receive_mode == VAR_17) {
  FUNC_1(VAR_25, VAR_22 + VAR_25->regoff, &VAR_26);
  switch (VAR_26 & 0x1F) {
  case 0x0d:
   VAR_24->fec_inner = VAR_2;
   break;
  case 0x12:
   VAR_24->fec_inner = VAR_3;
   break;
  case 0x15:
   VAR_24->fec_inner = VAR_5;
   break;
  case 0x18:
   VAR_24->fec_inner = VAR_8;
   break;
  case 0x1a:
   VAR_24->fec_inner = VAR_9;
   break;
  default:
   VAR_24->fec_inner = VAR_12;
   break;
  }
  VAR_24->rolloff = VAR_20;
 }

 if (VAR_25->receive_mode != VAR_19) {
  FUNC_0(VAR_25, &VAR_27);
  VAR_24->symbol_rate = VAR_27;
 }
 return 0;
}
