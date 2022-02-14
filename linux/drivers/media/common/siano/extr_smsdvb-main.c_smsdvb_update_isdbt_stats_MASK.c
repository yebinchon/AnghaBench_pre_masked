
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {TYPE_12__* stat; } ;
struct TYPE_15__ {TYPE_10__* stat; } ;
struct TYPE_26__ {TYPE_8__* stat; } ;
struct TYPE_24__ {TYPE_6__* stat; } ;
struct TYPE_22__ {TYPE_4__* stat; } ;
struct TYPE_20__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {int isdbt_partial_reception; int isdbt_layer_enabled; int lna; TYPE_13__ post_bit_count; TYPE_11__ post_bit_error; TYPE_9__ block_count; TYPE_7__ block_error; TYPE_1__* layer; TYPE_5__ strength; TYPE_3__ cnr; int guard_interval; int transmission_mode; int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {scalar_t__ last_per; int fe_status; int debug_data; int (* prt_isdb_stats ) (int ,struct sms_isdbt_stats*) ;struct dvb_frontend frontend; } ;
struct sms_isdbt_stats {scalar_t__ statistics_type; int num_of_layers; int SNR; int in_band_pwr; struct sms_isdbt_layer_stats* layer_info; int is_demod_locked; scalar_t__ is_external_lna_on; scalar_t__ partial_reception; int guard_interval; scalar_t__ transmission_mode; int bandwidth; int frequency; int is_rf_locked; } ;
struct sms_isdbt_layer_stats {int number_of_segments; scalar_t__ ber_bit_count; scalar_t__ ber_error_count; scalar_t__ total_ts_packets; scalar_t__ error_ts_packets; int constellation; } ;
typedef int s32 ;
struct TYPE_25__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_23__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_21__ {int uvalue; } ;
struct TYPE_19__ {int svalue; int scale; } ;
struct TYPE_18__ {int segment_count; int modulation; } ;
struct TYPE_16__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_14__ {scalar_t__ uvalue; void* scale; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sms_isdbt_stats*) ;

__attribute__((used)) static void FUNC_6(struct smsdvb_client_t *VAR_2,
          struct sms_isdbt_stats *VAR_3)
{
 struct dvb_frontend *VAR_4 = &VAR_2->frontend;
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct sms_isdbt_layer_stats *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2->prt_isdb_stats)
  VAR_2->prt_isdb_stats(VAR_2->debug_data, VAR_3);

 VAR_2->fe_status = FUNC_4(VAR_3->is_demod_locked, VAR_3->is_rf_locked);






 if (VAR_3->statistics_type == 0) {
  VAR_5->strength.stat[0].uvalue = ((s32)VAR_3->transmission_mode) * 1000;
  VAR_5->cnr.stat[0].scale = VAR_1;
  return;
 }


 VAR_5->frequency = VAR_3->frequency;
 VAR_5->bandwidth_hz = FUNC_0(VAR_3->bandwidth);
 VAR_5->transmission_mode = FUNC_2(VAR_3->transmission_mode);
 VAR_5->guard_interval = FUNC_1(VAR_3->guard_interval);
 VAR_5->isdbt_partial_reception = VAR_3->partial_reception ? 1 : 0;
 VAR_8 = VAR_3->num_of_layers;
 if (VAR_8 < 1)
  VAR_8 = 1;
 if (VAR_8 > 3)
  VAR_8 = 3;
 VAR_5->isdbt_layer_enabled = 0;


 VAR_5->lna = VAR_3->is_external_lna_on ? 1 : 0;


 VAR_5->cnr.stat[0].svalue = VAR_3->SNR * 1000;


 VAR_5->strength.stat[0].uvalue = VAR_3->in_band_pwr * 1000;


 if (!VAR_3->is_demod_locked)
  return;

 VAR_2->last_per = VAR_5->block_error.stat[0].uvalue;


 VAR_5->block_error.stat[0].uvalue = 0;
 VAR_5->block_count.stat[0].uvalue = 0;
 VAR_5->block_error.stat[0].scale = VAR_0;
 VAR_5->block_count.stat[0].scale = VAR_0;
 VAR_5->post_bit_error.stat[0].uvalue = 0;
 VAR_5->post_bit_count.stat[0].uvalue = 0;
 VAR_5->post_bit_error.stat[0].scale = VAR_0;
 VAR_5->post_bit_count.stat[0].scale = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = &VAR_3->layer_info[VAR_7];


  if (VAR_6->number_of_segments > 0 && VAR_6->number_of_segments < 13) {
   VAR_5->isdbt_layer_enabled |= 1 << VAR_7;
   VAR_5->layer[VAR_7].segment_count = VAR_6->number_of_segments;
  } else {
   continue;
  }
  VAR_5->layer[VAR_7].modulation = FUNC_3(VAR_6->constellation);


  VAR_5->block_error.stat[VAR_7 + 1].scale = VAR_0;
  VAR_5->block_count.stat[VAR_7 + 1].scale = VAR_0;
  VAR_5->block_error.stat[VAR_7 + 1].uvalue += VAR_6->error_ts_packets;
  VAR_5->block_count.stat[VAR_7 + 1].uvalue += VAR_6->total_ts_packets;


  VAR_5->block_error.stat[0].uvalue += VAR_6->error_ts_packets;
  VAR_5->block_count.stat[0].uvalue += VAR_6->total_ts_packets;


  VAR_5->post_bit_error.stat[VAR_7 + 1].scale = VAR_0;
  VAR_5->post_bit_count.stat[VAR_7 + 1].scale = VAR_0;
  VAR_5->post_bit_error.stat[VAR_7 + 1].uvalue += VAR_6->ber_error_count;
  VAR_5->post_bit_count.stat[VAR_7 + 1].uvalue += VAR_6->ber_bit_count;


  VAR_5->post_bit_error.stat[0].uvalue += VAR_6->ber_error_count;
  VAR_5->post_bit_count.stat[0].uvalue += VAR_6->ber_bit_count;
 }
}
