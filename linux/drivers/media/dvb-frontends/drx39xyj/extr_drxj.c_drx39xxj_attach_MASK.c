
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


struct TYPE_23__ {int len; TYPE_15__* stat; } ;
struct TYPE_21__ {int len; TYPE_13__* stat; } ;
struct TYPE_19__ {int len; TYPE_11__* stat; } ;
struct TYPE_17__ {int len; TYPE_9__* stat; } ;
struct TYPE_31__ {int len; TYPE_7__* stat; } ;
struct TYPE_29__ {int len; TYPE_5__* stat; } ;
struct TYPE_27__ {int len; TYPE_3__* stat; } ;
struct TYPE_25__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_16__ cnr; TYPE_14__ block_error; TYPE_12__ block_count; TYPE_10__ post_bit_error; TYPE_8__ post_bit_count; TYPE_6__ pre_bit_error; TYPE_4__ pre_bit_count; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_device_addr* demodulator_priv; int ops; } ;
struct i2c_device_addr {int verify_microcode; int intermediate_freq; struct dvb_frontend frontend; struct i2c_adapter* i2c; int uio_sma_tx_mode; struct i2c_device_addr* my_ext_attr; int current_power_mode; struct i2c_device_addr* my_common_attr; int microcode_file; struct i2c_device_addr* user_data; struct i2c_device_addr* my_i2c_dev_addr; struct i2c_device_addr* demod; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct drxj_data {int verify_microcode; int intermediate_freq; struct dvb_frontend frontend; struct i2c_adapter* i2c; int uio_sma_tx_mode; struct drxj_data* my_ext_attr; int current_power_mode; struct drxj_data* my_common_attr; int microcode_file; struct drxj_data* user_data; struct drxj_data* my_i2c_dev_addr; struct drxj_data* demod; } ;
struct drx_demod_instance {int verify_microcode; int intermediate_freq; struct dvb_frontend frontend; struct i2c_adapter* i2c; int uio_sma_tx_mode; struct drx_demod_instance* my_ext_attr; int current_power_mode; struct drx_demod_instance* my_common_attr; int microcode_file; struct drx_demod_instance* user_data; struct drx_demod_instance* my_i2c_dev_addr; struct drx_demod_instance* demod; } ;
struct drx_common_attr {int verify_microcode; int intermediate_freq; struct dvb_frontend frontend; struct i2c_adapter* i2c; int uio_sma_tx_mode; struct drx_common_attr* my_ext_attr; int current_power_mode; struct drx_common_attr* my_common_attr; int microcode_file; struct drx_common_attr* user_data; struct drx_common_attr* my_i2c_dev_addr; struct drx_common_attr* demod; } ;
struct drx39xxj_state {int verify_microcode; int intermediate_freq; struct dvb_frontend frontend; struct i2c_adapter* i2c; int uio_sma_tx_mode; struct drx39xxj_state* my_ext_attr; int current_power_mode; struct drx39xxj_state* my_common_attr; int microcode_file; struct drx39xxj_state* user_data; struct drx39xxj_state* my_i2c_dev_addr; struct drx39xxj_state* demod; } ;
struct TYPE_32__ {void* scale; } ;
struct TYPE_30__ {void* scale; } ;
struct TYPE_28__ {void* scale; } ;
struct TYPE_26__ {void* scale; } ;
struct TYPE_24__ {int scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct i2c_device_addr*) ;
 int FUNC_1 (struct i2c_device_addr*) ;
 struct i2c_device_addr* FUNC_2 (int *,int,int ) ;
 struct i2c_device_addr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*) ;

struct dvb_frontend *FUNC_6(struct i2c_adapter *VAR_11)
{
 struct drx39xxj_state *VAR_12 = ((void*)0);
 struct i2c_device_addr *VAR_13 = ((void*)0);
 struct drx_common_attr *VAR_14 = ((void*)0);
 struct drxj_data *VAR_15 = ((void*)0);
 struct drx_demod_instance *VAR_16 = ((void*)0);
 struct dtv_frontend_properties *VAR_17;
 int VAR_18;


 VAR_12 = FUNC_3(sizeof(struct drx39xxj_state), VAR_5);
 if (VAR_12 == ((void*)0))
  goto error;

 VAR_16 = FUNC_2(&VAR_10,
   sizeof(struct drx_demod_instance), VAR_5);
 if (VAR_16 == ((void*)0))
  goto error;

 VAR_13 = FUNC_2(&VAR_8,
        sizeof(struct i2c_device_addr), VAR_5);
 if (VAR_13 == ((void*)0))
  goto error;

 VAR_14 = FUNC_2(&VAR_9,
      sizeof(struct drx_common_attr), VAR_5);
 if (VAR_14 == ((void*)0))
  goto error;

 VAR_15 = FUNC_2(&VAR_7, sizeof(struct drxj_data),
     VAR_5);
 if (VAR_15 == ((void*)0))
  goto error;


 VAR_12->i2c = VAR_11;
 VAR_12->demod = VAR_16;


 VAR_16->my_i2c_dev_addr = VAR_13;
 VAR_16->my_common_attr = VAR_14;
 VAR_16->my_i2c_dev_addr->user_data = VAR_12;
 VAR_16->my_common_attr->microcode_file = VAR_0;
 VAR_16->my_common_attr->verify_microcode = 1;
 VAR_16->my_common_attr->intermediate_freq = 5000;
 VAR_16->my_common_attr->current_power_mode = VAR_1;
 VAR_16->my_ext_attr = VAR_15;
 ((struct drxj_data *)VAR_15)->uio_sma_tx_mode = VAR_2;
 VAR_16->i2c = VAR_11;

 VAR_18 = FUNC_0(VAR_16);
 if (VAR_18 != 0) {
  FUNC_5("DRX open failed!  Aborting\n");
  goto error;
 }


 FUNC_4(&VAR_12->frontend.ops, &VAR_6,
        sizeof(struct dvb_frontend_ops));

 VAR_12->frontend.demodulator_priv = VAR_12;


 VAR_17 = &VAR_12->frontend.dtv_property_cache;
 VAR_17->strength.len = 1;
 VAR_17->pre_bit_count.len = 1;
 VAR_17->pre_bit_error.len = 1;
 VAR_17->post_bit_count.len = 1;
 VAR_17->post_bit_error.len = 1;
 VAR_17->block_count.len = 1;
 VAR_17->block_error.len = 1;
 VAR_17->cnr.len = 1;

 VAR_17->strength.stat[0].scale = VAR_4;
 VAR_17->pre_bit_count.stat[0].scale = VAR_3;
 VAR_17->pre_bit_error.stat[0].scale = VAR_3;
 VAR_17->post_bit_count.stat[0].scale = VAR_3;
 VAR_17->post_bit_error.stat[0].scale = VAR_3;
 VAR_17->block_count.stat[0].scale = VAR_3;
 VAR_17->block_error.stat[0].scale = VAR_3;
 VAR_17->cnr.stat[0].scale = VAR_3;

 return &VAR_12->frontend;

error:
 FUNC_1(VAR_15);
 FUNC_1(VAR_14);
 FUNC_1(VAR_13);
 FUNC_1(VAR_16);
 FUNC_1(VAR_12);

 return ((void*)0);
}
