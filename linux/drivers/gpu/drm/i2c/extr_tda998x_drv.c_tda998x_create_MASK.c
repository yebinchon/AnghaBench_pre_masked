
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int of_node; int * funcs; int list; } ;
struct TYPE_4__ {unsigned long irq_flags; int release; int open; int exit; int init; struct tda998x_priv* data; struct device* parent; } ;
struct tda998x_priv {int vip_cntrl_0; int vip_cntrl_1; int vip_cntrl_2; int cec_addr; int current_page; int rev; TYPE_3__ bridge; scalar_t__* audio_port_enable; int cec; TYPE_1__ cec_glue; int cec_notify; int wq_edid; struct i2c_client* hdmi; int detect_work; int edid_delay_timer; int edid_delay_waitq; int edid_mutex; int audio_mutex; int mutex; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct i2c_client {int addr; int irq; TYPE_2__ dev; int adapter; } ;
struct i2c_board_info {int addr; int irq; TYPE_1__* platform_data; int type; } ;
struct device_node {int dummy; } ;
struct device {int of_node; scalar_t__ platform_data; } ;
typedef int cec_info ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;




 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct tda998x_priv*,int ) ;
 int FUNC_10 (struct tda998x_priv*,int ,int) ;
 int FUNC_11 (struct device*,char*,int,...) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,struct tda998x_priv*) ;
 struct tda998x_priv* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,struct i2c_board_info*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 unsigned long FUNC_19 (int ) ;
 int FUNC_20 (struct i2c_board_info*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct device_node*,char*,int*) ;
 int FUNC_23 (struct tda998x_priv*,int ) ;
 int FUNC_24 (struct tda998x_priv*,int ,int ) ;
 int FUNC_25 (struct tda998x_priv*,int ,int) ;
 int FUNC_26 (int,int *,int ,unsigned long,char*,struct tda998x_priv*) ;
 int FUNC_27 (int ,char*,int) ;
 int FUNC_28 (struct tda998x_priv*,TYPE_2__*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_29 (struct device*) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_30 (struct tda998x_priv*,struct device_node*) ;
 int VAR_34 ;
 int FUNC_31 (struct tda998x_priv*) ;
 int FUNC_32 (struct tda998x_priv*,scalar_t__) ;
 int FUNC_33 (int *,int ,int ) ;
 struct i2c_client* FUNC_34 (struct device*) ;

__attribute__((used)) static int FUNC_35(struct device *VAR_35)
{
 struct i2c_client *VAR_36 = FUNC_34(VAR_35);
 struct device_node *VAR_37 = VAR_36->dev.of_node;
 struct i2c_board_info VAR_38;
 struct tda998x_priv *VAR_39;
 u32 VAR_40;
 int VAR_41, VAR_42, VAR_43;

 VAR_39 = FUNC_14(VAR_35, sizeof(*VAR_39), VAR_10);
 if (!VAR_39)
  return -VAR_8;

 FUNC_13(VAR_35, VAR_39);

 FUNC_21(&VAR_39->mutex);
 FUNC_21(&VAR_39->audio_mutex);
 FUNC_21(&VAR_39->edid_mutex);
 FUNC_0(&VAR_39->bridge.list);
 FUNC_17(&VAR_39->edid_delay_waitq);
 FUNC_33(&VAR_39->edid_delay_timer, VAR_33, 0);
 FUNC_1(&VAR_39->detect_work, VAR_32);

 VAR_39->vip_cntrl_0 = FUNC_2(2) | FUNC_3(3);
 VAR_39->vip_cntrl_1 = FUNC_4(0) | FUNC_5(1);
 VAR_39->vip_cntrl_2 = FUNC_6(4) | FUNC_7(5);


 VAR_39->cec_addr = 0x34 + (VAR_36->addr & 0x03);
 VAR_39->current_page = 0xff;
 VAR_39->hdmi = VAR_36;


 FUNC_10(VAR_39, VAR_15,
   VAR_3 | VAR_2);

 FUNC_31(VAR_39);


 VAR_41 = FUNC_23(VAR_39, VAR_25);
 if (VAR_41 < 0) {
  FUNC_11(VAR_35, "failed to read version: %d\n", VAR_41);
  return VAR_41;
 }

 VAR_42 = FUNC_23(VAR_39, VAR_26);
 if (VAR_42 < 0) {
  FUNC_11(VAR_35, "failed to read version: %d\n", VAR_42);
  return VAR_42;
 }

 VAR_39->rev = VAR_41 | VAR_42 << 8;


 VAR_39->rev &= ~0x30;

 switch (VAR_39->rev) {
 case 128:
  FUNC_12(VAR_35, "found TDA9989 n2");
  break;
 case 130:
  FUNC_12(VAR_35, "found TDA19989");
  break;
 case 129:
  FUNC_12(VAR_35, "found TDA19989 n2");
  break;
 case 131:
  FUNC_12(VAR_35, "found TDA19988");
  break;
 default:
  FUNC_11(VAR_35, "found unsupported device: %04x\n", VAR_39->rev);
  return -VAR_9;
 }


 FUNC_25(VAR_39, VAR_19, 0x00);


 FUNC_25(VAR_39, VAR_24, 39);


 if (VAR_39->rev == 130)
  FUNC_24(VAR_39, VAR_20, VAR_11);

 FUNC_10(VAR_39, VAR_16,
   VAR_4 | VAR_5);


 FUNC_10(VAR_39, VAR_18, 0);


 FUNC_9(VAR_39, VAR_17);
 FUNC_23(VAR_39, VAR_21);
 FUNC_23(VAR_39, VAR_22);
 FUNC_23(VAR_39, VAR_23);


 if (VAR_36->irq) {
  unsigned long VAR_44;


  FUNC_17(&VAR_39->wq_edid);

  VAR_44 =
   FUNC_19(FUNC_18(VAR_36->irq));

  VAR_39->cec_glue.irq_flags = VAR_44;

  VAR_44 |= VAR_14 | VAR_13;
  VAR_43 = FUNC_26(VAR_36->irq, ((void*)0),
        VAR_34, VAR_44,
        "tda998x", VAR_39);
  if (VAR_43) {
   FUNC_11(VAR_35, "failed to request IRQ#%u: %d\n",
    VAR_36->irq, VAR_43);
   goto err_irq;
  }


  FUNC_10(VAR_39, VAR_18, VAR_6);
 }

 VAR_39->cec_notify = FUNC_8(VAR_35);
 if (!VAR_39->cec_notify) {
  VAR_43 = -VAR_8;
  goto fail;
 }

 VAR_39->cec_glue.parent = VAR_35;
 VAR_39->cec_glue.data = VAR_39;
 VAR_39->cec_glue.init = VAR_29;
 VAR_39->cec_glue.exit = VAR_28;
 VAR_39->cec_glue.open = VAR_30;
 VAR_39->cec_glue.release = VAR_31;
 FUNC_20(&VAR_38, 0, sizeof(VAR_38));
 FUNC_27(VAR_38.type, "tda9950", sizeof(VAR_38.type));
 VAR_38.addr = VAR_39->cec_addr;
 VAR_38.platform_data = &VAR_39->cec_glue;
 VAR_38.irq = VAR_36->irq;

 VAR_39->cec = FUNC_16(VAR_36->adapter, &VAR_38);
 if (!VAR_39->cec) {
  VAR_43 = -VAR_7;
  goto fail;
 }


 FUNC_24(VAR_39, VAR_23, VAR_12);

 if (VAR_37) {

  VAR_43 = FUNC_22(VAR_37, "video-ports", &VAR_40);
  if (VAR_43 == 0) {
   VAR_39->vip_cntrl_0 = VAR_40 >> 16;
   VAR_39->vip_cntrl_1 = VAR_40 >> 8;
   VAR_39->vip_cntrl_2 = VAR_40;
  }

  VAR_43 = FUNC_30(VAR_39, VAR_37);
  if (VAR_43)
   goto fail;

  if (VAR_39->audio_port_enable[VAR_0] ||
      VAR_39->audio_port_enable[VAR_1])
   FUNC_28(VAR_39, &VAR_36->dev);
 } else if (VAR_35->platform_data) {
  VAR_43 = FUNC_32(VAR_39, VAR_35->platform_data);
  if (VAR_43)
   goto fail;
 }

 VAR_39->bridge.funcs = &VAR_27;




 FUNC_15(&VAR_39->bridge);

 return 0;

fail:
 FUNC_29(VAR_35);
err_irq:
 return VAR_43;
}
