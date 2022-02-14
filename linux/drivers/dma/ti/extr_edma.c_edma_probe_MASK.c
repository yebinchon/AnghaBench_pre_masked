
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; struct edma_soc_info* platform_data; } ;
struct platform_device {scalar_t__ id; struct device dev; } ;
struct of_phandle_args {int* args; int np; } ;
struct of_device_id {scalar_t__ data; } ;
struct edma_soc_info {int default_queue; int** xbar_chans; int** queue_priority_mapping; int slavecnt; int slave_map; TYPE_3__* rsv; } ;
struct TYPE_7__ {int fn; int mapcnt; int map; } ;
struct TYPE_9__ {TYPE_2__ filter; } ;
struct edma_cc {scalar_t__ id; int legacy_mode; int num_channels; int num_slots; int default_queue; int ccint; int ccerrint; scalar_t__ dummy_slot; int num_tc; TYPE_4__ dma_slave; TYPE_4__* dma_memcpy; int * slave_chans; struct edma_soc_info* info; TYPE_1__* tc_list; void* slot_inuse; struct edma_soc_info* base; struct device* dev; } ;
struct device_node {int dummy; } ;
typedef int s8 ;
typedef int s16 ;
struct TYPE_8__ {int** rsv_slots; } ;
struct TYPE_6__ {int id; int node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct edma_soc_info*) ;
 int FUNC_3 (struct edma_soc_info*) ;
 int FUNC_4 (void*,int const,int const) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*) ;
 struct edma_soc_info* FUNC_9 (struct device*,struct resource*) ;
 char* FUNC_10 (struct device*,int ,char*,int ) ;
 void* FUNC_11 (struct device*,int,int,int ) ;
 struct edma_cc* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int,int ,int ,char*,struct edma_cc*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct device*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (struct edma_cc*,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (struct edma_cc*,int,int) ;
 int FUNC_20 (struct edma_cc*,int) ;
 int VAR_11 ;
 int FUNC_21 (struct edma_cc*,int) ;
 int VAR_12 ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (struct device*,struct edma_soc_info*,struct edma_cc*) ;
 struct edma_soc_info* FUNC_24 (struct device*,int) ;
 int FUNC_25 (struct edma_cc*,int ,int ,int) ;
 int FUNC_26 (struct edma_cc*,int ,int ,int,int) ;
 int FUNC_27 (struct edma_cc*,int,int *) ;
 int FUNC_28 (struct device_node*,int) ;
 int FUNC_29 (struct device_node*,int ,struct edma_cc*) ;
 int VAR_13 ;
 struct of_device_id* FUNC_30 (int ,struct device_node*) ;
 int FUNC_31 (struct device_node*,char*,int,int,struct of_phandle_args*) ;
 int FUNC_32 (struct platform_device*,char*) ;
 struct resource* FUNC_33 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_34 (struct platform_device*,int ,char*) ;
 int FUNC_35 (struct platform_device*,struct edma_cc*) ;
 int FUNC_36 (struct device*) ;
 int FUNC_37 (struct device*) ;
 int FUNC_38 (int,void*) ;

__attribute__((used)) static int FUNC_39(struct platform_device *VAR_14)
{
 struct edma_soc_info *VAR_15 = VAR_14->dev.platform_data;
 s8 (*VAR_16)[2];
 int VAR_17, VAR_18;
 const s16 (*VAR_19)[2];
 const s16 (*VAR_20)[2];
 int VAR_21;
 char *VAR_22;
 struct resource *VAR_23;
 struct device_node *VAR_24 = VAR_14->dev.of_node;
 struct device *VAR_25 = &VAR_14->dev;
 struct edma_cc *VAR_26;
 bool VAR_27 = 1;
 int VAR_28;

 if (VAR_24) {
  const struct of_device_id *VAR_29;

  VAR_29 = FUNC_30(VAR_12, VAR_24);
  if (VAR_29 && (*(u32 *)VAR_29->data) == VAR_0)
   VAR_27 = 0;

  VAR_15 = FUNC_24(VAR_25, VAR_27);
  if (FUNC_2(VAR_15)) {
   FUNC_6(VAR_25, "failed to get DT data\n");
   return FUNC_3(VAR_15);
  }
 }

 if (!VAR_15)
  return -VAR_4;

 FUNC_36(VAR_25);
 VAR_28 = FUNC_37(VAR_25);
 if (VAR_28 < 0) {
  FUNC_6(VAR_25, "pm_runtime_get_sync() failed\n");
  return VAR_28;
 }

 VAR_28 = FUNC_16(VAR_25, FUNC_1(32));
 if (VAR_28)
  return VAR_28;

 VAR_26 = FUNC_12(VAR_25, sizeof(*VAR_26), VAR_6);
 if (!VAR_26)
  return -VAR_5;

 VAR_26->dev = VAR_25;
 VAR_26->id = VAR_14->id;
 VAR_26->legacy_mode = VAR_27;

 if (VAR_26->id < 0)
  VAR_26->id = 0;

 VAR_23 = FUNC_34(VAR_14, VAR_7, "edma3_cc");
 if (!VAR_23) {
  FUNC_5(VAR_25, "mem resource not found, using index 0\n");
  VAR_23 = FUNC_33(VAR_14, VAR_7, 0);
  if (!VAR_23) {
   FUNC_6(VAR_25, "no mem resource?\n");
   return -VAR_4;
  }
 }
 VAR_26->base = FUNC_9(VAR_25, VAR_23);
 if (FUNC_2(VAR_26->base))
  return FUNC_3(VAR_26->base);

 FUNC_35(VAR_14, VAR_26);


 VAR_28 = FUNC_23(VAR_25, VAR_15, VAR_26);
 if (VAR_28)
  return VAR_28;


 VAR_26->slave_chans = FUNC_11(VAR_25, VAR_26->num_channels,
     sizeof(*VAR_26->slave_chans), VAR_6);
 if (!VAR_26->slave_chans)
  return -VAR_5;

 VAR_26->slot_inuse = FUNC_11(VAR_25, FUNC_0(VAR_26->num_slots),
           sizeof(unsigned long), VAR_6);
 if (!VAR_26->slot_inuse)
  return -VAR_5;

 VAR_26->default_queue = VAR_15->default_queue;

 if (VAR_15->rsv) {

  VAR_19 = VAR_15->rsv->rsv_slots;
  if (VAR_19) {
   for (VAR_17 = 0; VAR_19[VAR_17][0] != -1; VAR_17++)
    FUNC_4(VAR_26->slot_inuse, VAR_19[VAR_17][0],
        VAR_19[VAR_17][1]);
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_26->num_slots; VAR_17++) {

  if (!FUNC_38(VAR_17, VAR_26->slot_inuse))
   FUNC_27(VAR_26, VAR_17, &VAR_10);
 }


 VAR_20 = VAR_15->xbar_chans;
 if (VAR_20) {
  for (VAR_17 = 0; VAR_20[VAR_17][1] != -1; VAR_17++) {
   VAR_18 = VAR_20[VAR_17][1];
  }
 }

 VAR_21 = FUNC_32(VAR_14, "edma3_ccint");
 if (VAR_21 < 0 && VAR_24)
  VAR_21 = FUNC_28(VAR_24, 0);

 if (VAR_21 >= 0) {
  VAR_22 = FUNC_10(VAR_25, VAR_6, "%s_ccint",
       FUNC_8(VAR_25));
  VAR_28 = FUNC_13(VAR_25, VAR_21, VAR_9, 0, VAR_22,
           VAR_26);
  if (VAR_28) {
   FUNC_6(VAR_25, "CCINT (%d) failed --> %d\n", VAR_21, VAR_28);
   return VAR_28;
  }
  VAR_26->ccint = VAR_21;
 }

 VAR_21 = FUNC_32(VAR_14, "edma3_ccerrint");
 if (VAR_21 < 0 && VAR_24)
  VAR_21 = FUNC_28(VAR_24, 2);

 if (VAR_21 >= 0) {
  VAR_22 = FUNC_10(VAR_25, VAR_6, "%s_ccerrint",
       FUNC_8(VAR_25));
  VAR_28 = FUNC_13(VAR_25, VAR_21, VAR_8, 0, VAR_22,
           VAR_26);
  if (VAR_28) {
   FUNC_6(VAR_25, "CCERRINT (%d) failed --> %d\n", VAR_21, VAR_28);
   return VAR_28;
  }
  VAR_26->ccerrint = VAR_21;
 }

 VAR_26->dummy_slot = FUNC_17(VAR_26, VAR_3);
 if (VAR_26->dummy_slot < 0) {
  FUNC_6(VAR_25, "Can't allocate PaRAM dummy slot\n");
  return VAR_26->dummy_slot;
 }

 VAR_16 = VAR_15->queue_priority_mapping;

 if (!VAR_26->legacy_mode) {
  int VAR_30 = 0;
  struct of_phandle_args VAR_31;

  VAR_26->tc_list = FUNC_11(VAR_25, VAR_26->num_tc,
         sizeof(*VAR_26->tc_list), VAR_6);
  if (!VAR_26->tc_list)
   return -VAR_5;

  for (VAR_17 = 0;; VAR_17++) {
   VAR_28 = FUNC_31(VAR_24, "ti,tptcs",
              1, VAR_17, &VAR_31);
   if (VAR_28 || VAR_17 == VAR_26->num_tc)
    break;

   VAR_26->tc_list[VAR_17].node = VAR_31.np;
   VAR_26->tc_list[VAR_17].id = VAR_17;
   VAR_16[VAR_17][1] = VAR_31.args[0];
   if (VAR_16[VAR_17][1] > VAR_30) {
    VAR_30 = VAR_16[VAR_17][1];
    VAR_15->default_queue = VAR_17;
   }
  }
 }


 for (VAR_17 = 0; VAR_16[VAR_17][0] != -1; VAR_17++)
  FUNC_19(VAR_26, VAR_16[VAR_17][0],
           VAR_16[VAR_17][1]);

 FUNC_26(VAR_26, VAR_1, 0, 0, 0x0);
 FUNC_26(VAR_26, VAR_1, 0, 1, 0x0);
 FUNC_25(VAR_26, VAR_2, 0, 0x0);

 VAR_26->info = VAR_15;


 FUNC_20(VAR_26, VAR_27);

 for (VAR_17 = 0; VAR_17 < VAR_26->num_channels; VAR_17++) {

  FUNC_18(&VAR_26->slave_chans[VAR_17],
        VAR_15->default_queue);

  FUNC_22(&VAR_26->slave_chans[VAR_17], VAR_26->dummy_slot);
 }

 VAR_26->dma_slave.filter.map = VAR_15->slave_map;
 VAR_26->dma_slave.filter.mapcnt = VAR_15->slavecnt;
 VAR_26->dma_slave.filter.fn = VAR_11;

 VAR_28 = FUNC_14(&VAR_26->dma_slave);
 if (VAR_28) {
  FUNC_6(VAR_25, "slave ddev registration failed (%d)\n", VAR_28);
  goto err_reg1;
 }

 if (VAR_26->dma_memcpy) {
  VAR_28 = FUNC_14(VAR_26->dma_memcpy);
  if (VAR_28) {
   FUNC_6(VAR_25, "memcpy ddev registration failed (%d)\n",
    VAR_28);
   FUNC_15(&VAR_26->dma_slave);
   goto err_reg1;
  }
 }

 if (VAR_24)
  FUNC_29(VAR_24, VAR_13, VAR_26);

 FUNC_7(VAR_25, "TI EDMA DMA engine driver\n");

 return 0;

err_reg1:
 FUNC_21(VAR_26, VAR_26->dummy_slot);
 return VAR_28;
}
