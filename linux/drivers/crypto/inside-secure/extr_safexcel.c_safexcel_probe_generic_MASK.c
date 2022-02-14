
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct safexcel_ring_irq_data {int ring; struct safexcel_crypto_priv* priv; } ;
struct TYPE_5__ {int rings; } ;
struct TYPE_8__ {int hwdataw; int hwcfsize; int hwrfsize; void* algo_flags; void* pever; void* hiaver; void* hwver; } ;
struct safexcel_crypto_priv {int flags; scalar_t__ version; int ring_used; TYPE_3__* ring; TYPE_1__ config; TYPE_4__ hwconfig; struct device* dev; scalar_t__ base; int context_pool; } ;
struct safexcel_context_record {int dummy; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int ring; int work; struct safexcel_crypto_priv* priv; } ;
struct TYPE_7__ {int busy; int queue_lock; int lock; int queue; scalar_t__ requests; int workqueue; TYPE_2__ work_data; void* rdr_req; int rdr; int cdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct device*,char*,...) ;
 int FUNC_16 (struct device*,char*,int,void*,int,void*,int,int,int,void*,void*) ;
 void* FUNC_17 (struct device*,int,int,int ) ;
 struct safexcel_ring_irq_data* FUNC_18 (struct device*,int,int ) ;
 int FUNC_19 (char*,struct device*,int,int,int ) ;
 int FUNC_20 (struct pci_dev*,int,int,int) ;
 void* FUNC_21 (scalar_t__) ;
 int FUNC_22 (struct safexcel_crypto_priv*) ;
 int VAR_34 ;
 int FUNC_23 (struct safexcel_crypto_priv*) ;
 int FUNC_24 (struct safexcel_crypto_priv*) ;
 int FUNC_25 (struct safexcel_crypto_priv*,int *,int *) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_26 (struct safexcel_crypto_priv*) ;
 int FUNC_27 (void*,int ,int,int ,int ,struct safexcel_ring_irq_data*) ;
 int FUNC_28 (char*,int,char*,int) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_31(void *VAR_37,
      struct safexcel_crypto_priv *VAR_38,
      int VAR_39)
{
 struct device *VAR_40 = VAR_38->dev;
 u32 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48;

 VAR_38->context_pool = FUNC_19("safexcel-context", VAR_40,
           sizeof(struct safexcel_context_record),
           1, 0);
 if (!VAR_38->context_pool)
  return -VAR_29;






 VAR_42 = FUNC_21(VAR_38->base + VAR_23 + VAR_9);

 VAR_43 = 0;
 if (FUNC_7(VAR_42) == VAR_11) {
  VAR_38->hwconfig.hiaver = FUNC_8(VAR_42);
 } else if (FUNC_6(VAR_42) == VAR_10) {

  VAR_43 = VAR_14;
  VAR_38->hwconfig.hiaver = FUNC_9(VAR_42);
 } else {

  VAR_42 = FUNC_21(VAR_38->base + VAR_6 +
    VAR_9);
  if (FUNC_7(VAR_42) == VAR_11) {
   VAR_38->hwconfig.hiaver = FUNC_8(VAR_42);
   VAR_38->flags |= VAR_33;
  } else if (FUNC_6(VAR_42) ==
      VAR_10) {

   VAR_43 = VAR_14;
   VAR_38->hwconfig.hiaver = FUNC_9(VAR_42);
   VAR_38->flags |= VAR_33;
  } else {
   return -VAR_28;
  }
 }


 FUNC_24(VAR_38);






 if (VAR_43) {
  VAR_44 = FUNC_21(FUNC_1(VAR_38) + VAR_7);
  VAR_44 = VAR_44 ^ (VAR_43 >> 24);
  FUNC_30(VAR_44, FUNC_1(VAR_38) + VAR_7);
 }






 VAR_42 = FUNC_21(FUNC_0(VAR_38) + VAR_18);
 if (((VAR_38->flags & VAR_33) &&
      (FUNC_7(VAR_42) != VAR_19)) ||
     ((!(VAR_38->flags & VAR_33) &&
      (FUNC_7(VAR_42) != VAR_27)))) {




  return -VAR_28;
 }

 VAR_38->hwconfig.hwver = FUNC_8(VAR_42);
 VAR_48 = VAR_42 >> 28;
 VAR_41 = VAR_42 & 255;


 VAR_42 = FUNC_21(FUNC_3(VAR_38) + FUNC_5(0));
 if (FUNC_7(VAR_42) != VAR_20) {
  FUNC_15(VAR_40, "EIP%d: EIP96 not detected.\n", VAR_41);
  return -VAR_28;
 }
 VAR_38->hwconfig.pever = FUNC_8(VAR_42);

 VAR_45 = FUNC_21(FUNC_1(VAR_38) + VAR_8);

 if (VAR_38->flags & VAR_33) {

  VAR_38->hwconfig.hwdataw = (VAR_45 >> VAR_13) &
       VAR_12;
  VAR_38->hwconfig.hwcfsize = ((VAR_45 >> VAR_3) &
        VAR_2) +
       VAR_1;
  VAR_38->hwconfig.hwrfsize = ((VAR_45 >> VAR_17) &
        VAR_16) +
       VAR_15;
 } else {

  VAR_38->hwconfig.hwdataw = (VAR_45 >> VAR_13) &
       VAR_24;
  VAR_38->hwconfig.hwcfsize = (VAR_45 >> VAR_22) &
       VAR_21;
  VAR_38->hwconfig.hwrfsize = (VAR_45 >> VAR_26) &
       VAR_25;
 }


 VAR_38->hwconfig.algo_flags = FUNC_21(FUNC_3(VAR_38) +
        FUNC_4(0));


 FUNC_16(VAR_38->dev, "EIP%d:%x(%d)-HIA:%x(%d,%d,%d),PE:%x,alg:%08x\n",
   VAR_41, VAR_38->hwconfig.hwver, VAR_48, VAR_38->hwconfig.hiaver,
   VAR_38->hwconfig.hwdataw, VAR_38->hwconfig.hwcfsize,
   VAR_38->hwconfig.hwrfsize, VAR_38->hwconfig.pever,
   VAR_38->hwconfig.algo_flags);

 FUNC_22(VAR_38);

 if (FUNC_11(VAR_0) && VAR_38->version == VAR_5) {




  struct pci_dev *VAR_49 = VAR_37;

  VAR_47 = FUNC_20(VAR_49,
         VAR_38->config.rings + 1,
         VAR_38->config.rings + 1,
         VAR_31 | VAR_32);
  if (VAR_47 < 0) {
   FUNC_15(VAR_40, "Failed to allocate PCI MSI interrupts\n");
   return VAR_47;
  }
 }


 VAR_38->ring = FUNC_17(VAR_40, VAR_38->config.rings,
      sizeof(*VAR_38->ring),
      VAR_30);
 if (!VAR_38->ring)
  return -VAR_29;

 for (VAR_46 = 0; VAR_46 < VAR_38->config.rings; VAR_46++) {
  char VAR_50[9] = {0};
  int VAR_51;
  struct safexcel_ring_irq_data *VAR_52;

  VAR_47 = FUNC_25(VAR_38,
           &VAR_38->ring[VAR_46].cdr,
           &VAR_38->ring[VAR_46].rdr);
  if (VAR_47) {
   FUNC_15(VAR_40, "Failed to initialize rings\n");
   return VAR_47;
  }

  VAR_38->ring[VAR_46].rdr_req = FUNC_17(VAR_40,
   VAR_4,
   sizeof(VAR_38->ring[VAR_46].rdr_req),
   VAR_30);
  if (!VAR_38->ring[VAR_46].rdr_req)
   return -VAR_29;

  VAR_52 = FUNC_18(VAR_40, sizeof(*VAR_52), VAR_30);
  if (!VAR_52)
   return -VAR_29;

  VAR_52->priv = VAR_38;
  VAR_52->ring = VAR_46;

  VAR_51 = FUNC_27(VAR_37,
      FUNC_2(VAR_46, VAR_39),
      VAR_39,
      VAR_35,
      VAR_36,
      VAR_52);
  if (VAR_51 < 0) {
   FUNC_15(VAR_40, "Failed to get IRQ ID for ring %d\n", VAR_46);
   return VAR_51;
  }

  VAR_38->ring[VAR_46].work_data.priv = VAR_38;
  VAR_38->ring[VAR_46].work_data.ring = VAR_46;
  FUNC_10(&VAR_38->ring[VAR_46].work_data.work,
     VAR_34);

  FUNC_28(VAR_50, 9, "wq_ring%d", VAR_46);
  VAR_38->ring[VAR_46].workqueue =
   FUNC_13(VAR_50);
  if (!VAR_38->ring[VAR_46].workqueue)
   return -VAR_29;

  VAR_38->ring[VAR_46].requests = 0;
  VAR_38->ring[VAR_46].busy = 0;

  FUNC_14(&VAR_38->ring[VAR_46].queue,
      VAR_4);

  FUNC_29(&VAR_38->ring[VAR_46].lock);
  FUNC_29(&VAR_38->ring[VAR_46].queue_lock);
 }

 FUNC_12(&VAR_38->ring_used, 0);

 VAR_47 = FUNC_23(VAR_38);
 if (VAR_47) {
  FUNC_15(VAR_40, "HW init failed (%d)\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_26(VAR_38);
 if (VAR_47) {
  FUNC_15(VAR_40, "Failed to register algorithms (%d)\n", VAR_47);
  return VAR_47;
 }

 return 0;
}
