
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_node {int name; } ;
struct clk_omap_reg {int dummy; } ;
struct clk {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (int *,int ,char const**,unsigned int,int,struct clk_omap_reg*,int,int,int,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const**) ;
 char** FUNC_4 (int,int ) ;
 int FUNC_5 (struct device_node*,int ,struct clk*) ;
 unsigned int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char const**,unsigned int) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*,int*) ;
 int FUNC_10 (char*,struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,int ,struct clk_omap_reg*) ;

__attribute__((used)) static void FUNC_12(struct device_node *VAR_6)
{
 struct clk *VAR_7;
 struct clk_omap_reg VAR_8;
 unsigned int VAR_9;
 const char **VAR_10;
 u8 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 s32 VAR_14 = -VAR_3;
 u32 VAR_15 = VAR_1;

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9 < 2) {
  FUNC_10("mux-clock %pOFn must have parents\n", VAR_6);
  return;
 }
 VAR_10 = FUNC_4((sizeof(char *) * VAR_9), VAR_4);
 if (!VAR_10)
  goto cleanup;

 FUNC_7(VAR_6, VAR_10, VAR_9);

 if (FUNC_11(VAR_6, 0, &VAR_8))
  goto cleanup;

 FUNC_9(VAR_6, "ti,bit-shift", &VAR_13);

 FUNC_9(VAR_6, "ti,latch-bit", &VAR_14);

 if (FUNC_8(VAR_6, "ti,index-starts-at-one"))
  VAR_11 |= VAR_0;

 if (FUNC_8(VAR_6, "ti,set-rate-parent"))
  VAR_15 |= VAR_2;


 VAR_12 = VAR_9;
 if (!(VAR_11 & VAR_0))
  VAR_12--;

 VAR_12 = (1 << FUNC_2(VAR_12)) - 1;

 VAR_7 = FUNC_1(((void*)0), VAR_6->name, VAR_10, VAR_9,
       VAR_15, &VAR_8, VAR_13, VAR_12, VAR_14, VAR_11,
       ((void*)0));

 if (!FUNC_0(VAR_7))
  FUNC_5(VAR_6, VAR_5, VAR_7);

cleanup:
 FUNC_3(VAR_10);
}
