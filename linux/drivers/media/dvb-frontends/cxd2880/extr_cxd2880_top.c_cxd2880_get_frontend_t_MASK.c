
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct TYPE_6__ {int len; TYPE_1__* stat; } ;
struct TYPE_8__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ cnr; TYPE_4__ strength; void* inversion; void* modulation; void* code_rate_LP; void* code_rate_HP; void* hierarchy; void* guard_interval; void* transmission_mode; } ;
struct cxd2880_priv {int spi_mutex; int tnrdmd; } ;
struct cxd2880_dvbt_tpsinfo {int hierarchy; int rate_hp; int rate_lp; int constellation; } ;
typedef enum cxd2880_tnrdmd_spectrum_sense { ____Placeholder_cxd2880_tnrdmd_spectrum_sense } cxd2880_tnrdmd_spectrum_sense ;
typedef enum cxd2880_dvbt_mode { ____Placeholder_cxd2880_dvbt_mode } cxd2880_dvbt_mode ;
typedef enum cxd2880_dvbt_guard { ____Placeholder_cxd2880_dvbt_guard } cxd2880_dvbt_guard ;
struct TYPE_7__ {int svalue; void* scale; } ;
struct TYPE_5__ {void* scale; int svalue; } ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,struct cxd2880_dvbt_tpsinfo*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_24,
      struct dtv_frontend_properties *VAR_25)
{
 int VAR_26;
 struct cxd2880_priv *VAR_27 = ((void*)0);
 enum cxd2880_dvbt_mode VAR_28 = 131;
 enum cxd2880_dvbt_guard VAR_29 = 138;
 struct cxd2880_dvbt_tpsinfo VAR_30;
 enum cxd2880_tnrdmd_spectrum_sense VAR_31;
 u16 VAR_32 = 0;
 int VAR_33 = 0;

 if (!VAR_24 || !VAR_25) {
  FUNC_8("invalid arg\n");
  return -VAR_0;
 }

 VAR_27 = VAR_24->demodulator_priv;

 FUNC_5(VAR_27->spi_mutex);
 VAR_26 = FUNC_1(&VAR_27->tnrdmd,
       &VAR_28, &VAR_29);
 FUNC_6(VAR_27->spi_mutex);
 if (!VAR_26) {
  switch (VAR_28) {
  case 131:
   VAR_25->transmission_mode = VAR_22;
   break;
  case 130:
   VAR_25->transmission_mode = VAR_23;
   break;
  default:
   VAR_25->transmission_mode = VAR_22;
   FUNC_7("transmission mode is invalid %d\n", VAR_28);
   break;
  }
  switch (VAR_29) {
  case 138:
   VAR_25->guard_interval = VAR_10;
   break;
  case 139:
   VAR_25->guard_interval = VAR_9;
   break;
  case 136:
   VAR_25->guard_interval = VAR_12;
   break;
  case 137:
   VAR_25->guard_interval = VAR_11;
   break;
  default:
   VAR_25->guard_interval = VAR_10;
   FUNC_7("guard interval is invalid %d\n",
     VAR_29);
   break;
  }
 } else {
  VAR_25->transmission_mode = VAR_22;
  VAR_25->guard_interval = VAR_10;
  FUNC_7("ModeGuard err %d\n", VAR_26);
 }

 FUNC_5(VAR_27->spi_mutex);
 VAR_26 = FUNC_3(&VAR_27->tnrdmd, &VAR_30);
 FUNC_6(VAR_27->spi_mutex);
 if (!VAR_26) {
  switch (VAR_30.hierarchy) {
  case 132:
   VAR_25->hierarchy = VAR_16;
   break;
  case 135:
   VAR_25->hierarchy = VAR_13;
   break;
  case 134:
   VAR_25->hierarchy = VAR_14;
   break;
  case 133:
   VAR_25->hierarchy = VAR_15;
   break;
  default:
   VAR_25->hierarchy = VAR_16;
   FUNC_7("TPSInfo hierarchy is invalid %d\n",
     VAR_30.hierarchy);
   break;
  }

  switch (VAR_30.rate_hp) {
  case 147:
   VAR_25->code_rate_HP = VAR_1;
   break;
  case 146:
   VAR_25->code_rate_HP = VAR_2;
   break;
  case 145:
   VAR_25->code_rate_HP = VAR_3;
   break;
  case 144:
   VAR_25->code_rate_HP = VAR_4;
   break;
  case 143:
   VAR_25->code_rate_HP = VAR_5;
   break;
  default:
   VAR_25->code_rate_HP = VAR_6;
   FUNC_7("TPSInfo rateHP is invalid %d\n",
     VAR_30.rate_hp);
   break;
  }
  switch (VAR_30.rate_lp) {
  case 147:
   VAR_25->code_rate_LP = VAR_1;
   break;
  case 146:
   VAR_25->code_rate_LP = VAR_2;
   break;
  case 145:
   VAR_25->code_rate_LP = VAR_3;
   break;
  case 144:
   VAR_25->code_rate_LP = VAR_4;
   break;
  case 143:
   VAR_25->code_rate_LP = VAR_5;
   break;
  default:
   VAR_25->code_rate_LP = VAR_6;
   FUNC_7("TPSInfo rateLP is invalid %d\n",
     VAR_30.rate_lp);
   break;
  }
  switch (VAR_30.constellation) {
  case 140:
   VAR_25->modulation = VAR_21;
   break;
  case 142:
   VAR_25->modulation = VAR_19;
   break;
  case 141:
   VAR_25->modulation = VAR_20;
   break;
  default:
   VAR_25->modulation = VAR_21;
   FUNC_7("TPSInfo constellation is invalid %d\n",
     VAR_30.constellation);
   break;
  }
 } else {
  VAR_25->hierarchy = VAR_16;
  VAR_25->code_rate_HP = VAR_6;
  VAR_25->code_rate_LP = VAR_6;
  VAR_25->modulation = VAR_21;
  FUNC_7("TPS info err %d\n", VAR_26);
 }

 FUNC_5(VAR_27->spi_mutex);
 VAR_26 = FUNC_2(&VAR_27->tnrdmd, &VAR_31);
 FUNC_6(VAR_27->spi_mutex);
 if (!VAR_26) {
  switch (VAR_31) {
  case 128:
   VAR_25->inversion = VAR_17;
   break;
  case 129:
   VAR_25->inversion = VAR_18;
   break;
  default:
   VAR_25->inversion = VAR_17;
   FUNC_7("spectrum sense is invalid %d\n", VAR_31);
   break;
  }
 } else {
  VAR_25->inversion = VAR_17;
  FUNC_7("spectrum_sense %d\n", VAR_26);
 }

 FUNC_5(VAR_27->spi_mutex);
 VAR_26 = FUNC_4(&VAR_27->tnrdmd, &VAR_33);
 FUNC_6(VAR_27->spi_mutex);
 if (!VAR_26) {
  VAR_25->strength.len = 1;
  VAR_25->strength.stat[0].scale = VAR_7;
  VAR_25->strength.stat[0].svalue = VAR_33;
 } else {
  VAR_25->strength.len = 1;
  VAR_25->strength.stat[0].scale = VAR_8;
  FUNC_7("mon_rf_lvl %d\n", VAR_26);
 }

 VAR_26 = FUNC_0(VAR_24, &VAR_32);
 if (!VAR_26) {
  VAR_25->cnr.len = 1;
  VAR_25->cnr.stat[0].scale = VAR_7;
  VAR_25->cnr.stat[0].svalue = VAR_32;
 } else {
  VAR_25->cnr.len = 1;
  VAR_25->cnr.stat[0].scale = VAR_8;
  FUNC_7("read_snr %d\n", VAR_26);
 }

 return 0;
}
