
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u32 ;
struct property {int length; int * value; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct dev_pm_opp {int dummy; } ;
typedef int __be32 ;
struct TYPE_22__ {unsigned long frequency; } ;
struct TYPE_21__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 struct dev_pm_opp* FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_6__**) ;
 int FUNC_10 (TYPE_1__*) ;
 unsigned long FUNC_11 (struct dev_pm_opp*) ;
 int FUNC_12 (TYPE_1__*,TYPE_6__**) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct dev_pm_opp*) ;
 int FUNC_16 (TYPE_1__*,char*) ;
 unsigned long* FUNC_17 (TYPE_1__*,int,int,int ) ;
 int VAR_14 ;
 TYPE_6__* VAR_15 ;
 TYPE_1__* FUNC_18 (int ) ;
 unsigned long* VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct property* FUNC_21 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_22 (char*) ;
 struct device_node* FUNC_23 (int ) ;
 int FUNC_24 (struct device_node*) ;
 scalar_t__ FUNC_25 (struct device_node*,char*,int*) ;
 int FUNC_26 (char*) ;
 int VAR_20 ;
 int FUNC_27 (TYPE_1__*,char*) ;
 int FUNC_28 (TYPE_1__*,char*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,unsigned long,unsigned long) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_24)
{
 struct device_node *VAR_25;
 struct dev_pm_opp *VAR_26;
 unsigned long VAR_27, VAR_28;
 int VAR_29, VAR_30;
 const struct property *VAR_31;
 const __be32 *VAR_32;
 u32 VAR_33, VAR_34, VAR_35;

 VAR_13 = FUNC_18(0);
 if (!VAR_13) {
  FUNC_26("failed to get cpu0 device\n");
  return -VAR_1;
 }

 VAR_25 = FUNC_23(VAR_13->of_node);
 if (!VAR_25) {
  FUNC_7(VAR_13, "failed to find cpu0 node\n");
  return -VAR_2;
 }

 if (FUNC_22("fsl,imx6ul") ||
     FUNC_22("fsl,imx6ull"))
  VAR_19 = VAR_8;
 else
  VAR_19 = VAR_7;

 VAR_30 = FUNC_3(VAR_13, VAR_19, VAR_12);
 if (VAR_30)
  goto put_node;

 VAR_11 = FUNC_27(VAR_13, "arm");
 VAR_20 = FUNC_28(VAR_13, "pu");
 VAR_22 = FUNC_27(VAR_13, "soc");
 if (FUNC_1(VAR_11) == -VAR_4 ||
   FUNC_1(VAR_22) == -VAR_4 ||
   FUNC_1(VAR_20) == -VAR_4) {
  VAR_30 = -VAR_4;
  FUNC_6(VAR_13, "regulators not ready, defer\n");
  goto put_reg;
 }
 if (FUNC_0(VAR_11) || FUNC_0(VAR_22)) {
  FUNC_7(VAR_13, "failed to get regulators\n");
  VAR_30 = -VAR_2;
  goto put_reg;
 }

 VAR_30 = FUNC_13(VAR_13);
 if (VAR_30 < 0) {
  FUNC_7(VAR_13, "failed to init OPP table: %d\n", VAR_30);
  goto put_reg;
 }

 if (FUNC_22("fsl,imx6ul") ||
     FUNC_22("fsl,imx6ull")) {
  VAR_30 = FUNC_20(VAR_13);
  if (VAR_30) {
   if (VAR_30 == -VAR_4)
    goto put_node;

   FUNC_7(VAR_13, "failed to read ocotp: %d\n",
    VAR_30);
   goto put_node;
  }
 } else {
  FUNC_19(VAR_13);
 }


 VAR_14 = 1;
 VAR_29 = FUNC_10(VAR_13);
 if (VAR_29 < 0) {
  VAR_30 = VAR_29;
  FUNC_7(VAR_13, "no OPP table is found: %d\n", VAR_30);
  goto out_free_opp;
 }

 VAR_30 = FUNC_12(VAR_13, &VAR_15);
 if (VAR_30) {
  FUNC_7(VAR_13, "failed to init cpufreq table: %d\n", VAR_30);
  goto out_free_opp;
 }


 VAR_16 = FUNC_17(VAR_13, VAR_29, sizeof(*VAR_16),
         VAR_6);
 if (VAR_16 == ((void*)0)) {
  VAR_30 = -VAR_3;
  goto free_freq_table;
 }

 VAR_31 = FUNC_21(VAR_25, "fsl,soc-operating-points", ((void*)0));
 if (!VAR_31 || !VAR_31->value)
  goto soc_opp_out;





 VAR_33 = VAR_31->length / sizeof(u32);
 if (VAR_33 % 2 || (VAR_33 / 2) < VAR_29)
  goto soc_opp_out;

 for (VAR_35 = 0; VAR_35 < VAR_29; VAR_35++) {
  VAR_32 = VAR_31->value;
  for (VAR_34 = 0; VAR_34 < VAR_33 / 2; VAR_34++) {
   unsigned long VAR_36 = FUNC_2(VAR_32++);
   unsigned long VAR_37 = FUNC_2(VAR_32++);
   if (VAR_15[VAR_35].frequency == VAR_36) {
    VAR_16[VAR_21++] = VAR_37;
    break;
   }
  }
 }

soc_opp_out:

 if (VAR_21 != VAR_29) {
  FUNC_16(VAR_13, "can NOT find valid fsl,soc-operating-points property in dtb, use default value!\n");
  for (VAR_35 = 0; VAR_35 < VAR_29; VAR_35++)
   VAR_16[VAR_35] = VAR_10;
  if (VAR_15[VAR_29 - 1].frequency * 1000 == VAR_5)
   VAR_16[VAR_29 - 1] = VAR_9;
 }

 if (FUNC_25(VAR_25, "clock-latency", &VAR_23))
  VAR_23 = VAR_0;





 VAR_30 = FUNC_30(VAR_22, VAR_16[0], VAR_16[VAR_29 - 1]);
 if (VAR_30 > 0)
  VAR_23 += VAR_30 * 1000;
 if (!FUNC_0(VAR_20)) {
  VAR_30 = FUNC_30(VAR_20, VAR_16[0], VAR_16[VAR_29 - 1]);
  if (VAR_30 > 0)
   VAR_23 += VAR_30 * 1000;
 }






 VAR_18 = VAR_15[--VAR_29].frequency;
 VAR_26 = FUNC_8(VAR_13,
      VAR_15[0].frequency * 1000, 1);
 VAR_27 = FUNC_11(VAR_26);
 FUNC_15(VAR_26);
 VAR_26 = FUNC_8(VAR_13, VAR_18 * 1000, 1);
 VAR_28 = FUNC_11(VAR_26);
 FUNC_15(VAR_26);

 VAR_30 = FUNC_30(VAR_11, VAR_27, VAR_28);
 if (VAR_30 > 0)
  VAR_23 += VAR_30 * 1000;

 VAR_30 = FUNC_5(&VAR_17);
 if (VAR_30) {
  FUNC_7(VAR_13, "failed register driver: %d\n", VAR_30);
  goto free_freq_table;
 }

 FUNC_24(VAR_25);
 return 0;

free_freq_table:
 FUNC_9(VAR_13, &VAR_15);
out_free_opp:
 if (VAR_14)
  FUNC_14(VAR_13);
put_reg:
 if (!FUNC_0(VAR_11))
  FUNC_29(VAR_11);
 if (!FUNC_0(VAR_20))
  FUNC_29(VAR_20);
 if (!FUNC_0(VAR_22))
  FUNC_29(VAR_22);

 FUNC_4(VAR_19, VAR_12);
put_node:
 FUNC_24(VAR_25);

 return VAR_30;
}
