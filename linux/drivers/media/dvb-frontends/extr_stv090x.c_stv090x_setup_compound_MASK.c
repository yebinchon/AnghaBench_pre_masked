
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int caps; } ;
struct TYPE_11__ {TYPE_1__ info; } ;
struct TYPE_13__ {TYPE_2__ ops; } ;
struct stv090x_state {scalar_t__ demod_mode; scalar_t__ device; TYPE_6__* internal; TYPE_3__* config; TYPE_4__ frontend; int i2c; } ;
struct stv090x_dev {TYPE_6__* internal; } ;
struct TYPE_14__ {int num_used; int dev_ver; int tuner_lock; int demod_lock; int i2c_addr; int i2c_adap; scalar_t__ mclk; } ;
struct TYPE_12__ {int demod; int set_gpio; scalar_t__ diseqc_envelope_mode; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct stv090x_dev* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int,char*,...) ;
 struct stv090x_dev* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_6__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(struct stv090x_state *VAR_10)
{
 struct stv090x_dev *VAR_11;

 VAR_11 = FUNC_2(VAR_10->i2c,
       VAR_10->config->address);

 if (VAR_11 && VAR_10->demod_mode == VAR_8) {
  VAR_10->internal = VAR_11->internal;
  VAR_10->internal->num_used++;
  FUNC_1(VAR_4, 1, "Found Internal Structure!");
 } else {
  VAR_10->internal = FUNC_4(sizeof(*VAR_10->internal), VAR_5);
  if (!VAR_10->internal)
   goto error;
  VAR_11 = FUNC_0(VAR_10->internal);
  if (!VAR_11) {
   FUNC_3(VAR_10->internal);
   goto error;
  }
  VAR_10->internal->num_used = 1;
  VAR_10->internal->mclk = 0;
  VAR_10->internal->dev_ver = 0;
  VAR_10->internal->i2c_adap = VAR_10->i2c;
  VAR_10->internal->i2c_addr = VAR_10->config->address;
  FUNC_1(VAR_4, 1, "Create New Internal Structure!");

  FUNC_5(&VAR_10->internal->demod_lock);
  FUNC_5(&VAR_10->internal->tuner_lock);

  if (FUNC_8(&VAR_10->frontend) < 0) {
   FUNC_1(VAR_3, 1, "Error setting up device");
   goto err_remove;
  }
 }

 if (VAR_10->internal->dev_ver >= 0x30)
  VAR_10->frontend.ops.info.caps |= VAR_2;


 if (VAR_10->config->diseqc_envelope_mode)
  FUNC_7(&VAR_10->frontend, VAR_6);

 VAR_10->config->set_gpio = VAR_9;

 FUNC_1(VAR_3, 1, "Probing %s demodulator(%d) Cut=0x%02x",
  VAR_10->device == VAR_7 ? "STV0900" : "STV0903",
  VAR_10->config->demod,
  VAR_10->internal->dev_ver);

 return 0;

error:
 return -VAR_1;
err_remove:
 FUNC_6(VAR_10->internal);
 FUNC_3(VAR_10->internal);
 return -VAR_0;
}
