
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uphy_rst; int uahc_rst; int uctl_rst; int h_clkdiv_rst; size_t h_clkdiv_sel; int h_clk_en; int ref_clk_sel; int ref_clk_fsel; int mpll_multiplier; int ssc_en; int ref_ssp_en; int hs_power_en; int ss_power_en; int csclk_en; scalar_t__ drd_mode; scalar_t__ ref_clk_div2; } ;
union cvm_usbdrd_uctl_ctl {void* u64; TYPE_1__ s; } ;
typedef size_t u64 ;
typedef int u32 ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t* VAR_4 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (size_t,void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*,size_t) ;
 size_t FUNC_4 () ;
 int FUNC_5 (scalar_t__,char*,char const**) ;
 int FUNC_6 (scalar_t__,char*,int*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_5, u64 VAR_6)
{
 union cvm_usbdrd_uctl_ctl VAR_7;
 int VAR_8 = 2;
 u64 VAR_9;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;
 u64 VAR_13;
 u64 VAR_14 = VAR_6;

 if (VAR_5->of_node) {
  const char *VAR_15;
  const char *VAR_16;

  VAR_12 = FUNC_6(VAR_5->of_node,
      "refclk-frequency", &VAR_10);
  if (VAR_12) {
   FUNC_7("No UCTL \"refclk-frequency\"\n");
   return -VAR_0;
  }
  VAR_12 = FUNC_5(VAR_5->of_node,
         "refclk-type-ss", &VAR_15);
  if (VAR_12) {
   FUNC_7("No UCTL \"refclk-type-ss\"\n");
   return -VAR_0;
  }
  VAR_12 = FUNC_5(VAR_5->of_node,
         "refclk-type-hs", &VAR_16);
  if (VAR_12) {
   FUNC_7("No UCTL \"refclk-type-hs\"\n");
   return -VAR_0;
  }
  if (FUNC_8("dlmc_ref_clk0", VAR_15) == 0) {
   if (FUNC_8(VAR_16, "dlmc_ref_clk0") == 0)
    VAR_8 = 0;
   else if (FUNC_8(VAR_16, "pll_ref_clk") == 0)
    VAR_8 = 2;
   else
    FUNC_7("Invalid HS clock type %s, using  pll_ref_clk instead\n",
           VAR_16);
  } else if (FUNC_8(VAR_15, "dlmc_ref_clk1") == 0) {
   if (FUNC_8(VAR_16, "dlmc_ref_clk1") == 0)
    VAR_8 = 1;
   else if (FUNC_8(VAR_16, "pll_ref_clk") == 0)
    VAR_8 = 3;
   else {
    FUNC_7("Invalid HS clock type %s, using  pll_ref_clk instead\n",
           VAR_16);
    VAR_8 = 3;
   }
  } else
   FUNC_7("Invalid SS clock type %s, using  dlmc_ref_clk0 instead\n",
          VAR_15);

  if ((VAR_8 == 0 || VAR_8 == 1) &&
      (VAR_10 != 100000000))
   FUNC_7("Invalid UCTL clock rate of %u, using 100000000 instead\n",
          VAR_10);

 } else {
  FUNC_7("No USB UCTL device node\n");
  return -VAR_0;
 }
 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.uphy_rst = 1;
 VAR_7.s.uahc_rst = 1;
 VAR_7.s.uctl_rst = 1;
 FUNC_1(VAR_14, VAR_7.u64);


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.h_clkdiv_rst = 1;
 FUNC_1(VAR_14, VAR_7.u64);


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_13 = FUNC_4() / VAR_4[VAR_9];
  if (VAR_13 <= VAR_2 &&
     VAR_13 >= VAR_3)
   break;
 }
 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.h_clkdiv_sel = VAR_9;
 VAR_7.s.h_clk_en = 1;
 FUNC_1(VAR_14, VAR_7.u64);
 VAR_7.u64 = FUNC_0(VAR_14);
 if ((VAR_9 != VAR_7.s.h_clkdiv_sel) || (!VAR_7.s.h_clk_en)) {
  FUNC_2(VAR_5, "dwc3 controller clock init failure.\n");
   return -VAR_0;
 }


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.h_clkdiv_rst = 0;
 FUNC_1(VAR_14, VAR_7.u64);


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.ref_clk_sel = VAR_8;
 VAR_7.s.ref_clk_fsel = 0x07;
 VAR_7.s.ref_clk_div2 = 0;
 switch (VAR_10) {
 default:
  FUNC_2(VAR_5, "Invalid ref_clk %u, using 100000000 instead\n",
   VAR_10);

 case 100000000:
  VAR_11 = 0x19;
  if (VAR_8 < 2)
   VAR_7.s.ref_clk_fsel = 0x27;
  break;
 case 50000000:
  VAR_11 = 0x32;
  break;
 case 125000000:
  VAR_11 = 0x28;
  break;
 }
 VAR_7.s.mpll_multiplier = VAR_11;


 VAR_7.s.ssc_en = 1;


 VAR_7.s.ref_ssp_en = 1;




 VAR_7.s.hs_power_en = 1;
 VAR_7.s.ss_power_en = 1;
 FUNC_1(VAR_14, VAR_7.u64);


 FUNC_9(10);


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.uctl_rst = 0;
 FUNC_1(VAR_14, VAR_7.u64);


 FUNC_9(10);


 if (FUNC_3(VAR_5, VAR_6)) {
  FUNC_2(VAR_5, "Error configuring power.\n");
  return -VAR_0;
 }


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.uahc_rst = 0;
 FUNC_1(VAR_14, VAR_7.u64);


 FUNC_9(10);


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.csclk_en = 1;
 FUNC_1(VAR_14, VAR_7.u64);


 VAR_7.u64 = FUNC_0(VAR_14);
 VAR_7.s.drd_mode = 0;
 FUNC_1(VAR_14, VAR_7.u64);

 return 0;
}
