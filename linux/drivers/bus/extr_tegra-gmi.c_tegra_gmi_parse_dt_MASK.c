
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tegra_gmi {int snor_timing1; int snor_timing0; int snor_config; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,char*,...) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int ) ;
 struct device_node* FUNC_11 (int ,int *) ;
 int FUNC_12 (struct device_node*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_15 (struct device_node*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_16(struct tegra_gmi *VAR_11)
{
 struct device_node *VAR_12;
 u32 VAR_13, VAR_14[4];
 int VAR_15;

 VAR_12 = FUNC_11(VAR_11->dev->of_node, ((void*)0));
 if (!VAR_12) {
  FUNC_8(VAR_11->dev, "no child nodes found\n");
  return -VAR_1;
 }






 if (FUNC_10(VAR_11->dev->of_node) > 1)
  FUNC_9(VAR_11->dev, "only one child device is supported.");

 if (FUNC_13(VAR_12, "nvidia,snor-data-width-32bit"))
  VAR_11->snor_config |= VAR_4;

 if (FUNC_13(VAR_12, "nvidia,snor-mux-mode"))
  VAR_11->snor_config |= VAR_7;

 if (FUNC_13(VAR_12, "nvidia,snor-rdy-active-before-data"))
  VAR_11->snor_config |= VAR_10;

 if (FUNC_13(VAR_12, "nvidia,snor-rdy-active-high"))
  VAR_11->snor_config |= VAR_9;

 if (FUNC_13(VAR_12, "nvidia,snor-adv-active-high"))
  VAR_11->snor_config |= VAR_3;

 if (FUNC_13(VAR_12, "nvidia,snor-oe-active-high"))
  VAR_11->snor_config |= VAR_8;

 if (FUNC_13(VAR_12, "nvidia,snor-cs-active-high"))
  VAR_11->snor_config |= VAR_5;


 VAR_15 = FUNC_15(VAR_12, "ranges", VAR_14, 4);
 if (VAR_15 < 0) {

  if (VAR_15 == -VAR_2) {
   FUNC_8(VAR_11->dev,
    "failed to decode CS: invalid ranges length\n");
   goto error_cs;
  }






  VAR_15 = FUNC_14(VAR_12, "reg", &VAR_13);
  if (VAR_15 < 0) {
   FUNC_8(VAR_11->dev,
    "failed to decode CS: no reg property found\n");
   goto error_cs;
  }
 } else {
  VAR_13 = VAR_14[1];
 }


 if (VAR_13 >= VAR_6) {
  FUNC_8(VAR_11->dev, "invalid chip select: %d", VAR_13);
  VAR_15 = -VAR_0;
  goto error_cs;
 }

 VAR_11->snor_config |= FUNC_2(VAR_13);


 if (!FUNC_14(VAR_12, "nvidia,snor-muxed-width", &VAR_13))
  VAR_11->snor_timing0 |= FUNC_4(VAR_13);
 else
  VAR_11->snor_timing0 |= FUNC_4(1);

 if (!FUNC_14(VAR_12, "nvidia,snor-hold-width", &VAR_13))
  VAR_11->snor_timing0 |= FUNC_3(VAR_13);
 else
  VAR_11->snor_timing0 |= FUNC_3(1);

 if (!FUNC_14(VAR_12, "nvidia,snor-adv-width", &VAR_13))
  VAR_11->snor_timing0 |= FUNC_0(VAR_13);
 else
  VAR_11->snor_timing0 |= FUNC_0(1);

 if (!FUNC_14(VAR_12, "nvidia,snor-ce-width", &VAR_13))
  VAR_11->snor_timing0 |= FUNC_1(VAR_13);
 else
  VAR_11->snor_timing0 |= FUNC_1(4);

 if (!FUNC_14(VAR_12, "nvidia,snor-we-width", &VAR_13))
  VAR_11->snor_timing1 |= FUNC_7(VAR_13);
 else
  VAR_11->snor_timing1 |= FUNC_7(1);

 if (!FUNC_14(VAR_12, "nvidia,snor-oe-width", &VAR_13))
  VAR_11->snor_timing1 |= FUNC_5(VAR_13);
 else
  VAR_11->snor_timing1 |= FUNC_5(1);

 if (!FUNC_14(VAR_12, "nvidia,snor-wait-width", &VAR_13))
  VAR_11->snor_timing1 |= FUNC_6(VAR_13);
 else
  VAR_11->snor_timing1 |= FUNC_6(3);

error_cs:
 FUNC_12(VAR_12);
 return VAR_15;
}
