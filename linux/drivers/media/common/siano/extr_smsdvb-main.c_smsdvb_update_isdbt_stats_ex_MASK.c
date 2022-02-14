
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


struct TYPE_15__ {int len; TYPE_9__* stat; } ;
struct TYPE_14__ {int len; TYPE_8__* stat; } ;
struct TYPE_17__ {int len; TYPE_7__* stat; } ;
struct TYPE_16__ {int len; TYPE_6__* stat; } ;
struct TYPE_22__ {TYPE_4__* stat; } ;
struct TYPE_20__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {int isdbt_partial_reception; int isdbt_layer_enabled; int lna; TYPE_11__ post_bit_count; TYPE_10__ post_bit_error; TYPE_13__ block_count; TYPE_12__ block_error; TYPE_1__* layer; TYPE_5__ strength; TYPE_3__ cnr; int guard_interval; int transmission_mode; int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {scalar_t__ last_per; int fe_status; int debug_data; int (* prt_isdb_stats_ex ) (int ,struct sms_isdbt_stats_ex*) ;struct dvb_frontend frontend; } ;
struct sms_isdbt_stats_ex {int num_of_layers; int SNR; int in_band_pwr; struct sms_isdbt_layer_stats* layer_info; int is_demod_locked; scalar_t__ is_external_lna_on; scalar_t__ partial_reception; int guard_interval; int transmission_mode; int bandwidth; int frequency; } ;
struct sms_isdbt_layer_stats {int number_of_segments; scalar_t__ ber_bit_count; scalar_t__ ber_error_count; scalar_t__ total_ts_packets; scalar_t__ error_ts_packets; int constellation; } ;
struct TYPE_26__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_25__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_24__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_23__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_21__ {int uvalue; } ;
struct TYPE_19__ {int svalue; } ;
struct TYPE_18__ {int segment_count; int modulation; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sms_isdbt_stats_ex*) ;

__attribute__((used)) static void FUNC_6(struct smsdvb_client_t *VAR_1,
      struct sms_isdbt_stats_ex *VAR_2)
{
 struct dvb_frontend *VAR_3 = &VAR_1->frontend;
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct sms_isdbt_layer_stats *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_1->prt_isdb_stats_ex)
  VAR_1->prt_isdb_stats_ex(VAR_1->debug_data, VAR_2);


 VAR_4->frequency = VAR_2->frequency;
 VAR_1->fe_status = FUNC_4(VAR_2->is_demod_locked, 0);
 VAR_4->bandwidth_hz = FUNC_0(VAR_2->bandwidth);
 VAR_4->transmission_mode = FUNC_2(VAR_2->transmission_mode);
 VAR_4->guard_interval = FUNC_1(VAR_2->guard_interval);
 VAR_4->isdbt_partial_reception = VAR_2->partial_reception ? 1 : 0;
 VAR_7 = VAR_2->num_of_layers;
 if (VAR_7 < 1)
  VAR_7 = 1;
 if (VAR_7 > 3)
  VAR_7 = 3;
 VAR_4->isdbt_layer_enabled = 0;


 VAR_4->lna = VAR_2->is_external_lna_on ? 1 : 0;


 VAR_4->cnr.stat[0].svalue = VAR_2->SNR * 1000;


 VAR_4->strength.stat[0].uvalue = VAR_2->in_band_pwr * 1000;


 if (!VAR_2->is_demod_locked)
  return;

 VAR_1->last_per = VAR_4->block_error.stat[0].uvalue;


 VAR_4->block_error.stat[0].uvalue = 0;
 VAR_4->block_count.stat[0].uvalue = 0;
 VAR_4->block_error.stat[0].scale = VAR_0;
 VAR_4->block_count.stat[0].scale = VAR_0;
 VAR_4->post_bit_error.stat[0].uvalue = 0;
 VAR_4->post_bit_count.stat[0].uvalue = 0;
 VAR_4->post_bit_error.stat[0].scale = VAR_0;
 VAR_4->post_bit_count.stat[0].scale = VAR_0;

 VAR_4->post_bit_error.len = VAR_7 + 1;
 VAR_4->post_bit_count.len = VAR_7 + 1;
 VAR_4->block_error.len = VAR_7 + 1;
 VAR_4->block_count.len = VAR_7 + 1;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = &VAR_2->layer_info[VAR_6];


  if (VAR_5->number_of_segments > 0 && VAR_5->number_of_segments < 13) {
   VAR_4->isdbt_layer_enabled |= 1 << VAR_6;
   VAR_4->layer[VAR_6].segment_count = VAR_5->number_of_segments;
  } else {
   continue;
  }
  VAR_4->layer[VAR_6].modulation = FUNC_3(VAR_5->constellation);


  VAR_4->block_error.stat[VAR_6 + 1].scale = VAR_0;
  VAR_4->block_count.stat[VAR_6 + 1].scale = VAR_0;
  VAR_4->block_error.stat[VAR_6 + 1].uvalue += VAR_5->error_ts_packets;
  VAR_4->block_count.stat[VAR_6 + 1].uvalue += VAR_5->total_ts_packets;


  VAR_4->block_error.stat[0].uvalue += VAR_5->error_ts_packets;
  VAR_4->block_count.stat[0].uvalue += VAR_5->total_ts_packets;


  VAR_4->post_bit_error.stat[VAR_6 + 1].scale = VAR_0;
  VAR_4->post_bit_count.stat[VAR_6 + 1].scale = VAR_0;
  VAR_4->post_bit_error.stat[VAR_6 + 1].uvalue += VAR_5->ber_error_count;
  VAR_4->post_bit_count.stat[VAR_6 + 1].uvalue += VAR_5->ber_bit_count;


  VAR_4->post_bit_error.stat[0].uvalue += VAR_5->ber_error_count;
  VAR_4->post_bit_count.stat[0].uvalue += VAR_5->ber_bit_count;
 }
}
