
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u16 ;
struct TYPE_19__ {int len; TYPE_11__* stat; } ;
struct TYPE_17__ {int len; TYPE_9__* stat; } ;
struct TYPE_30__ {int len; TYPE_7__* stat; } ;
struct TYPE_28__ {int len; TYPE_5__* stat; } ;
struct TYPE_26__ {int len; TYPE_3__* stat; } ;
struct TYPE_24__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {int bandwidth_hz; scalar_t__ delivery_system; int frequency; scalar_t__ stream_id; TYPE_12__ block_count; TYPE_10__ block_error; TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ pre_bit_count; TYPE_2__ pre_bit_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2880_priv* demodulator_priv; } ;
struct TYPE_22__ {int center_freq_khz; int bandwidth; int profile; scalar_t__ data_plp_id; } ;
struct TYPE_20__ {int sys; } ;
struct TYPE_21__ {int center_freq_khz; int bandwidth; int profile; } ;
struct cxd2880_priv {int spi_mutex; TYPE_16__ dvbt2_tune_param; TYPE_13__ tnrdmd; TYPE_14__ dvbt_tune_param; scalar_t__ s; } ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_31__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_29__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_27__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_25__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_23__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_18__ {scalar_t__ uvalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_13__*,TYPE_16__*) ;
 int FUNC_1 (TYPE_13__*,TYPE_14__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_13)
{
 int VAR_14;
 struct dtv_frontend_properties *VAR_15;
 struct cxd2880_priv *VAR_16;
 enum cxd2880_dtv_bandwidth VAR_17 = VAR_0;

 if (!VAR_13) {
  FUNC_4("invalid arg\n");
  return -VAR_9;
 }

 VAR_16 = VAR_13->demodulator_priv;
 VAR_15 = &VAR_13->dtv_property_cache;

 VAR_15->pre_bit_error.stat[0].scale = VAR_10;
 VAR_15->pre_bit_error.stat[0].uvalue = 0;
 VAR_15->pre_bit_error.len = 1;
 VAR_15->pre_bit_count.stat[0].scale = VAR_10;
 VAR_15->pre_bit_count.stat[0].uvalue = 0;
 VAR_15->pre_bit_count.len = 1;
 VAR_15->post_bit_error.stat[0].scale = VAR_10;
 VAR_15->post_bit_error.stat[0].uvalue = 0;
 VAR_15->post_bit_error.len = 1;
 VAR_15->post_bit_count.stat[0].scale = VAR_10;
 VAR_15->post_bit_count.stat[0].uvalue = 0;
 VAR_15->post_bit_count.len = 1;
 VAR_15->block_error.stat[0].scale = VAR_10;
 VAR_15->block_error.stat[0].uvalue = 0;
 VAR_15->block_error.len = 1;
 VAR_15->block_count.stat[0].scale = VAR_10;
 VAR_15->block_count.stat[0].uvalue = 0;
 VAR_15->block_count.len = 1;

 switch (VAR_15->bandwidth_hz) {
 case 1712000:
  VAR_17 = VAR_0;
  break;
 case 5000000:
  VAR_17 = VAR_1;
  break;
 case 6000000:
  VAR_17 = VAR_2;
  break;
 case 7000000:
  VAR_17 = VAR_3;
  break;
 case 8000000:
  VAR_17 = VAR_4;
  break;
 default:
  return -VAR_9;
 }

 VAR_16->s = 0;

 FUNC_5("sys:%d freq:%d bw:%d\n",
  VAR_15->delivery_system, VAR_15->frequency, VAR_17);
 FUNC_2(VAR_16->spi_mutex);
 if (VAR_15->delivery_system == VAR_11) {
  VAR_16->tnrdmd.sys = VAR_5;
  VAR_16->dvbt_tune_param.center_freq_khz = VAR_15->frequency / 1000;
  VAR_16->dvbt_tune_param.bandwidth = VAR_17;
  VAR_16->dvbt_tune_param.profile = VAR_8;
  VAR_14 = FUNC_1(&VAR_16->tnrdmd,
     &VAR_16->dvbt_tune_param);
 } else if (VAR_15->delivery_system == VAR_12) {
  VAR_16->tnrdmd.sys = VAR_6;
  VAR_16->dvbt2_tune_param.center_freq_khz = VAR_15->frequency / 1000;
  VAR_16->dvbt2_tune_param.bandwidth = VAR_17;
  VAR_16->dvbt2_tune_param.data_plp_id = (u16)VAR_15->stream_id;
  VAR_16->dvbt2_tune_param.profile = VAR_7;
  VAR_14 = FUNC_0(&VAR_16->tnrdmd,
      &VAR_16->dvbt2_tune_param);
 } else {
  FUNC_4("invalid system\n");
  FUNC_3(VAR_16->spi_mutex);
  return -VAR_9;
 }
 FUNC_3(VAR_16->spi_mutex);

 FUNC_5("tune result %d\n", VAR_14);

 return VAR_14;
}
