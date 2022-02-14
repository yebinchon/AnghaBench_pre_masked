
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_5__ {int mem_mbx_lock; } ;
struct TYPE_6__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; TYPE_3__** fe; scalar_t__ i2c_read_buffer; } ;
typedef int s8 ;
struct TYPE_8__ {void* code_rate_LP; void* code_rate_HP; int hierarchy; int modulation; int guard_interval; int transmission_mode; int inversion; } ;
struct TYPE_7__ {TYPE_4__ dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ) ;
 int FUNC_1 (struct dib9000_state*,int ,scalar_t__,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_29)
{
 struct dib9000_state *VAR_30 = VAR_29->demodulator_priv;
 struct dibDVBTChannel {
  s8 spectrum_inversion;

  s8 nfft;
  s8 guard;
  s8 constellation;

  s8 hrch;
  s8 alpha;
  s8 code_rate_hp;
  s8 code_rate_lp;
  s8 select_hp;

  s8 intlv_native;
 };
 struct dibDVBTChannel *VAR_31;
 int VAR_32 = 0;

 if (FUNC_3(&VAR_30->platform.risc.mem_mbx_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_0;
 }
 if (FUNC_0(VAR_30, VAR_9) < 0) {
  VAR_32 = -VAR_1;
  goto error;
 }

 FUNC_1(VAR_30, VAR_8,
   VAR_30->i2c_read_buffer, sizeof(struct dibDVBTChannel));
 VAR_31 = (struct dibDVBTChannel *)VAR_30->i2c_read_buffer;


 switch (VAR_31->spectrum_inversion & 0x7) {
 case 1:
  VAR_30->fe[0]->dtv_property_cache.inversion = VAR_20;
  break;
 case 0:
  VAR_30->fe[0]->dtv_property_cache.inversion = VAR_19;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.inversion = VAR_18;
  break;
 }
 switch (VAR_31->nfft) {
 case 0:
  VAR_30->fe[0]->dtv_property_cache.transmission_mode = VAR_25;
  break;
 case 2:
  VAR_30->fe[0]->dtv_property_cache.transmission_mode = VAR_26;
  break;
 case 1:
  VAR_30->fe[0]->dtv_property_cache.transmission_mode = VAR_27;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.transmission_mode = VAR_28;
  break;
 }
 switch (VAR_31->guard) {
 case 0:
  VAR_30->fe[0]->dtv_property_cache.guard_interval = VAR_11;
  break;
 case 1:
  VAR_30->fe[0]->dtv_property_cache.guard_interval = VAR_10;
  break;
 case 2:
  VAR_30->fe[0]->dtv_property_cache.guard_interval = VAR_13;
  break;
 case 3:
  VAR_30->fe[0]->dtv_property_cache.guard_interval = VAR_12;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.guard_interval = VAR_14;
  break;
 }
 switch (VAR_31->constellation) {
 case 2:
  VAR_30->fe[0]->dtv_property_cache.modulation = VAR_22;
  break;
 case 1:
  VAR_30->fe[0]->dtv_property_cache.modulation = VAR_21;
  break;
 case 0:
  VAR_30->fe[0]->dtv_property_cache.modulation = VAR_24;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.modulation = VAR_23;
  break;
 }
 switch (VAR_31->hrch) {
 case 0:
  VAR_30->fe[0]->dtv_property_cache.hierarchy = VAR_17;
  break;
 case 1:
  VAR_30->fe[0]->dtv_property_cache.hierarchy = VAR_15;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.hierarchy = VAR_16;
  break;
 }
 switch (VAR_31->code_rate_hp) {
 case 1:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_2;
  break;
 case 2:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_3;
  break;
 case 3:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_4;
  break;
 case 5:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_5;
  break;
 case 7:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_6;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.code_rate_HP = VAR_7;
  break;
 }
 switch (VAR_31->code_rate_lp) {
 case 1:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_2;
  break;
 case 2:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_3;
  break;
 case 3:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_4;
  break;
 case 5:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_5;
  break;
 case 7:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_6;
  break;
 default:
 case -1:
  VAR_30->fe[0]->dtv_property_cache.code_rate_LP = VAR_7;
  break;
 }

error:
 FUNC_4(&VAR_30->platform.risc.mem_mbx_lock);
 return VAR_32;
}
