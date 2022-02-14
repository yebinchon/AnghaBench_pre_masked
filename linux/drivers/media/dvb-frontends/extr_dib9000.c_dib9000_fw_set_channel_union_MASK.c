
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {TYPE_2__** fe; } ;
typedef int s8 ;
struct TYPE_3__ {int inversion; int transmission_mode; int guard_interval; int modulation; int hierarchy; int code_rate_HP; int code_rate_LP; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;
 int VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct dib9000_state *VAR_2 = VAR_1->demodulator_priv;
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
 struct dibDVBTChannel VAR_3;

 switch (VAR_2->fe[0]->dtv_property_cache.inversion) {
 case 136:
  VAR_3.spectrum_inversion = 1;
  break;
 case 137:
  VAR_3.spectrum_inversion = 0;
  break;
 default:
 case 138:
  VAR_3.spectrum_inversion = -1;
  break;
 }
 switch (VAR_2->fe[0]->dtv_property_cache.transmission_mode) {
 case 131:
  VAR_3.nfft = 0;
  break;
 case 130:
  VAR_3.nfft = 2;
  break;
 case 129:
  VAR_3.nfft = 1;
  break;
 default:
 case 128:
  VAR_3.nfft = 1;
  break;
 }
 switch (VAR_2->fe[0]->dtv_property_cache.guard_interval) {
 case 147:
  VAR_3.guard = 0;
  break;
 case 148:
  VAR_3.guard = 1;
  break;
 case 145:
  VAR_3.guard = 2;
  break;
 case 146:
  VAR_3.guard = 3;
  break;
 default:
 case 144:
  VAR_3.guard = -1;
  break;
 }
 switch (VAR_2->fe[0]->dtv_property_cache.modulation) {
 case 134:
  VAR_3.constellation = 2;
  break;
 case 135:
  VAR_3.constellation = 1;
  break;
 case 132:
  VAR_3.constellation = 0;
  break;
 default:
 case 133:
  VAR_3.constellation = -1;
  break;
 }
 switch (VAR_2->fe[0]->dtv_property_cache.hierarchy) {
 case 139:
  VAR_3.hrch = 0;
  break;
 case 143:
 case 142:
 case 141:
  VAR_3.hrch = 1;
  break;
 default:
 case 140:
  VAR_3.hrch = -1;
  break;
 }
 VAR_3.alpha = 1;
 switch (VAR_2->fe[0]->dtv_property_cache.code_rate_HP) {
 case 154:
  VAR_3.code_rate_hp = 1;
  break;
 case 153:
  VAR_3.code_rate_hp = 2;
  break;
 case 152:
  VAR_3.code_rate_hp = 3;
  break;
 case 151:
  VAR_3.code_rate_hp = 5;
  break;
 case 150:
  VAR_3.code_rate_hp = 7;
  break;
 default:
 case 149:
  VAR_3.code_rate_hp = -1;
  break;
 }
 switch (VAR_2->fe[0]->dtv_property_cache.code_rate_LP) {
 case 154:
  VAR_3.code_rate_lp = 1;
  break;
 case 153:
  VAR_3.code_rate_lp = 2;
  break;
 case 152:
  VAR_3.code_rate_lp = 3;
  break;
 case 151:
  VAR_3.code_rate_lp = 5;
  break;
 case 150:
  VAR_3.code_rate_lp = 7;
  break;
 default:
 case 149:
  VAR_3.code_rate_lp = -1;
  break;
 }
 VAR_3.select_hp = 1;
 VAR_3.intlv_native = 1;

 FUNC_0(VAR_2, VAR_0, (u8 *) &VAR_3);

 return 0;
}
