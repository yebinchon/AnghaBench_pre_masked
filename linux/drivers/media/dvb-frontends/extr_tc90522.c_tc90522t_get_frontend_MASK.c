
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tc90522_state {int dummy; } ;
struct TYPE_5__ {int (* get_rf_strength ) (struct dvb_frontend*,int *) ;} ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tc90522_state* demodulator_priv; } ;
struct dtv_fe_stats {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {int bandwidth_hz; int guard_interval; int isdbt_partial_reception; int isdbt_sb_mode; struct dtv_fe_stats post_bit_count; struct dtv_fe_stats post_bit_error; struct dtv_fe_stats cnr; struct dtv_fe_stats strength; TYPE_4__* layer; int transmission_mode; int delivery_system; } ;
typedef int s64 ;
struct TYPE_8__ {int segment_count; int interleaving; void* modulation; void* fec; } ;
struct TYPE_7__ {int svalue; int uvalue; void* scale; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long long,int) ;
 void** VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dtv_fe_stats*,int ,int) ;
 void** VAR_5 ;
 int FUNC_3 (struct tc90522_state*,int,int*,int) ;
 int FUNC_4 (struct dvb_frontend*,int *) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_7,
     struct dtv_frontend_properties *VAR_8)
{
 struct tc90522_state *VAR_9;
 struct dtv_fe_stats *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14[15], VAR_15;
 u32 VAR_16;

 VAR_9 = VAR_7->demodulator_priv;
 VAR_8->delivery_system = VAR_3;
 VAR_8->bandwidth_hz = 6000000;
 VAR_15 = 1;
 VAR_11 = FUNC_3(VAR_9, 0xb0, VAR_14, 1);
 if (VAR_11 == 0) {
  VAR_15 = (VAR_14[0] & 0xc0) >> 6;
  VAR_8->transmission_mode = VAR_6[VAR_15];
  VAR_8->guard_interval = (VAR_14[0] & 0x30) >> 4;
 }

 VAR_11 = FUNC_3(VAR_9, 0xb2, VAR_14, 6);
 VAR_13 = 0;
 if (VAR_11 == 0) {
  u8 VAR_17;

  VAR_8->isdbt_partial_reception = VAR_14[0] & 0x01;
  VAR_8->isdbt_sb_mode = (VAR_14[0] & 0xc0) == 0x40;


  VAR_17 = (VAR_14[2] & 0x78) >> 3;
  if (VAR_17 == 0x0f)
   VAR_8->layer[0].segment_count = 0;
  else {
   VAR_13++;
   VAR_8->layer[0].segment_count = VAR_17;
   VAR_8->layer[0].fec = VAR_4[(VAR_14[1] & 0x1c) >> 2];
   VAR_8->layer[0].modulation = VAR_5[(VAR_14[1] & 0xe0) >> 5];
   VAR_17 = (VAR_14[1] & 0x03) << 1 | (VAR_14[2] & 0x80) >> 7;
   VAR_8->layer[0].interleaving = VAR_17;
  }


  VAR_17 = (VAR_14[3] & 0x03) << 2 | (VAR_14[4] & 0xc0) >> 6;
  if (VAR_17 == 0x0f)
   VAR_8->layer[1].segment_count = 0;
  else {
   VAR_13++;
   VAR_8->layer[1].segment_count = VAR_17;
   VAR_8->layer[1].fec = VAR_4[(VAR_14[3] & 0xe0) >> 5];
   VAR_8->layer[1].modulation = VAR_5[(VAR_14[2] & 0x07)];
   VAR_8->layer[1].interleaving = (VAR_14[3] & 0x1c) >> 2;
  }


  VAR_17 = (VAR_14[5] & 0x1e) >> 1;
  if (VAR_17 == 0x0f)
   VAR_8->layer[2].segment_count = 0;
  else {
   VAR_13++;
   VAR_8->layer[2].segment_count = VAR_17;
   VAR_8->layer[2].fec = VAR_4[(VAR_14[4] & 0x07)];
   VAR_8->layer[2].modulation = VAR_5[(VAR_14[4] & 0x38) >> 3];
   VAR_8->layer[2].interleaving = (VAR_14[5] & 0xe0) >> 5;
  }
 }



 VAR_10 = &VAR_8->strength;
 VAR_10->len = 0;

 if (VAR_7->ops.tuner_ops.get_rf_strength) {
  u16 VAR_18;

  VAR_7->ops.tuner_ops.get_rf_strength(VAR_7, &VAR_18);
 }

 VAR_10 = &VAR_8->cnr;
 VAR_10->len = 1;
 VAR_10->stat[0].scale = VAR_2;
 VAR_16 = 0;
 VAR_11 = FUNC_3(VAR_9, 0x8b, VAR_14, 3);
 if (VAR_11 == 0)
  VAR_16 = VAR_14[0] << 16 | VAR_14[1] << 8 | VAR_14[2];
 if (VAR_16 != 0) {
  u32 VAR_19, VAR_20;
  s64 VAR_21;







  VAR_19 = FUNC_1(5505024) - FUNC_1(VAR_16);
  VAR_19 *= 10;

  VAR_21 = 24772;
  VAR_21 += FUNC_0(43827LL * VAR_19, 10) >> 24;
  VAR_20 = VAR_19 >> 8;
  VAR_21 += FUNC_0(3184LL * VAR_20 * VAR_20, 10) >> 32;
  VAR_20 = VAR_19 >> 13;
  VAR_21 -= FUNC_0(128LL * VAR_20 * VAR_20 * VAR_20, 10) >> 33;
  VAR_20 = VAR_19 >> 18;
  VAR_21 += FUNC_0(192LL * VAR_20 * VAR_20 * VAR_20 * VAR_20, 1000) >> 24;

  VAR_10->stat[0].svalue = VAR_21 >> 3;
  VAR_10->stat[0].scale = VAR_1;
 }


 VAR_10 = &VAR_8->post_bit_error;
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->len = VAR_13;
 VAR_11 = FUNC_3(VAR_9, 0x9d, VAR_14, 15);
 if (VAR_11 < 0)
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_10->stat[VAR_12].scale = VAR_2;
 else {
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   VAR_10->stat[VAR_12].scale = VAR_0;
   VAR_10->stat[VAR_12].uvalue = VAR_14[VAR_12 * 3] << 16
    | VAR_14[VAR_12 * 3 + 1] << 8 | VAR_14[VAR_12 * 3 + 2];
  }
 }
 VAR_10 = &VAR_8->post_bit_count;
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->len = VAR_13;
 if (VAR_11 < 0)
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_10->stat[VAR_12].scale = VAR_2;
 else {
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   VAR_10->stat[VAR_12].scale = VAR_0;
   VAR_10->stat[VAR_12].uvalue =
    VAR_14[9 + VAR_12 * 2] << 8 | VAR_14[9 + VAR_12 * 2 + 1];
   VAR_10->stat[VAR_12].uvalue *= 204 * 8;
  }
 }

 return 0;
}
