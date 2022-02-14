
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk_hw_onecell_data {int num; struct clk_hw** hws; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 size_t VAR_59 ;
 size_t VAR_60 ;
 size_t VAR_61 ;
 size_t VAR_62 ;
 size_t VAR_63 ;
 size_t VAR_64 ;
 size_t VAR_65 ;
 size_t VAR_66 ;
 size_t VAR_67 ;
 size_t VAR_68 ;
 size_t VAR_69 ;
 size_t VAR_70 ;
 size_t VAR_71 ;
 size_t VAR_72 ;
 size_t VAR_73 ;
 size_t VAR_74 ;
 size_t VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (int *,char*,int *,int ,int) ;
 struct clk_hw_onecell_data* FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_133 ;
 struct clk_hw* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct device_node*,int ,struct clk_hw_onecell_data*) ;
 int VAR_134 ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (struct clk_hw_onecell_data*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_135)
{
 struct device_node *VAR_136 = VAR_135->dev.of_node;
 struct clk_hw_onecell_data *VAR_137;
 struct clk_hw **VAR_138;
 int VAR_139, VAR_140;

 VAR_139 = FUNC_5();
 if (VAR_139)
  return VAR_139;

 VAR_137 = FUNC_3(&VAR_135->dev, FUNC_8(VAR_137, VAR_133,
    VAR_76), VAR_1);
 if (!VAR_137)
  return -VAR_0;

 VAR_137->num = VAR_76;
 VAR_138 = VAR_137->hws;


 VAR_138[VAR_22] = FUNC_2(((void*)0), "dummy", ((void*)0), 0, 0);
 VAR_138[VAR_11] = FUNC_2(((void*)0), "dma_ipg_clk_root", ((void*)0), 0, 120000000);
 VAR_138[VAR_24] = FUNC_2(((void*)0), "conn_axi_clk_root", ((void*)0), 0, 333333333);
 VAR_138[VAR_23] = FUNC_2(((void*)0), "conn_ahb_clk_root", ((void*)0), 0, 166666666);
 VAR_138[VAR_33] = FUNC_2(((void*)0), "conn_ipg_clk_root", ((void*)0), 0, 83333333);
 VAR_138[VAR_46] = FUNC_2(((void*)0), "dc_axi_ext_clk_root", ((void*)0), 0, 800000000);
 VAR_138[VAR_47] = FUNC_2(((void*)0), "dc_axi_int_clk_root", ((void*)0), 0, 400000000);
 VAR_138[VAR_48] = FUNC_2(((void*)0), "dc_cfg_clk_root", ((void*)0), 0, 100000000);
 VAR_138[VAR_75] = FUNC_2(((void*)0), "mipi_ipg_clk_root", ((void*)0), 0, 120000000);
 VAR_138[VAR_53] = FUNC_2(((void*)0), "img_axi_clk_root", ((void*)0), 0, 400000000);
 VAR_138[VAR_54] = FUNC_2(((void*)0), "img_ipg_clk_root", ((void*)0), 0, 200000000);
 VAR_138[VAR_55] = FUNC_2(((void*)0), "img_pxl_clk_root", ((void*)0), 0, 600000000);
 VAR_138[VAR_51] = FUNC_2(((void*)0), "hsio_axi_clk_root", ((void*)0), 0, 400000000);
 VAR_138[VAR_52] = FUNC_2(((void*)0), "hsio_per_clk_root", ((void*)0), 0, 133333333);
 VAR_138[VAR_64] = FUNC_2(((void*)0), "lsio_mem_clk_root", ((void*)0), 0, 200000000);
 VAR_138[VAR_56] = FUNC_2(((void*)0), "lsio_bus_clk_root", ((void*)0), 0, 100000000);


 VAR_138[VAR_2] = FUNC_4("a35_clk", VAR_85, VAR_78);


 VAR_138[VAR_65] = FUNC_4("pwm0_clk", VAR_113, VAR_84);
 VAR_138[VAR_66] = FUNC_4("pwm1_clk", VAR_114, VAR_84);
 VAR_138[VAR_67] = FUNC_4("pwm2_clk", VAR_115, VAR_84);
 VAR_138[VAR_68] = FUNC_4("pwm3_clk", VAR_116, VAR_84);
 VAR_138[VAR_69] = FUNC_4("pwm4_clk", VAR_117, VAR_84);
 VAR_138[VAR_70] = FUNC_4("pwm5_clk", VAR_118, VAR_84);
 VAR_138[VAR_71] = FUNC_4("pwm6_clk", VAR_119, VAR_84);
 VAR_138[VAR_72] = FUNC_4("pwm7_clk", VAR_120, VAR_84);
 VAR_138[VAR_59] = FUNC_4("gpt0_clk", VAR_98, VAR_84);
 VAR_138[VAR_60] = FUNC_4("gpt1_clk", VAR_99, VAR_84);
 VAR_138[VAR_61] = FUNC_4("gpt2_clk", VAR_100, VAR_84);
 VAR_138[VAR_62] = FUNC_4("gpt3_clk", VAR_101, VAR_84);
 VAR_138[VAR_63] = FUNC_4("gpt4_clk", VAR_102, VAR_84);
 VAR_138[VAR_57] = FUNC_4("fspi0_clk", VAR_94, VAR_84);
 VAR_138[VAR_58] = FUNC_4("fspi1_clk", VAR_95, VAR_84);


 VAR_138[VAR_18] = FUNC_4("uart0_clk", VAR_128, VAR_84);
 VAR_138[VAR_19] = FUNC_4("uart1_clk", VAR_129, VAR_84);
 VAR_138[VAR_20] = FUNC_4("uart2_clk", VAR_130, VAR_84);
 VAR_138[VAR_21] = FUNC_4("uart3_clk", VAR_131, VAR_84);
 VAR_138[VAR_14] = FUNC_4("spi0_clk", VAR_124, VAR_84);
 VAR_138[VAR_15] = FUNC_4("spi1_clk", VAR_125, VAR_84);
 VAR_138[VAR_16] = FUNC_4("spi2_clk", VAR_126, VAR_84);
 VAR_138[VAR_17] = FUNC_4("spi3_clk", VAR_127, VAR_84);
 VAR_138[VAR_4] = FUNC_4("can0_clk", VAR_87, VAR_84);
 VAR_138[VAR_7] = FUNC_4("i2c0_clk", VAR_104, VAR_84);
 VAR_138[VAR_8] = FUNC_4("i2c1_clk", VAR_105, VAR_84);
 VAR_138[VAR_9] = FUNC_4("i2c2_clk", VAR_106, VAR_84);
 VAR_138[VAR_10] = FUNC_4("i2c3_clk", VAR_107, VAR_84);
 VAR_138[VAR_5] = FUNC_4("ftm0_clk", VAR_96, VAR_84);
 VAR_138[VAR_6] = FUNC_4("ftm1_clk", VAR_97, VAR_84);
 VAR_138[VAR_3] = FUNC_4("adc0_clk", VAR_86, VAR_84);
 VAR_138[VAR_13] = FUNC_4("pwm_clk", VAR_109, VAR_84);
 VAR_138[VAR_12] = FUNC_4("lcd_clk", VAR_108, VAR_84);


 VAR_138[VAR_34] = FUNC_4("sdhc0_clk", VAR_121, VAR_84);
 VAR_138[VAR_35] = FUNC_4("sdhc1_clk", VAR_122, VAR_84);
 VAR_138[VAR_36] = FUNC_4("sdhc2_clk", VAR_123, VAR_84);
 VAR_138[VAR_27] = FUNC_4("enet0_clk", VAR_92, VAR_84);
 VAR_138[VAR_25] = FUNC_4("enet0_bypass_clk", VAR_92, VAR_77);
 VAR_138[VAR_26] = FUNC_4("enet0_rgmii_clk", VAR_92, VAR_80);
 VAR_138[VAR_30] = FUNC_4("enet1_clk", VAR_93, VAR_84);
 VAR_138[VAR_28] = FUNC_4("enet1_bypass_clk", VAR_93, VAR_77);
 VAR_138[VAR_29] = FUNC_4("enet1_rgmii_clk", VAR_93, VAR_80);
 VAR_138[VAR_32] = FUNC_4("gpmi_io_clk", VAR_112, VAR_83);
 VAR_138[VAR_31] = FUNC_4("gpmi_bch_clk", VAR_112, VAR_84);
 VAR_138[VAR_37] = FUNC_4("usb3_aclk_div", VAR_132, VAR_84);
 VAR_138[VAR_38] = FUNC_4("usb3_bus_div", VAR_132, VAR_83);
 VAR_138[VAR_39] = FUNC_4("usb3_lpm_div", VAR_132, VAR_79);


 VAR_138[VAR_44] = FUNC_4("dc0_disp0_clk", VAR_91, VAR_80);
 VAR_138[VAR_45] = FUNC_4("dc0_disp1_clk", VAR_91, VAR_81);


 VAR_138[VAR_73] = FUNC_4("mipi0_i2c0_clk", VAR_110, VAR_82);
 VAR_138[VAR_74] = FUNC_4("mipi0_i2c1_clk", VAR_111, VAR_82);


 VAR_138[VAR_40] = FUNC_4("mipi_csi0_core_clk", VAR_88, VAR_84);
 VAR_138[VAR_41] = FUNC_4("mipi_csi0_esc_clk", VAR_88, VAR_79);
 VAR_138[VAR_42] = FUNC_4("mipi_csi0_i2c0_clk", VAR_89, VAR_84);
 VAR_138[VAR_43] = FUNC_4("mipi_csi0_pwm0_clk", VAR_90, VAR_84);


 VAR_138[VAR_49] = FUNC_4("gpu_core0_clk", VAR_103, VAR_84);
 VAR_138[VAR_50] = FUNC_4("gpu_shader0_clk", VAR_103, VAR_79);

 for (VAR_140 = 0; VAR_140 < VAR_137->num; VAR_140++) {
  if (FUNC_0(VAR_138[VAR_140]))
   FUNC_7("i.MX clk %u: register failed with %ld\n",
    VAR_140, FUNC_1(VAR_138[VAR_140]));
 }

 return FUNC_6(VAR_136, VAR_134, VAR_137);
}
