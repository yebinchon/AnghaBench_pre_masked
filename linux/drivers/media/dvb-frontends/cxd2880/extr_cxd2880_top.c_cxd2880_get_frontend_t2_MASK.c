
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
struct TYPE_8__ {int len; TYPE_1__* stat; } ;
struct TYPE_7__ {int len; TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ cnr; TYPE_3__ strength; void* inversion; void* modulation; void* fec_inner; void* guard_interval; void* transmission_mode; } ;
struct cxd2880_priv {int spi_mutex; int tnrdmd; } ;
struct cxd2880_dvbt2_l1pre {int fft_mode; int gi; } ;
typedef enum cxd2880_tnrdmd_spectrum_sense { ____Placeholder_cxd2880_tnrdmd_spectrum_sense } cxd2880_tnrdmd_spectrum_sense ;
typedef enum cxd2880_dvbt2_plp_constell { ____Placeholder_cxd2880_dvbt2_plp_constell } cxd2880_dvbt2_plp_constell ;
typedef enum cxd2880_dvbt2_plp_code_rate { ____Placeholder_cxd2880_dvbt2_plp_code_rate } cxd2880_dvbt2_plp_code_rate ;
struct TYPE_6__ {int svalue; void* scale; } ;
struct TYPE_5__ {void* scale; int svalue; } ;
 int VAR_0 ;
 int VAR_1 ;
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
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,struct cxd2880_dvbt2_l1pre*) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_30,
       struct dtv_frontend_properties *VAR_31)
{
 int VAR_32;
 struct cxd2880_priv *VAR_33 = ((void*)0);
 struct cxd2880_dvbt2_l1pre VAR_34;
 enum cxd2880_dvbt2_plp_code_rate VAR_35;
 enum cxd2880_dvbt2_plp_constell VAR_36;
 enum cxd2880_tnrdmd_spectrum_sense VAR_37;
 u16 VAR_38 = 0;
 int VAR_39 = 0;

 if (!VAR_30 || !VAR_31) {
  FUNC_9("invalid arg.\n");
  return -VAR_1;
 }

 VAR_33 = VAR_30->demodulator_priv;

 FUNC_6(VAR_33->spi_mutex);
 VAR_32 = FUNC_2(&VAR_33->tnrdmd, &VAR_34);
 FUNC_7(VAR_33->spi_mutex);
 if (!VAR_32) {
  switch (VAR_34.fft_mode) {
  case 143:
   VAR_31->transmission_mode = VAR_26;
   break;
  case 140:
   VAR_31->transmission_mode = VAR_29;
   break;
  case 141:
   VAR_31->transmission_mode = VAR_28;
   break;
  case 144:
   VAR_31->transmission_mode = VAR_25;
   break;
  case 145:
   VAR_31->transmission_mode = VAR_24;
   break;
  case 142:
   VAR_31->transmission_mode = VAR_27;
   break;
  default:
   VAR_31->transmission_mode = VAR_26;
   FUNC_8("L1Pre fft_mode is invalid %d\n",
     VAR_34.fft_mode);
   break;
  }
  switch (VAR_34.gi) {
  case 148:
   VAR_31->guard_interval = VAR_15;
   break;
  case 149:
   VAR_31->guard_interval = VAR_14;
   break;
  case 146:
   VAR_31->guard_interval = VAR_17;
   break;
  case 147:
   VAR_31->guard_interval = VAR_16;
   break;
  case 150:
   VAR_31->guard_interval = VAR_13;
   break;
  case 152:
   VAR_31->guard_interval = VAR_11;
   break;
  case 151:
   VAR_31->guard_interval = VAR_12;
   break;
  default:
   VAR_31->guard_interval = VAR_15;
   FUNC_8("L1Pre guard interval is invalid %d\n",
     VAR_34.gi);
   break;
  }
 } else {
  VAR_31->transmission_mode = VAR_26;
  VAR_31->guard_interval = VAR_15;
  FUNC_8("L1Pre err %d\n", VAR_32);
 }

 FUNC_6(VAR_33->spi_mutex);
 VAR_32 = FUNC_1(&VAR_33->tnrdmd,
       VAR_0,
       &VAR_35);
 FUNC_7(VAR_33->spi_mutex);
 if (!VAR_32) {
  switch (VAR_35) {
  case 135:
   VAR_31->fec_inner = VAR_2;
   break;
  case 132:
   VAR_31->fec_inner = VAR_5;
   break;
  case 134:
   VAR_31->fec_inner = VAR_3;
   break;
  case 133:
   VAR_31->fec_inner = VAR_4;
   break;
  case 131:
   VAR_31->fec_inner = VAR_6;
   break;
  case 130:
   VAR_31->fec_inner = VAR_7;
   break;
  default:
   VAR_31->fec_inner = VAR_8;
   FUNC_8("CodeRate is invalid %d\n", VAR_35);
   break;
  }
 } else {
  VAR_31->fec_inner = VAR_8;
  FUNC_8("CodeRate %d\n", VAR_32);
 }

 FUNC_6(VAR_33->spi_mutex);
 VAR_32 = FUNC_3(&VAR_33->tnrdmd,
        VAR_0,
        &VAR_36);
 FUNC_7(VAR_33->spi_mutex);
 if (!VAR_32) {
  switch (VAR_36) {
  case 136:
   VAR_31->modulation = VAR_23;
   break;
  case 139:
   VAR_31->modulation = VAR_20;
   break;
  case 137:
   VAR_31->modulation = VAR_22;
   break;
  case 138:
   VAR_31->modulation = VAR_21;
   break;
  default:
   VAR_31->modulation = VAR_23;
   FUNC_8("QAM is invalid %d\n", VAR_36);
   break;
  }
 } else {
  VAR_31->modulation = VAR_23;
  FUNC_8("QAM %d\n", VAR_32);
 }

 FUNC_6(VAR_33->spi_mutex);
 VAR_32 = FUNC_4(&VAR_33->tnrdmd, &VAR_37);
 FUNC_7(VAR_33->spi_mutex);
 if (!VAR_32) {
  switch (VAR_37) {
  case 128:
   VAR_31->inversion = VAR_18;
   break;
  case 129:
   VAR_31->inversion = VAR_19;
   break;
  default:
   VAR_31->inversion = VAR_18;
   FUNC_8("spectrum sense is invalid %d\n", VAR_37);
   break;
  }
 } else {
  VAR_31->inversion = VAR_18;
  FUNC_8("SpectrumSense %d\n", VAR_32);
 }

 FUNC_6(VAR_33->spi_mutex);
 VAR_32 = FUNC_5(&VAR_33->tnrdmd, &VAR_39);
 FUNC_7(VAR_33->spi_mutex);
 if (!VAR_32) {
  VAR_31->strength.len = 1;
  VAR_31->strength.stat[0].scale = VAR_9;
  VAR_31->strength.stat[0].svalue = VAR_39;
 } else {
  VAR_31->strength.len = 1;
  VAR_31->strength.stat[0].scale = VAR_10;
  FUNC_8("mon_rf_lvl %d\n", VAR_32);
 }

 VAR_32 = FUNC_0(VAR_30, &VAR_38);
 if (!VAR_32) {
  VAR_31->cnr.len = 1;
  VAR_31->cnr.stat[0].scale = VAR_9;
  VAR_31->cnr.stat[0].svalue = VAR_38;
 } else {
  VAR_31->cnr.len = 1;
  VAR_31->cnr.stat[0].scale = VAR_10;
  FUNC_8("read_snr %d\n", VAR_32);
 }

 return 0;
}
