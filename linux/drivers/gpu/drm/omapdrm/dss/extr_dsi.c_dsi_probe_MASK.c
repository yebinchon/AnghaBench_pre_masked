
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_device_attribute {TYPE_2__* data; } ;
struct resource {scalar_t__ start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct dsi_module_id_data {scalar_t__ address; int id; } ;
struct TYPE_5__ {int last_reset; } ;
struct dsi_data {scalar_t__ irq; int num_lanes_supported; TYPE_2__* data; TYPE_4__* vc; int syscon; int module_id; void* vdds_dsi_reg; void* pll_base; void* phy_base; void* proto_base; int te_timer; int framedone_timeout_work; int bus_lock; int lock; TYPE_1__ irq_stats; int irq_stats_lock; scalar_t__ errors; int errors_lock; int irq_lock; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {scalar_t__ vc_id; int * dssdev; int source; } ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_6__ {scalar_t__ model; int quirks; struct dsi_module_id_data* modules; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct dsi_data*,int ,int,int) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,struct dsi_data*) ;
 void* FUNC_9 (struct device*,struct resource*) ;
 struct dsi_data* FUNC_10 (struct device*,int,int ) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct device*,scalar_t__,int ,int ,int ,struct dsi_data*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct dsi_data*) ;
 int FUNC_14 (struct dsi_data*) ;
 int VAR_13 ;
 int FUNC_15 (struct dsi_data*) ;
 int FUNC_16 (struct dsi_data*) ;
 int FUNC_17 (struct dsi_data*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_18 (struct dsi_data*) ;
 int VAR_16 ;
 int FUNC_19 (int *) ;
 struct device_node* FUNC_20 (int *,char*) ;
 TYPE_3__* FUNC_21 (int ,int ) ;
 int FUNC_22 (struct device_node*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (int ,int *,int *,struct device*) ;
 int VAR_17 ;
 scalar_t__ FUNC_25 (struct platform_device*,int ) ;
 struct resource* FUNC_26 (struct platform_device*,int ,char*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (int *,int) ;
 struct soc_device_attribute* FUNC_30 (int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct device_node*) ;
 int FUNC_33 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_18)
{
 const struct soc_device_attribute *VAR_19;
 const struct dsi_module_id_data *VAR_20;
 struct device *VAR_21 = &VAR_18->dev;
 struct dsi_data *VAR_22;
 struct resource *VAR_23;
 struct resource *VAR_24;
 unsigned int VAR_25;
 int VAR_26;

 VAR_22 = FUNC_10(VAR_21, sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  return -VAR_6;

 VAR_22->dev = VAR_21;
 FUNC_8(VAR_21, VAR_22);

 FUNC_31(&VAR_22->irq_lock);
 FUNC_31(&VAR_22->errors_lock);
 VAR_22->errors = 0;






 FUNC_19(&VAR_22->lock);
 FUNC_29(&VAR_22->bus_lock, 1);

 FUNC_2(&VAR_22->framedone_timeout_work,
        VAR_12);





 VAR_23 = FUNC_26(VAR_18, VAR_9, "proto");
 VAR_22->proto_base = FUNC_9(VAR_21, VAR_23);
 if (FUNC_3(VAR_22->proto_base))
  return FUNC_4(VAR_22->proto_base);

 VAR_24 = FUNC_26(VAR_18, VAR_9, "phy");
 VAR_22->phy_base = FUNC_9(VAR_21, VAR_24);
 if (FUNC_3(VAR_22->phy_base))
  return FUNC_4(VAR_22->phy_base);

 VAR_24 = FUNC_26(VAR_18, VAR_9, "pll");
 VAR_22->pll_base = FUNC_9(VAR_21, VAR_24);
 if (FUNC_3(VAR_22->pll_base))
  return FUNC_4(VAR_22->pll_base);

 VAR_22->irq = FUNC_25(VAR_18, 0);
 if (VAR_22->irq < 0) {
  FUNC_1("platform_get_irq failed\n");
  return -VAR_5;
 }

 VAR_26 = FUNC_12(VAR_21, VAR_22->irq, VAR_17,
        VAR_10, FUNC_7(VAR_21), VAR_22);
 if (VAR_26 < 0) {
  FUNC_1("request_irq failed\n");
  return VAR_26;
 }

 VAR_22->vdds_dsi_reg = FUNC_11(VAR_21, "vdd");
 if (FUNC_3(VAR_22->vdds_dsi_reg)) {
  if (FUNC_4(VAR_22->vdds_dsi_reg) != -VAR_7)
   FUNC_1("can't get DSI VDD regulator\n");
  return FUNC_4(VAR_22->vdds_dsi_reg);
 }

 VAR_19 = FUNC_30(VAR_14);
 if (VAR_19)
  VAR_22->data = VAR_19->data;
 else
  VAR_22->data = FUNC_21(VAR_13, VAR_21->of_node)->data;

 VAR_20 = VAR_22->data->modules;
 while (VAR_20->address != 0 && VAR_20->address != VAR_23->start)
  VAR_20++;

 if (VAR_20->address == 0) {
  FUNC_1("unsupported DSI module\n");
  return -VAR_5;
 }

 VAR_22->module_id = VAR_20->id;

 if (VAR_22->data->model == VAR_1 ||
     VAR_22->data->model == VAR_2) {
  struct device_node *VAR_27;





  VAR_27 = FUNC_20(((void*)0),
   VAR_22->data->model == VAR_1 ?
   "omap4_padconf_global" : "omap5_padconf_global");
  if (!VAR_27)
   return -VAR_5;

  VAR_22->syscon = FUNC_32(VAR_27);
  FUNC_22(VAR_27);
 }


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_22->vc); VAR_25++) {
  VAR_22->vc[VAR_25].source = VAR_4;
  VAR_22->vc[VAR_25].dssdev = ((void*)0);
  VAR_22->vc[VAR_25].vc_id = 0;
 }

 VAR_26 = FUNC_13(VAR_22);
 if (VAR_26)
  return VAR_26;

 FUNC_28(VAR_21);



 if (VAR_22->data->quirks & VAR_3) {
  FUNC_16(VAR_22);

  VAR_22->num_lanes_supported = 1 + FUNC_5(VAR_22, VAR_0, 11, 9);
  FUNC_17(VAR_22);
 } else {
  VAR_22->num_lanes_supported = 3;
 }

 VAR_26 = FUNC_24(VAR_21->of_node, ((void*)0), ((void*)0), VAR_21);
 if (VAR_26) {
  FUNC_1("Failed to populate DSI child devices: %d\n", VAR_26);
  goto err_pm_disable;
 }

 VAR_26 = FUNC_14(VAR_22);
 if (VAR_26)
  goto err_of_depopulate;

 VAR_26 = FUNC_15(VAR_22);
 if (VAR_26) {
  FUNC_1("Invalid DSI DT data\n");
  goto err_uninit_output;
 }

 VAR_26 = FUNC_6(&VAR_18->dev, &VAR_11);
 if (VAR_26)
  goto err_uninit_output;

 return 0;

err_uninit_output:
 FUNC_18(VAR_22);
err_of_depopulate:
 FUNC_23(VAR_21);
err_pm_disable:
 FUNC_27(VAR_21);
 return VAR_26;
}
