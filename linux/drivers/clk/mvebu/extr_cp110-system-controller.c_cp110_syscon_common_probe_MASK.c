
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct clk_hw_onecell_data {int num; struct regmap** hws; } ;
typedef struct regmap clk_hw ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_12 ;
 int FUNC_2 (struct regmap*) ;
 void* FUNC_3 (struct device*,struct device_node*,char*) ;
 struct regmap* FUNC_4 (int *,char const*,char const*,int ,int,int) ;
 struct regmap* FUNC_5 (int *,char const*,int *,int ,int) ;
 int FUNC_6 (struct regmap*) ;
 int FUNC_7 (struct regmap*) ;
 int VAR_13 ;
 struct regmap* FUNC_8 (char*,char const*,struct regmap*,int) ;
 int FUNC_9 (struct regmap*) ;
 struct clk_hw_onecell_data* FUNC_10 (struct device*,int,int ) ;
 char** VAR_14 ;
 int FUNC_11 (struct device_node*,int ,struct clk_hw_onecell_data*) ;
 int FUNC_12 (struct platform_device*,struct regmap**) ;
 int FUNC_13 (struct regmap*,int ,int*) ;
 struct regmap* FUNC_14 (struct device_node*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15,
         struct device_node *VAR_16)
{
 struct regmap *VAR_17;
 struct device *VAR_18 = &VAR_15->dev;
 struct device_node *VAR_19 = VAR_18->of_node;
 const char *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24,
  *VAR_25;
 struct clk_hw_onecell_data *VAR_26;
 struct clk_hw *VAR_27, **VAR_28;
 u32 VAR_29;
 int VAR_30, VAR_31;
 char *VAR_32[FUNC_0(VAR_14)];

 VAR_17 = FUNC_14(VAR_16);
 if (FUNC_1(VAR_17))
  return FUNC_2(VAR_17);

 VAR_31 = FUNC_13(VAR_17, VAR_9,
     &VAR_29);
 if (VAR_31)
  return VAR_31;

 VAR_26 = FUNC_10(VAR_18, sizeof(*VAR_26) +
          sizeof(struct clk_hw *) * VAR_0,
          VAR_11);
 if (!VAR_26)
  return -VAR_10;

 VAR_28 = VAR_26->hws;
 VAR_26->num = VAR_0;


 VAR_21 = FUNC_3(VAR_18, VAR_16, "pll0");
 VAR_27 = FUNC_5(((void*)0), VAR_21, ((void*)0), 0,
     1000 * 1000 * 1000);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_pll0;
 }

 VAR_28[VAR_3] = VAR_27;


 VAR_20 = FUNC_3(VAR_18, VAR_16, "ppv2-core");
 VAR_27 = FUNC_4(((void*)0), VAR_20, VAR_21, 0, 1, 3);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_ppv2;
 }

 VAR_28[VAR_4] = VAR_27;


 VAR_23 = FUNC_3(VAR_18, VAR_16, "x2core");
 VAR_27 = FUNC_4(((void*)0), VAR_23, VAR_21,
       0, 1, 2);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_eip;
 }

 VAR_28[VAR_6] = VAR_27;


 VAR_22 = FUNC_3(VAR_18, VAR_16, "core");
 VAR_27 = FUNC_4(((void*)0), VAR_22, VAR_23,
       0, 1, 2);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_core;
 }

 VAR_28[VAR_1] = VAR_27;

 VAR_24 = FUNC_3(VAR_18, VAR_16, "nand-core");
 if (VAR_29 & VAR_12)
  VAR_27 = FUNC_4(((void*)0), VAR_24,
         VAR_21, 0, 2, 5);
 else
  VAR_27 = FUNC_4(((void*)0), VAR_24,
         VAR_22, 0, 1, 1);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_nand;
 }

 VAR_28[VAR_2] = VAR_27;


 VAR_25 = FUNC_3(VAR_18, VAR_16, "sdio-core");
 VAR_27 = FUNC_4(((void*)0), VAR_25,
       VAR_21, 0, 2, 5);
 if (FUNC_1(VAR_27)) {
  VAR_31 = FUNC_2(VAR_27);
  goto fail_sdio;
 }

 VAR_28[VAR_5] = VAR_27;


 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_14); VAR_30++)
  VAR_32[VAR_30] = FUNC_3(VAR_18, VAR_16,
        VAR_14[VAR_30]);

 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_14); VAR_30++) {
  const char *VAR_33;

  if (VAR_32[VAR_30] == ((void*)0))
   continue;

  switch (VAR_30) {
  case 132:
   VAR_33 = VAR_24;
   break;
  case 133:
  case 135:
  case 129:
   VAR_33 = VAR_20;
   break;
  case 128:
   VAR_33 = VAR_25;
   break;
  case 134:
  case 130:
  case 131:
  case 137:
  case 136:
   VAR_33 = VAR_23;
   break;
  default:
   VAR_33 = VAR_22;
   break;
  }
  VAR_27 = FUNC_8(VAR_32[VAR_30], VAR_33, VAR_17, VAR_30);

  if (FUNC_1(VAR_27)) {
   VAR_31 = FUNC_2(VAR_27);
   goto fail_gate;
  }

  VAR_28[VAR_7 + VAR_30] = VAR_27;
 }

 VAR_31 = FUNC_11(VAR_19, VAR_13, VAR_26);
 if (VAR_31)
  goto fail_clk_add;

 FUNC_12(VAR_15, VAR_28);

 return 0;

fail_clk_add:
fail_gate:
 for (VAR_30 = 0; VAR_30 < VAR_8; VAR_30++) {
  VAR_27 = VAR_28[VAR_7 + VAR_30];

  if (VAR_27)
   FUNC_9(VAR_27);
 }

 FUNC_6(VAR_28[VAR_5]);
fail_sdio:
 FUNC_6(VAR_28[VAR_2]);
fail_nand:
 FUNC_6(VAR_28[VAR_1]);
fail_core:
 FUNC_6(VAR_28[VAR_6]);
fail_eip:
 FUNC_6(VAR_28[VAR_4]);
fail_ppv2:
 FUNC_7(VAR_28[VAR_3]);
fail_pll0:
 return VAR_31;
}
