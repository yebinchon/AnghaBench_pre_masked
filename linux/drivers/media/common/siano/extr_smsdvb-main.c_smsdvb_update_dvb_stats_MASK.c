
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {TYPE_11__* stat; } ;
struct TYPE_13__ {TYPE_9__* stat; } ;
struct TYPE_23__ {TYPE_7__* stat; } ;
struct TYPE_21__ {TYPE_5__* stat; } ;
struct TYPE_19__ {TYPE_3__* stat; } ;
struct TYPE_17__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {int lna; TYPE_12__ post_bit_count; TYPE_10__ post_bit_error; TYPE_8__ block_count; TYPE_6__ block_error; TYPE_4__ strength; TYPE_2__ cnr; int modulation; int hierarchy; void* code_rate_LP; void* code_rate_HP; int guard_interval; int transmission_mode; int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {int legacy_ber; int last_per; void* fe_status; int debug_data; int (* prt_dvb_stats ) (int ,struct sms_stats*) ;struct dvb_frontend frontend; } ;
struct sms_stats {int SNR; int in_band_pwr; int ber; scalar_t__ ber_bit_count; scalar_t__ ber_error_count; scalar_t__ total_ts_packets; scalar_t__ error_ts_packets; int is_demod_locked; scalar_t__ is_external_lna_on; int constellation; int hierarchy; int lp_code_rate; int code_rate; int guard_interval; int transmission_mode; int bandwidth; int frequency; int is_rf_locked; } ;
struct TYPE_24__ {int uvalue; void* scale; } ;
struct TYPE_22__ {int uvalue; void* scale; } ;
struct TYPE_20__ {int uvalue; void* scale; } ;
struct TYPE_18__ {int uvalue; } ;
struct TYPE_16__ {int svalue; } ;
struct TYPE_14__ {int uvalue; void* scale; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct sms_stats*) ;

__attribute__((used)) static void FUNC_8(struct smsdvb_client_t *VAR_1,
        struct sms_stats *VAR_2)
{
 struct dvb_frontend *VAR_3 = &VAR_1->frontend;
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;

 if (VAR_1->prt_dvb_stats)
  VAR_1->prt_dvb_stats(VAR_1->debug_data, VAR_2);

 VAR_1->fe_status = FUNC_6(VAR_2->is_demod_locked, VAR_2->is_rf_locked);


 VAR_4->frequency = VAR_2->frequency;
 VAR_1->fe_status = FUNC_6(VAR_2->is_demod_locked, 0);
 VAR_4->bandwidth_hz = FUNC_0(VAR_2->bandwidth);
 VAR_4->transmission_mode = FUNC_4(VAR_2->transmission_mode);
 VAR_4->guard_interval = FUNC_2(VAR_2->guard_interval);
 VAR_4->code_rate_HP = FUNC_1(VAR_2->code_rate);
 VAR_4->code_rate_LP = FUNC_1(VAR_2->lp_code_rate);
 VAR_4->hierarchy = FUNC_3(VAR_2->hierarchy);
 VAR_4->modulation = FUNC_5(VAR_2->constellation);


 VAR_4->lna = VAR_2->is_external_lna_on ? 1 : 0;


 VAR_4->cnr.stat[0].svalue = VAR_2->SNR * 1000;


 VAR_4->strength.stat[0].uvalue = VAR_2->in_band_pwr * 1000;


 if (!VAR_2->is_demod_locked)
  return;


 VAR_1->last_per = VAR_4->block_error.stat[0].uvalue;
 VAR_4->block_error.stat[0].scale = VAR_0;
 VAR_4->block_count.stat[0].scale = VAR_0;
 VAR_4->block_error.stat[0].uvalue += VAR_2->error_ts_packets;
 VAR_4->block_count.stat[0].uvalue += VAR_2->total_ts_packets;


 VAR_4->post_bit_error.stat[0].scale = VAR_0;
 VAR_4->post_bit_count.stat[0].scale = VAR_0;
 VAR_4->post_bit_error.stat[0].uvalue += VAR_2->ber_error_count;
 VAR_4->post_bit_count.stat[0].uvalue += VAR_2->ber_bit_count;


 VAR_1->legacy_ber = VAR_2->ber;
}
