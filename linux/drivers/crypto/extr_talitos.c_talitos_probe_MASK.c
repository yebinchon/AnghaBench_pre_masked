
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct talitos_request {int dummy; } ;
struct talitos_private {int num_channels; int chfifo_len; int exec_units; int desc_types; int features; int fifo_len; int alg_list; TYPE_1__* chan; scalar_t__* irq; scalar_t__ reg; int * done_task; scalar_t__ reg_crcu; scalar_t__ reg_keu; scalar_t__ reg_pkeu; scalar_t__ reg_rngu; scalar_t__ reg_afeu; scalar_t__ reg_mdeu; scalar_t__ reg_aesu; scalar_t__ reg_deu; int reg_lock; struct platform_device* ofdev; } ;
struct crypto_alg {int cra_driver_name; } ;
struct TYPE_11__ {struct crypto_alg base; } ;
struct TYPE_15__ {TYPE_2__ halg; } ;
struct TYPE_16__ {struct crypto_alg base; } ;
struct TYPE_12__ {TYPE_7__ hash; TYPE_8__ aead; struct crypto_alg crypto; } ;
struct TYPE_13__ {int type; TYPE_3__ alg; } ;
struct talitos_crypto_alg {int entry; TYPE_4__ algt; } ;
struct talitos_channel {int dummy; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {int desc_hdr_template; } ;
struct TYPE_10__ {int submit_count; void* fifo; int tail_lock; int head_lock; scalar_t__ reg; } ;


 int FUNC_0 (TYPE_5__*) ;



 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct talitos_crypto_alg*) ;
 int FUNC_4 (struct talitos_crypto_alg*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (struct crypto_alg*) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,...) ;
 int FUNC_11 (struct device*,struct talitos_private*) ;
 scalar_t__ FUNC_12 (struct device*,int ,int ) ;
 void* FUNC_13 (struct device*,int,int,int ) ;
 int FUNC_14 (struct device*,struct talitos_crypto_alg*) ;
 struct talitos_private* FUNC_15 (struct device*,int,int ) ;
 int FUNC_16 (struct device*,int ) ;
 TYPE_5__* VAR_32 ;
 scalar_t__ FUNC_17 (struct talitos_private*) ;
 scalar_t__ FUNC_18 (struct device*,int ) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (struct device_node*,char*) ;
 scalar_t__ FUNC_24 (struct device_node*,char*,int *) ;
 int FUNC_25 (struct device_node*,char*,int*) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 int FUNC_27 (struct resource*) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int *) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 struct talitos_crypto_alg* FUNC_30 (struct device*,TYPE_5__*) ;
 int FUNC_31 (struct platform_device*) ;
 int FUNC_32 (struct device*) ;
 int FUNC_33 (struct platform_device*) ;
 int FUNC_34 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_39)
{
 struct device *VAR_40 = &VAR_39->dev;
 struct device_node *VAR_41 = VAR_39->dev.of_node;
 struct talitos_private *VAR_42;
 int VAR_43, VAR_44;
 int VAR_45;
 struct resource *VAR_46;

 VAR_42 = FUNC_15(VAR_40, sizeof(struct talitos_private), VAR_5);
 if (!VAR_42)
  return -VAR_2;

 FUNC_2(&VAR_42->alg_list);

 FUNC_11(VAR_40, VAR_42);

 VAR_42->ofdev = VAR_39;

 FUNC_29(&VAR_42->reg_lock);

 VAR_46 = FUNC_26(VAR_39, VAR_6, 0);
 if (!VAR_46)
  return -VAR_4;
 VAR_42->reg = FUNC_12(VAR_40, VAR_46->start, FUNC_27(VAR_46));
 if (!VAR_42->reg) {
  FUNC_9(VAR_40, "failed to of_iomap\n");
  VAR_44 = -VAR_2;
  goto err_out;
 }


 FUNC_25(VAR_41, "fsl,num-channels", &VAR_42->num_channels);
 FUNC_25(VAR_41, "fsl,channel-fifo-len", &VAR_42->chfifo_len);
 FUNC_25(VAR_41, "fsl,exec-units-mask", &VAR_42->exec_units);
 FUNC_25(VAR_41, "fsl,descriptor-types-mask",
        &VAR_42->desc_types);

 if (!FUNC_20(VAR_42->num_channels) || !VAR_42->chfifo_len ||
     !VAR_42->exec_units || !VAR_42->desc_types) {
  FUNC_9(VAR_40, "invalid property data in device tree node\n");
  VAR_44 = -VAR_1;
  goto err_out;
 }

 if (FUNC_23(VAR_41, "fsl,sec3.0"))
  VAR_42->features |= VAR_31;

 if (FUNC_23(VAR_41, "fsl,sec2.1"))
  VAR_42->features |= VAR_28 |
      VAR_30 |
      VAR_27;

 if (FUNC_23(VAR_41, "fsl,sec1.0"))
  VAR_42->features |= VAR_29;

 if (FUNC_23(VAR_41, "fsl,sec1.2")) {
  VAR_42->reg_deu = VAR_42->reg + VAR_14;
  VAR_42->reg_aesu = VAR_42->reg + VAR_13;
  VAR_42->reg_mdeu = VAR_42->reg + VAR_15;
  VAR_45 = VAR_16;
 } else if (FUNC_23(VAR_41, "fsl,sec1.0")) {
  VAR_42->reg_deu = VAR_42->reg + VAR_9;
  VAR_42->reg_aesu = VAR_42->reg + VAR_7;
  VAR_42->reg_mdeu = VAR_42->reg + VAR_10;
  VAR_42->reg_afeu = VAR_42->reg + VAR_8;
  VAR_42->reg_rngu = VAR_42->reg + VAR_12;
  VAR_42->reg_pkeu = VAR_42->reg + VAR_11;
  VAR_45 = VAR_16;
 } else {
  VAR_42->reg_deu = VAR_42->reg + VAR_21;
  VAR_42->reg_aesu = VAR_42->reg + VAR_17;
  VAR_42->reg_mdeu = VAR_42->reg + VAR_23;
  VAR_42->reg_afeu = VAR_42->reg + VAR_18;
  VAR_42->reg_rngu = VAR_42->reg + VAR_25;
  VAR_42->reg_pkeu = VAR_42->reg + VAR_24;
  VAR_42->reg_keu = VAR_42->reg + VAR_22;
  VAR_42->reg_crcu = VAR_42->reg + VAR_20;
  VAR_45 = VAR_19;
 }

 VAR_44 = FUNC_31(VAR_39);
 if (VAR_44)
  goto err_out;

 if (FUNC_17(VAR_42)) {
  if (VAR_42->num_channels == 1)
   FUNC_34(&VAR_42->done_task[0], VAR_34,
         (unsigned long)VAR_40);
  else
   FUNC_34(&VAR_42->done_task[0], VAR_33,
         (unsigned long)VAR_40);
 } else {
  if (VAR_42->irq[1]) {
   FUNC_34(&VAR_42->done_task[0], VAR_37,
         (unsigned long)VAR_40);
   FUNC_34(&VAR_42->done_task[1], VAR_38,
         (unsigned long)VAR_40);
  } else if (VAR_42->num_channels == 1) {
   FUNC_34(&VAR_42->done_task[0], VAR_36,
         (unsigned long)VAR_40);
  } else {
   FUNC_34(&VAR_42->done_task[0], VAR_35,
         (unsigned long)VAR_40);
  }
 }

 VAR_42->chan = FUNC_13(VAR_40,
      VAR_42->num_channels,
      sizeof(struct talitos_channel),
      VAR_5);
 if (!VAR_42->chan) {
  FUNC_9(VAR_40, "failed to allocate channel management space\n");
  VAR_44 = -VAR_2;
  goto err_out;
 }

 VAR_42->fifo_len = FUNC_28(VAR_42->chfifo_len);

 for (VAR_43 = 0; VAR_43 < VAR_42->num_channels; VAR_43++) {
  VAR_42->chan[VAR_43].reg = VAR_42->reg + VAR_45 * (VAR_43 + 1);
  if (!VAR_42->irq[1] || !(VAR_43 & 1))
   VAR_42->chan[VAR_43].reg += VAR_26;

  FUNC_29(&VAR_42->chan[VAR_43].head_lock);
  FUNC_29(&VAR_42->chan[VAR_43].tail_lock);

  VAR_42->chan[VAR_43].fifo = FUNC_13(VAR_40,
      VAR_42->fifo_len,
      sizeof(struct talitos_request),
      VAR_5);
  if (!VAR_42->chan[VAR_43].fifo) {
   FUNC_9(VAR_40, "failed to allocate request fifo %d\n", VAR_43);
   VAR_44 = -VAR_2;
   goto err_out;
  }

  FUNC_5(&VAR_42->chan[VAR_43].submit_count,
      -(VAR_42->chfifo_len - 1));
 }

 FUNC_16(VAR_40, FUNC_1(36));


 VAR_44 = FUNC_19(VAR_40);
 if (VAR_44) {
  FUNC_9(VAR_40, "failed to initialize device\n");
  goto err_out;
 }


 if (FUNC_18(VAR_40, VAR_0)) {
  VAR_44 = FUNC_32(VAR_40);
  if (VAR_44) {
   FUNC_9(VAR_40, "failed to register hwrng: %d\n", VAR_44);
   goto err_out;
  } else
   FUNC_10(VAR_40, "hwrng\n");
 }


 for (VAR_43 = 0; VAR_43 < FUNC_0(VAR_32); VAR_43++) {
  if (FUNC_18(VAR_40, VAR_32[VAR_43].desc_hdr_template)) {
   struct talitos_crypto_alg *VAR_47;
   struct crypto_alg *VAR_48 = ((void*)0);

   VAR_47 = FUNC_30(VAR_40, &VAR_32[VAR_43]);
   if (FUNC_3(VAR_47)) {
    VAR_44 = FUNC_4(VAR_47);
    if (VAR_44 == -VAR_3)
     continue;
    goto err_out;
   }

   switch (VAR_47->algt.type) {
   case 130:
    VAR_44 = FUNC_8(
      &VAR_47->algt.alg.crypto);
    VAR_48 = &VAR_47->algt.alg.crypto;
    break;

   case 129:
    VAR_44 = FUNC_6(
     &VAR_47->algt.alg.aead);
    VAR_48 = &VAR_47->algt.alg.aead.base;
    break;

   case 128:
    VAR_44 = FUNC_7(
      &VAR_47->algt.alg.hash);
    VAR_48 = &VAR_47->algt.alg.hash.halg.base;
    break;
   }
   if (VAR_44) {
    FUNC_9(VAR_40, "%s alg registration failed\n",
     VAR_48->cra_driver_name);
    FUNC_14(VAR_40, VAR_47);
   } else
    FUNC_21(&VAR_47->entry, &VAR_42->alg_list);
  }
 }
 if (!FUNC_22(&VAR_42->alg_list))
  FUNC_10(VAR_40, "%s algorithms registered in /proc/crypto\n",
    (char *)FUNC_24(VAR_41, "compatible", ((void*)0)));

 return 0;

err_out:
 FUNC_33(VAR_39);

 return VAR_44;
}
