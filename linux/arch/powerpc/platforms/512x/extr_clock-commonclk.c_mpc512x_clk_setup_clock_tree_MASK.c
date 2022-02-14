
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int sccr2; int sccr1; int scfr1; int scfr2; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_48 ;
 int * VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int * VAR_52 ;
 int * VAR_53 ;
 int * VAR_54 ;
 int * VAR_55 ;
 int FUNC_5 (char*,char*,int ,int *,int,int,int ) ;
 int FUNC_6 (char*,char*,int *,int,int,int ) ;
 int FUNC_7 (char*,char*,int,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,char*,int *,int) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 (struct device_node*,int,int*,int*,int*) ;
 int FUNC_12 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 scalar_t__ FUNC_23 () ;
 scalar_t__ FUNC_24 () ;
 size_t FUNC_25 () ;

__attribute__((used)) static void FUNC_26(struct device_node *VAR_56, int VAR_57)
{
 int VAR_58, VAR_59, VAR_60;
 int VAR_61, VAR_62;
 size_t VAR_63;
 int VAR_64;
 FUNC_11(VAR_56, VAR_57, &VAR_58, &VAR_59, &VAR_60);


 VAR_49[VAR_44] = FUNC_7("sys", "ref",
         VAR_58, VAR_59);
 VAR_49[VAR_6] = FUNC_7("csb", "sys", 1, 2);
 VAR_49[VAR_18] = FUNC_6("ips", "csb",
           &VAR_48->scfr1, 23, 3,
           VAR_51);


 VAR_49[VAR_8] = FUNC_7("ddr-ug", "sys", 1, 2);
 VAR_49[VAR_41] = FUNC_7("sdhc-x4", "csb", 2, 1);
 VAR_49[VAR_40] = FUNC_5("sdhc-ug", "sdhc-x4", 0,
       &VAR_48->scfr2, 1, 7,
       VAR_0);
 if (FUNC_22()) {
  VAR_49[VAR_39] = FUNC_5(
    "sdhc2-ug", "sdhc-x4", 0, &VAR_48->scfr2,
    9, 7, VAR_0);
 }

 VAR_49[VAR_11] = FUNC_7("diu-x4", "csb", 4, 1);
 VAR_49[VAR_10] = FUNC_5("diu-ug", "diu-x4", 0,
             &VAR_48->scfr1, 0, 8,
             VAR_0);
 VAR_61 = FUNC_3();
 VAR_62 = 2;
 VAR_49[VAR_13] = FUNC_7("e300", "csb", VAR_61, VAR_62);

 if (FUNC_15()) {
  VAR_49[VAR_25] = FUNC_7(
    "mbx-bus-ug", "csb", 1, 2);
  VAR_49[VAR_26] = FUNC_6(
    "mbx-ug", "mbx-bus-ug", &VAR_48->scfr1,
    14, 3, VAR_50);
  VAR_49[VAR_23] = FUNC_7(
    "mbx-3d-ug", "mbx-ug", 1, 1);
 }
 if (FUNC_20()) {
  VAR_49[VAR_32] = FUNC_6(
    "pci-ug", "csb", &VAR_48->scfr1,
    20, 3, VAR_51);
 }
 if (FUNC_17()) {





  VAR_49[VAR_29] = FUNC_1(-VAR_1);
 } else {
  VAR_49[VAR_29] = FUNC_6(
    "nfc-ug", "ips", &VAR_48->scfr1,
    8, 3, VAR_50);
 }
 VAR_49[VAR_20] = FUNC_6("lpc-ug", "ips",
       &VAR_48->scfr1, 11, 3,
       VAR_50);

 VAR_49[VAR_19] = FUNC_9("lpc", "lpc-ug",
        &VAR_48->sccr1, 30);
 VAR_49[VAR_28] = FUNC_9("nfc", "nfc-ug",
        &VAR_48->sccr1, 29);
 if (FUNC_19()) {
  VAR_49[VAR_30] = FUNC_9(
    "pata", "ips", &VAR_48->sccr1, 28);
 }

 for (VAR_63 = 0; VAR_63 < FUNC_25(); VAR_63++) {
  char VAR_65[12];
  FUNC_12(VAR_65, sizeof(VAR_65), "psc%d", VAR_63);
  VAR_49[VAR_33 + VAR_63] = FUNC_9(
    VAR_65, "ips", &VAR_48->sccr1, 27 - VAR_63);
  FUNC_10(&VAR_54[VAR_63], VAR_63);
 }
 VAR_49[VAR_34] = FUNC_9("psc-fifo", "ips",
             &VAR_48->sccr1, 15);
 if (FUNC_21()) {
  VAR_49[VAR_36] = FUNC_9(
    "sata", "ips", &VAR_48->sccr1, 14);
 }
 VAR_49[VAR_14] = FUNC_9("fec", "ips",
        &VAR_48->sccr1, 13);
 if (FUNC_20()) {
  VAR_49[VAR_31] = FUNC_9(
    "pci", "pci-ug", &VAR_48->sccr1, 11);
 }
 VAR_49[VAR_7] = FUNC_9("ddr", "ddr-ug",
        &VAR_48->sccr1, 10);
 if (FUNC_14()) {
  VAR_49[VAR_15] = FUNC_9(
    "fec2", "ips", &VAR_48->sccr1, 9);
 }

 VAR_49[VAR_9] = FUNC_9("diu", "diu-ug",
        &VAR_48->sccr2, 31);
 if (FUNC_13()) {
  VAR_49[VAR_3] = FUNC_9(
    "axe", "csb", &VAR_48->sccr2, 30);
 }
 VAR_49[VAR_27] = FUNC_9("mem", "ips",
        &VAR_48->sccr2, 29);
 VAR_49[VAR_45] = FUNC_9("usb1", "csb",
         &VAR_48->sccr2, 28);
 VAR_49[VAR_46] = FUNC_9("usb2", "csb",
         &VAR_48->sccr2, 27);
 VAR_49[VAR_16] = FUNC_9("i2c", "ips",
        &VAR_48->sccr2, 26);

 VAR_49[VAR_4] = FUNC_9("bdlc", "ips",
         &VAR_48->sccr2, 25);
 for (VAR_63 = 0; VAR_63 < FUNC_0(VAR_52); VAR_63++)
  FUNC_10(&VAR_52[VAR_63], VAR_63);
 VAR_49[VAR_37] = FUNC_9("sdhc", "sdhc-ug",
         &VAR_48->sccr2, 24);

 if (FUNC_23()) {
  VAR_49[VAR_42] = FUNC_9(
    "spdif", "ips", &VAR_48->sccr2, 23);
  FUNC_10(&VAR_55[0], 0);
 }
 if (FUNC_15()) {
  VAR_49[VAR_24] = FUNC_9(
    "mbx-bus", "mbx-bus-ug", &VAR_48->sccr2, 22);
  VAR_49[VAR_21] = FUNC_9(
    "mbx", "mbx-ug", &VAR_48->sccr2, 21);
  VAR_49[VAR_22] = FUNC_9(
    "mbx-3d", "mbx-3d-ug", &VAR_48->sccr2, 20);
 }
 VAR_49[VAR_17] = FUNC_9("iim", "csb",
        &VAR_48->sccr2, 19);
 if (FUNC_24()) {
  VAR_49[VAR_47] = FUNC_9(
    "viu", "csb", &VAR_48->sccr2, 18);
 }
 if (FUNC_22()) {
  VAR_49[VAR_38] = FUNC_9(
    "sdhc-2", "sdhc2-ug", &VAR_48->sccr2, 17);
 }

 if (FUNC_18()) {
  size_t VAR_66;
  for (VAR_66 = 0; VAR_66 < FUNC_0(VAR_53); VAR_66++)
   FUNC_10(&VAR_53[VAR_66], VAR_66);
 }





 VAR_64 = FUNC_4("psc_mclk_in");
 if (!VAR_64)
  VAR_64 = 25000000;
 VAR_49[VAR_35] = FUNC_8("psc_mclk_in", VAR_64);
 if (FUNC_16()) {
  VAR_64 = FUNC_4("can_clk_in");
  VAR_49[VAR_5] = FUNC_8(
    "can_clk_in", VAR_64);
 } else {
  VAR_64 = FUNC_4("spdif_tx_in");
  VAR_49[VAR_43] = FUNC_8(
    "spdif_tx_in", VAR_64);
  VAR_64 = FUNC_4("spdif_rx_in");
  VAR_49[VAR_43] = FUNC_8(
    "spdif_rx_in", VAR_64);
 }


 VAR_49[VAR_2] = FUNC_8("ac97", 24567000);






 FUNC_2(VAR_49[VAR_12]);
 FUNC_2(VAR_49[VAR_13]);
 FUNC_2(VAR_49[VAR_7]);
 FUNC_2(VAR_49[VAR_27]);
 FUNC_2(VAR_49[VAR_18]);
 FUNC_2(VAR_49[VAR_19]);
}
