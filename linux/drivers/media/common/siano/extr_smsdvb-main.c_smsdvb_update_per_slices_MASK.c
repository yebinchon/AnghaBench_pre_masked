
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


typedef unsigned long long u64 ;
struct TYPE_15__ {TYPE_11__* stat; } ;
struct TYPE_13__ {TYPE_9__* stat; } ;
struct TYPE_23__ {TYPE_7__* stat; } ;
struct TYPE_21__ {TYPE_5__* stat; } ;
struct TYPE_19__ {TYPE_3__* stat; } ;
struct TYPE_17__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ post_bit_count; TYPE_10__ post_bit_error; TYPE_8__ block_count; TYPE_6__ block_error; TYPE_4__ cnr; TYPE_2__ strength; int modulation; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {unsigned long long legacy_per; int last_per; int fe_status; struct dvb_frontend frontend; } ;
struct RECEPTION_STATISTICS_PER_SLICES_S {int in_band_power; int snr; unsigned long long ets_packets; unsigned long long ts_packets; scalar_t__ ber_bit_count; scalar_t__ ber_error_count; int is_demod_locked; int constellation; int is_rf_locked; } ;
struct TYPE_24__ {int uvalue; void* scale; } ;
struct TYPE_22__ {int uvalue; void* scale; } ;
struct TYPE_20__ {int uvalue; void* scale; } ;
struct TYPE_18__ {int svalue; } ;
struct TYPE_16__ {int uvalue; } ;
struct TYPE_14__ {int uvalue; void* scale; } ;


 void* VAR_0 ;
 int FUNC_0 (unsigned long long,unsigned long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct smsdvb_client_t *VAR_1,
         struct RECEPTION_STATISTICS_PER_SLICES_S *VAR_2)
{
 struct dvb_frontend *VAR_3 = &VAR_1->frontend;
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 u64 VAR_5;

 VAR_1->fe_status = FUNC_2(VAR_2->is_demod_locked, VAR_2->is_rf_locked);
 VAR_4->modulation = FUNC_1(VAR_2->constellation);


 VAR_4->strength.stat[0].uvalue = VAR_2->in_band_power * 1000;


 VAR_4->cnr.stat[0].svalue = VAR_2->snr * 1000;


 if (!VAR_2->is_demod_locked)
  return;


 VAR_1->last_per = VAR_4->block_error.stat[0].uvalue;
 VAR_4->block_error.stat[0].scale = VAR_0;
 VAR_4->block_count.stat[0].scale = VAR_0;
 VAR_4->block_error.stat[0].uvalue += VAR_2->ets_packets;
 VAR_4->block_count.stat[0].uvalue += VAR_2->ets_packets + VAR_2->ts_packets;


 VAR_4->post_bit_error.stat[0].scale = VAR_0;
 VAR_4->post_bit_count.stat[0].scale = VAR_0;
 VAR_4->post_bit_error.stat[0].uvalue += VAR_2->ber_error_count;
 VAR_4->post_bit_count.stat[0].uvalue += VAR_2->ber_bit_count;


 VAR_5 = VAR_2->ets_packets * 65535ULL;
 if (VAR_2->ts_packets + VAR_2->ets_packets)
  FUNC_0(VAR_5, VAR_2->ts_packets + VAR_2->ets_packets);
 VAR_1->legacy_per = VAR_5;
}
