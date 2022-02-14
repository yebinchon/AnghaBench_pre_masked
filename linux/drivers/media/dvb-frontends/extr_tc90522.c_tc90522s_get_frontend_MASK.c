
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
struct TYPE_6__ {int (* get_rf_strength ) (struct dvb_frontend*,int *) ;} ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct tc90522_state* demodulator_priv; } ;
struct dtv_fe_stats {int len; TYPE_4__* stat; } ;
struct dtv_frontend_properties {int symbol_rate; int stream_id; struct dtv_fe_stats post_bit_count; struct dtv_fe_stats post_bit_error; struct dtv_fe_stats cnr; struct dtv_fe_stats strength; TYPE_1__* layer; void* modulation; void* fec_inner; int delivery_system; } ;
typedef long long s64 ;
struct TYPE_8__ {long long svalue; int uvalue; void* scale; } ;
struct TYPE_5__ {int segment_count; void* modulation; void* fec; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (long long,int) ;
 void** VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dtv_fe_stats*,int ,int) ;
 int FUNC_3 (struct tc90522_state*,int,int*,int) ;
 int FUNC_4 (struct dvb_frontend*,int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_7,
     struct dtv_frontend_properties *VAR_8)
{
 struct tc90522_state *VAR_9;
 struct dtv_fe_stats *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14[10];
 u32 VAR_15;

 VAR_9 = VAR_7->demodulator_priv;
 VAR_8->delivery_system = VAR_5;
 VAR_8->symbol_rate = 28860000;

 VAR_13 = 0;
 VAR_11 = FUNC_3(VAR_9, 0xe6, VAR_14, 5);
 if (VAR_11 == 0) {
  u8 VAR_16;

  VAR_8->stream_id = VAR_14[0] << 8 | VAR_14[1];


  VAR_16 = (VAR_14[2] & 0x70) >> 4;
  VAR_8->modulation = (VAR_16 == 7) ? VAR_3 : VAR_4;
  VAR_8->fec_inner = VAR_6[VAR_16];
  VAR_8->layer[0].fec = VAR_8->fec_inner;
  VAR_8->layer[0].modulation = VAR_8->modulation;
  VAR_8->layer[0].segment_count = VAR_14[3] & 0x3f;


  VAR_16 = (VAR_14[2] & 0x07);
  VAR_8->layer[1].fec = VAR_6[VAR_16];
  if (VAR_16 == 0)
   VAR_8->layer[1].segment_count = 0;
  else
   VAR_8->layer[1].segment_count = VAR_14[4] & 0x3f;




  VAR_8->layer[1].modulation = VAR_4;
  VAR_13 = (VAR_16 > 0) ? 2 : 1;
 }



 VAR_10 = &VAR_8->strength;
 VAR_10->len = 0;

 if (VAR_7->ops.tuner_ops.get_rf_strength) {
  u16 VAR_17;

  VAR_7->ops.tuner_ops.get_rf_strength(VAR_7, &VAR_17);
 }

 VAR_10 = &VAR_8->cnr;
 VAR_10->len = 1;
 VAR_10->stat[0].scale = VAR_2;
 VAR_15 = 0;
 VAR_11 = FUNC_3(VAR_9, 0xbc, VAR_14, 2);
 if (VAR_11 == 0)
  VAR_15 = VAR_14[0] << 8 | VAR_14[1];
 if (VAR_15 >= 3000) {
  u32 VAR_18, VAR_19;
  s64 VAR_20;

  VAR_15 -= 3000;







  VAR_18 = FUNC_1(VAR_15 << 16);
  VAR_19 = VAR_15 * VAR_15;
  VAR_20 = FUNC_0(-16346LL * VAR_19 * VAR_18, 10) >> 35;
  VAR_20 += (14341LL * VAR_19) >> 21;
  VAR_20 -= (50259LL * VAR_15 * VAR_18) >> 23;
  VAR_20 += (88977LL * VAR_15) >> 9;
  VAR_20 -= (89565LL * VAR_18) >> 11;
  VAR_20 += 58857 << 3;
  VAR_10->stat[0].svalue = VAR_20 >> 3;
  VAR_10->stat[0].scale = VAR_1;
 }


 VAR_10 = &VAR_8->post_bit_error;
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->len = VAR_13;
 VAR_11 = FUNC_3(VAR_9, 0xeb, VAR_14, 10);
 if (VAR_11 < 0)
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_10->stat[VAR_12].scale = VAR_2;
 else {
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   VAR_10->stat[VAR_12].scale = VAR_0;
   VAR_10->stat[VAR_12].uvalue = VAR_14[VAR_12 * 5] << 16
    | VAR_14[VAR_12 * 5 + 1] << 8 | VAR_14[VAR_12 * 5 + 2];
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
    VAR_14[VAR_12 * 5 + 3] << 8 | VAR_14[VAR_12 * 5 + 4];
   VAR_10->stat[VAR_12].uvalue *= 204 * 8;
  }
 }

 return 0;
}
