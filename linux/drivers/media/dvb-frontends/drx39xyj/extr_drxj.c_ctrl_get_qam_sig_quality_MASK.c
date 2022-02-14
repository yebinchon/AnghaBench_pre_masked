
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2c_device_addr {struct drx39xxj_state* user_data; } ;
struct TYPE_19__ {TYPE_11__* stat; } ;
struct TYPE_17__ {TYPE_9__* stat; } ;
struct TYPE_31__ {TYPE_7__* stat; } ;
struct TYPE_29__ {TYPE_5__* stat; } ;
struct TYPE_27__ {TYPE_3__* stat; } ;
struct TYPE_25__ {TYPE_1__* stat; } ;
struct TYPE_22__ {TYPE_14__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ cnr; TYPE_10__ block_error; TYPE_8__ post_bit_error; TYPE_6__ pre_bit_error; TYPE_4__ post_bit_count; TYPE_2__ pre_bit_count; TYPE_15__ block_count; } ;
struct drxjrs_errors {scalar_t__ nr_snc_par_fail_count; scalar_t__ nr_bit_errors; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct drxj_data {int constellation; scalar_t__ fec_rs_period; scalar_t__ fec_rs_prescale; scalar_t__ fec_rs_plen; scalar_t__ qam_vd_period; scalar_t__ qam_vd_prescale; scalar_t__ fec_vd_plen; scalar_t__ standard; } ;
struct drx_demod_instance {struct drxj_data* my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct TYPE_20__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct drx39xxj_state {TYPE_13__ frontend; } ;
typedef enum drx_modulation { ____Placeholder_drx_modulation } drx_modulation ;
struct TYPE_32__ {void* scale; int uvalue; } ;
struct TYPE_30__ {int uvalue; void* scale; } ;
struct TYPE_28__ {int uvalue; void* scale; } ;
struct TYPE_26__ {int uvalue; void* scale; } ;
struct TYPE_24__ {int uvalue; void* scale; } ;
struct TYPE_23__ {int packet_error; } ;
struct TYPE_21__ {void* scale; } ;
struct TYPE_18__ {void* scale; scalar_t__ svalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct i2c_device_addr*,int ,scalar_t__*,int ) ;
 int FUNC_1 (struct drx_demod_instance*,int *) ;
 int FUNC_2 (struct i2c_device_addr*,struct drxjrs_errors*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 TYPE_16__* VAR_21 ;

__attribute__((used)) static int
FUNC_5(struct drx_demod_instance *VAR_22)
{
 struct i2c_device_addr *VAR_23 = VAR_22->my_i2c_dev_addr;
 struct drxj_data *VAR_24 = VAR_22->my_ext_attr;
 struct drx39xxj_state *VAR_25 = VAR_23->user_data;
 struct dtv_frontend_properties *VAR_26 = &VAR_25->frontend.dtv_property_cache;
 struct drxjrs_errors VAR_27 = { 0, 0, 0, 0, 0 };
 enum drx_modulation VAR_28 = VAR_24->constellation;
 int VAR_29;

 u32 VAR_30 = 0;
 u32 VAR_31 = 0;
 u32 VAR_32 = 0;
 u16 VAR_33 = 0;
 u16 VAR_34 = 0;
 u16 VAR_35 = 0;
 u16 VAR_36 = 0;
 u16 VAR_37 = 0;

 u32 VAR_38 = 0;
 u32 VAR_39 = 0;

 u32 VAR_40 = 0;
 u32 VAR_41 = 0;
 u32 VAR_42 = 0;

 u32 VAR_43 = 0;
 u32 VAR_44 = 0;
 u32 VAR_45 = 0;
 u32 VAR_46 = 0;
 u16 VAR_47 = 0;
 u16 VAR_48 = 0;
 u32 VAR_49 = 0;

 VAR_26->block_count.stat[0].scale = VAR_14;



 VAR_29 = FUNC_2(VAR_23, &VAR_27);
 if (VAR_29 != 0) {
  FUNC_4("error %d\n", VAR_29);
  goto rw_error;
 }

 VAR_29 = FUNC_0(VAR_23, VAR_15, &VAR_33, 0);
 if (VAR_29 != 0) {
  FUNC_4("error %d\n", VAR_29);
  goto rw_error;
 }

 VAR_29 = FUNC_0(VAR_23, VAR_7, &VAR_35, 0);
 if (VAR_29 != 0) {
  FUNC_4("error %d\n", VAR_29);
  goto rw_error;
 }


 VAR_37 = VAR_24->fec_rs_period;
 VAR_36 = VAR_24->fec_rs_prescale;
 VAR_38 = VAR_37 * VAR_36 * VAR_24->fec_rs_plen;
 VAR_48 = VAR_24->qam_vd_period;
 VAR_47 = VAR_24->qam_vd_prescale;
 VAR_49 = VAR_48 * VAR_47 * VAR_24->fec_vd_plen;


 switch (VAR_28) {
 case 131:
  VAR_39 = VAR_1 << 2;
  break;
 case 129:
  VAR_39 = VAR_3 << 2;
  break;
 case 128:
  VAR_39 = VAR_4 << 2;
  break;
 case 132:
  VAR_39 = VAR_0 << 2;
  break;
 case 130:
  VAR_39 = VAR_2 << 2;
  break;
 default:
  return -VAR_6;
 }







 if (VAR_33 == 0)
  VAR_43 = 0;
 else
  VAR_43 = FUNC_3(VAR_39) - FUNC_3((u32)VAR_33);
 VAR_29 = FUNC_0(VAR_23, VAR_18, &VAR_34, 0);
 if (VAR_29 != 0) {
  FUNC_4("error %d\n", VAR_29);
  goto rw_error;
 }


 VAR_40 = (VAR_34 & VAR_17) >>
     VAR_16;
 VAR_41 = (VAR_34 & VAR_20) >>
     VAR_19;

 if ((VAR_41 << VAR_40) >> 3 > 549752)
  VAR_46 = 500000 * VAR_49 * ((VAR_40 > 2) ? 1 : 8) / 8;
 else
  VAR_46 = VAR_41 << ((VAR_40 > 2) ? (VAR_40 - 3) : VAR_40);







 VAR_30 = (u32) VAR_27.nr_bit_errors;
 VAR_32 = VAR_31 = (u32) VAR_27.nr_snc_par_fail_count;



 VAR_40 = (VAR_30 & VAR_9) >>
     VAR_8;
 VAR_41 = (VAR_30 & VAR_11) >>
     VAR_10;

 VAR_42 = VAR_41 << VAR_40;


 if (VAR_41 > (VAR_38 >> (VAR_40 + 1)) || (VAR_38 >> VAR_40) == 0)
  VAR_44 = 500000 * VAR_38 >> VAR_40;
 else
  VAR_44 = VAR_42;
 if (!VAR_35) {
  VAR_45 = 0xFFFFFFFF;
 } else {
  VAR_40 = VAR_31 * 742686;
  VAR_41 = VAR_35 * 100;
  VAR_45 = VAR_40 / VAR_41;
 }


 VAR_26->pre_bit_count.stat[0].scale = VAR_12;
 VAR_26->post_bit_count.stat[0].scale = VAR_12;
 VAR_26->pre_bit_error.stat[0].scale = VAR_12;
 VAR_26->post_bit_error.stat[0].scale = VAR_12;
 VAR_26->block_error.stat[0].scale = VAR_12;
 VAR_26->cnr.stat[0].scale = VAR_13;

 VAR_26->cnr.stat[0].svalue = ((u16) VAR_43) * 100;
 if (VAR_24->standard == VAR_5) {
  VAR_26->pre_bit_error.stat[0].uvalue += VAR_46;
  VAR_26->pre_bit_count.stat[0].uvalue += VAR_49 * ((VAR_40 > 2) ? 1 : 8) / 8;
 } else {
  VAR_26->pre_bit_error.stat[0].uvalue += VAR_44;
  VAR_26->pre_bit_count.stat[0].uvalue += VAR_38 >> VAR_40;
 }

 VAR_26->post_bit_error.stat[0].uvalue += VAR_45;
 VAR_26->post_bit_count.stat[0].uvalue += VAR_38 >> VAR_40;

 VAR_26->block_error.stat[0].uvalue += VAR_32;
 return 0;
rw_error:
 VAR_26->pre_bit_count.stat[0].scale = VAR_14;
 VAR_26->post_bit_count.stat[0].scale = VAR_14;
 VAR_26->pre_bit_error.stat[0].scale = VAR_14;
 VAR_26->post_bit_error.stat[0].scale = VAR_14;
 VAR_26->block_error.stat[0].scale = VAR_14;
 VAR_26->cnr.stat[0].scale = VAR_14;

 return VAR_29;
}
