
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; int irq; } ;
struct he_tpd {int dummy; } ;
struct he_hsp {int dummy; } ;
struct he_dev {int media; int vcibits; int vpibits; int cells_per_row; int bytes_per_row; int r0_numrows; int tx_numrows; int r1_numrows; int r0_startrow; int tx_startrow; int r1_startrow; int cells_per_lbuf; int buffer_limit; int r0_numbuffs; int r1_numbuffs; int tx_numbuffs; unsigned int hsp_phys; scalar_t__ tbrq_peak; scalar_t__ rbpl_peak; scalar_t__ rbrq_peak; scalar_t__ irq_peak; TYPE_4__* atm_dev; scalar_t__ total_bw; TYPE_2__* cs_stper; int * hsp; struct pci_dev* pci_dev; int outstanding_tpds; int * tpd_pool; void** prod_id; int membase; } ;
struct atm_dev {void** esi; } ;
struct TYPE_10__ {int vpi_bits; int vci_bits; } ;
struct TYPE_11__ {TYPE_3__ ci_range; TYPE_1__* phy; int link_rate; } ;
struct TYPE_9__ {int pcr; scalar_t__ inuse; } ;
struct TYPE_8__ {int (* start ) (TYPE_4__*) ;} ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_2 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 struct he_dev* FUNC_3 (struct atm_dev*) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 scalar_t__ VAR_64 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_5 (int *) ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 scalar_t__ VAR_71 ;
 unsigned int FUNC_6 (int) ;
 int VAR_72 ;
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;
 scalar_t__ VAR_77 ;
 scalar_t__ VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 unsigned int FUNC_7 (int) ;
 scalar_t__ VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 unsigned int VAR_91 ;
 scalar_t__ VAR_92 ;
 int VAR_93 ;
 unsigned int FUNC_8 (int) ;
 int VAR_94 ;
 int VAR_95 ;
 unsigned int FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 unsigned int FUNC_11 (int) ;
 unsigned int FUNC_12 (int) ;
 scalar_t__ VAR_96 ;
 scalar_t__ VAR_97 ;
 scalar_t__ VAR_98 ;
 scalar_t__ VAR_99 ;
 int VAR_100 ;
 scalar_t__ VAR_101 ;
 unsigned int FUNC_13 (int) ;
 unsigned int FUNC_14 (int) ;
 scalar_t__ VAR_102 ;
 scalar_t__ VAR_103 ;
 unsigned int FUNC_15 (int) ;
 scalar_t__ VAR_104 ;
 scalar_t__ VAR_105 ;
 scalar_t__ VAR_106 ;
 unsigned int FUNC_16 (int) ;
 unsigned int FUNC_17 (int) ;
 unsigned int FUNC_18 (int) ;
 scalar_t__ VAR_107 ;
 unsigned int VAR_108 ;
 unsigned int FUNC_19 (int) ;
 unsigned int FUNC_20 (int) ;
 scalar_t__ VAR_109 ;
 scalar_t__ VAR_110 ;
 unsigned int FUNC_21 (int) ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int FUNC_22 (int) ;
 unsigned int FUNC_23 (int) ;
 scalar_t__ VAR_117 ;
 int VAR_118 ;
 unsigned int FUNC_24 (int) ;
 unsigned int FUNC_25 (int) ;
 scalar_t__ VAR_119 ;
 unsigned int FUNC_26 (int) ;
 unsigned int FUNC_27 (int) ;
 int VAR_120 ;
 scalar_t__ VAR_121 ;
 scalar_t__ VAR_122 ;
 scalar_t__ VAR_123 ;
 scalar_t__ VAR_124 ;
 scalar_t__ VAR_125 ;
 scalar_t__ VAR_126 ;
 unsigned int VAR_127 ;
 unsigned int FUNC_28 (int) ;
 unsigned int FUNC_29 (int) ;
 scalar_t__ VAR_128 ;
 unsigned int FUNC_30 (int) ;
 unsigned int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int * FUNC_31 (int *,int,unsigned int*,int ) ;
 int * FUNC_32 (char*,int *,int,int ,int ) ;
 int FUNC_33 (struct he_dev*) ;
 scalar_t__ FUNC_34 (struct he_dev*) ;
 scalar_t__ FUNC_35 (struct he_dev*,int ) ;
 unsigned int FUNC_36 (struct he_dev*) ;
 int FUNC_37 (struct he_dev*) ;
 int FUNC_38 (struct he_dev*) ;
 int FUNC_39 (struct he_dev*) ;
 int FUNC_40 (struct he_dev*) ;
 scalar_t__ FUNC_41 (struct he_dev*) ;
 scalar_t__ FUNC_42 (struct he_dev*) ;
 int FUNC_43 (TYPE_4__*,int ) ;
 int FUNC_44 (TYPE_4__*,int,int ) ;
 void* FUNC_45 (struct he_dev*,scalar_t__) ;
 unsigned int FUNC_46 (struct he_dev*,int ) ;
 int FUNC_47 (struct he_dev*,unsigned int,scalar_t__) ;
 int FUNC_48 (struct he_dev*,unsigned int,int ) ;
 int FUNC_49 (struct he_dev*,int ,int) ;
 int FUNC_50 (struct he_dev*,int ,int) ;
 int FUNC_51 (char*,...) ;
 int FUNC_52 (unsigned long,int ) ;
 int FUNC_53 (int) ;
 int VAR_132 ;
 int VAR_133 ;
 scalar_t__ FUNC_54 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_55 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_56 (struct pci_dev*,int ,int*) ;
 unsigned long FUNC_57 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_58 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_59 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_60 (struct pci_dev*,int ,int) ;
 void* FUNC_61 (struct he_dev*,scalar_t__) ;
 scalar_t__ VAR_134 ;
 int FUNC_62 (TYPE_4__*) ;
 int FUNC_63 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_64(struct atm_dev *VAR_135)
{
 struct he_dev *VAR_136;
 struct pci_dev *VAR_137;
 unsigned long VAR_138;

 u16 VAR_139;
 u32 VAR_140, VAR_141, VAR_142;
 u8 VAR_143, VAR_144;

 unsigned VAR_145;
 unsigned int VAR_146, VAR_147;
 int VAR_148, VAR_149;

 VAR_136 = FUNC_3(VAR_135);
 VAR_137 = VAR_136->pci_dev;

 VAR_138 = FUNC_57(VAR_137, 0);
 FUNC_4("membase = 0x%lx  irq = %d.\n", VAR_138, VAR_137->irq);






 if (FUNC_55(VAR_137, VAR_58, &VAR_140) != 0) {
  FUNC_51("can't read GEN_CNTL_0\n");
  return -VAR_21;
 }
 VAR_140 |= (VAR_79 | VAR_80 | VAR_66);
 if (FUNC_59(VAR_137, VAR_58, VAR_140) != 0) {
  FUNC_51("can't write GEN_CNTL_0.\n");
  return -VAR_21;
 }

 if (FUNC_56(VAR_137, VAR_85, &VAR_139) != 0) {
  FUNC_51("can't read PCI_COMMAND.\n");
  return -VAR_21;
 }

 VAR_139 |= (VAR_88 | VAR_87 | VAR_86);
 if (FUNC_60(VAR_137, VAR_85, VAR_139) != 0) {
  FUNC_51("can't enable memory.\n");
  return -VAR_21;
 }

 if (FUNC_54(VAR_137, VAR_84, &VAR_143)) {
  FUNC_51("can't read cache line size?\n");
  return -VAR_21;
 }

 if (VAR_143 < 16) {
  VAR_143 = 16;
  if (FUNC_58(VAR_137, VAR_84, VAR_143))
   FUNC_51("can't set cache line size to %d\n", VAR_143);
 }

 if (FUNC_54(VAR_137, VAR_89, &VAR_144)) {
  FUNC_51("can't read latency timer?\n");
  return -VAR_21;
 }
 if (VAR_144 < 209) {
  FUNC_4("latency timer was %d, setting to %d\n", VAR_144, 209);
  VAR_144 = 209;
  if (FUNC_58(VAR_137, VAR_89, VAR_144))
   FUNC_51("can't set latency timer to %d\n", VAR_144);
 }

 if (!(VAR_136->membase = FUNC_52(VAR_138, VAR_63))) {
  FUNC_51("can't set up page mapping\n");
  return -VAR_21;
 }


 FUNC_47(VAR_136, 0x0, VAR_102);
 FUNC_47(VAR_136, 0xff, VAR_102);

 FUNC_53(16);
 VAR_146 = FUNC_45(VAR_136, VAR_102);
 if ((VAR_146 & VAR_5) == 0) {
  FUNC_51("reset failed\n");
  return -VAR_21;
 }


 VAR_141 = FUNC_45(VAR_136, VAR_64);
 if (VAR_141 & VAR_83)
  VAR_140 |= VAR_22;
 else
  VAR_140 &= ~VAR_22;

 if (VAR_131 == 1) {
  FUNC_51("disabling 64-bit pci bus transfers\n");
  VAR_140 &= ~VAR_22;
 }

 if (VAR_140 & VAR_22)
  FUNC_51("64-bit transfers enabled\n");

 FUNC_59(VAR_137, VAR_58, VAR_140);


 for (VAR_148 = 0; VAR_148 < VAR_93; ++VAR_148)
  VAR_136->prod_id[VAR_148] = FUNC_61(VAR_136, VAR_92 + VAR_148);

 VAR_136->media = FUNC_61(VAR_136, VAR_78);

 for (VAR_148 = 0; VAR_148 < 6; ++VAR_148)
  VAR_135->esi[VAR_148] = FUNC_61(VAR_136, VAR_76 + VAR_148);

 FUNC_51("%s%s, %pM\n", VAR_136->prod_id,
  VAR_136->media & 0x40 ? "SM" : "MM", VAR_135->esi);
 VAR_136->atm_dev->link_rate = FUNC_41(VAR_136) ?
      VAR_1 : VAR_2;


 VAR_142 = FUNC_45(VAR_136, VAR_74);
 if (FUNC_41(VAR_136))
  VAR_142 &= ~VAR_130;
 else
  VAR_142 |= VAR_130;



 VAR_142 &= ~(VAR_20 | VAR_68 | VAR_4 |
   VAR_17 | VAR_16 | VAR_19);

 FUNC_47(VAR_136, VAR_142, VAR_74);


 FUNC_47(VAR_136, FUNC_41(VAR_136) ? VAR_72 : 0x0, VAR_110);


 VAR_142 |= FUNC_22(0xf);
 FUNC_47(VAR_136, VAR_142, VAR_74);


 if ((VAR_145 = FUNC_36(VAR_136)) != 0)
  return VAR_145;


 VAR_141 |= (VAR_82 | VAR_7 |
    VAR_94 | VAR_95 | VAR_90);
 FUNC_47(VAR_136, VAR_141, VAR_64);

 VAR_140 |= VAR_69|VAR_67;
 FUNC_59(VAR_137, VAR_58, VAR_140);
 VAR_136->vcibits = VAR_8;
 VAR_136->vpibits = VAR_9;

 if (VAR_133 != -1 && VAR_132 != -1 && VAR_133+VAR_132 != VAR_60) {
  FUNC_51("nvpibits + nvcibits != %d\n", VAR_60);
  return -VAR_23;
 }

 if (VAR_133 != -1) {
  VAR_136->vpibits = VAR_133;
  VAR_136->vcibits = VAR_60 - VAR_133;
 }

 if (VAR_132 != -1) {
  VAR_136->vcibits = VAR_132;
  VAR_136->vpibits = VAR_60 - VAR_132;
 }


 if (FUNC_41(VAR_136)) {
  VAR_136->cells_per_row = 40;
  VAR_136->bytes_per_row = 2048;
  VAR_136->r0_numrows = 256;
  VAR_136->tx_numrows = 512;
  VAR_136->r1_numrows = 256;
  VAR_136->r0_startrow = 0;
  VAR_136->tx_startrow = 256;
  VAR_136->r1_startrow = 768;
 } else {
  VAR_136->cells_per_row = 20;
  VAR_136->bytes_per_row = 1024;
  VAR_136->r0_numrows = 512;
  VAR_136->tx_numrows = 1018;
  VAR_136->r1_numrows = 512;
  VAR_136->r0_startrow = 6;
  VAR_136->tx_startrow = 518;
  VAR_136->r1_startrow = 1536;
 }

 VAR_136->cells_per_lbuf = 4;
 VAR_136->buffer_limit = 4;
 VAR_136->r0_numbuffs = VAR_136->r0_numrows *
    VAR_136->cells_per_row / VAR_136->cells_per_lbuf;
 if (VAR_136->r0_numbuffs > 2560)
  VAR_136->r0_numbuffs = 2560;

 VAR_136->r1_numbuffs = VAR_136->r1_numrows *
    VAR_136->cells_per_row / VAR_136->cells_per_lbuf;
 if (VAR_136->r1_numbuffs > 2560)
  VAR_136->r1_numbuffs = 2560;

 VAR_136->tx_numbuffs = VAR_136->tx_numrows *
    VAR_136->cells_per_row / VAR_136->cells_per_lbuf;
 if (VAR_136->tx_numbuffs > 5120)
  VAR_136->tx_numbuffs = 5120;



 FUNC_47(VAR_136,
  FUNC_21(0x2) | FUNC_0(0xf) | FUNC_24(0x3) |
  FUNC_15(0x3) | FUNC_25(0x2) | FUNC_16(0x1) |
  (FUNC_41(VAR_136) ? FUNC_1(0x28) : FUNC_1(0x46)) |
  (FUNC_41(VAR_136) ? FUNC_7(0x50) : FUNC_7(0x8c)),
        VAR_71);

 FUNC_47(VAR_136, VAR_3 |
  (FUNC_41(VAR_136) ? (FUNC_14(0x384) | VAR_129) : FUNC_14(0x150)),
        VAR_109);

 FUNC_47(VAR_136,
  (FUNC_41(VAR_136) ? FUNC_17(1) : FUNC_17(0)) |
      FUNC_18(1), VAR_97);
 FUNC_47(VAR_136,
  (FUNC_41(VAR_136) ? FUNC_26(2) : FUNC_26(1)) |
      FUNC_27(1), VAR_117);

 FUNC_47(VAR_136, VAR_136->cells_per_lbuf * VAR_0, VAR_73);

 FUNC_47(VAR_136,
  (FUNC_41(VAR_136) ? FUNC_30(8) : FUNC_30(0)) |
  (FUNC_41(VAR_136) ? FUNC_13(0) : FUNC_13(1)) |
  FUNC_20(VAR_136->vpibits) |
  FUNC_19(VAR_136->vcibits), VAR_101);

 FUNC_47(VAR_136, FUNC_2(0x20) |
  (FUNC_41(VAR_136) ? FUNC_28(0) : FUNC_28(1)) |
  FUNC_29(VAR_136->vcibits) |
  FUNC_6(VAR_136->tx_numbuffs), VAR_126);

 FUNC_47(VAR_136, 0x0, VAR_125);

 FUNC_47(VAR_136, VAR_91 |
  (FUNC_41(VAR_136) ? FUNC_8(67 - 1) : FUNC_8(50 - 1)),
        VAR_103);



 for (VAR_148 = 0; VAR_148 < VAR_118; ++VAR_148)
  FUNC_50(VAR_136, 0, VAR_148);

 for (VAR_148 = 0; VAR_148 < VAR_100; ++VAR_148)
  FUNC_49(VAR_136, 0, VAR_148);
 FUNC_47(VAR_136, VAR_12, VAR_122);
 FUNC_47(VAR_136, VAR_13, VAR_123);
 FUNC_47(VAR_136, VAR_14, VAR_124);
 FUNC_47(VAR_136, VAR_10, VAR_119);
 FUNC_47(VAR_136, VAR_11, VAR_121);
 FUNC_47(VAR_136, 0x08000, VAR_98);
 FUNC_47(VAR_136, 0x0e000, VAR_99);
 FUNC_47(VAR_136, 0x0d800, VAR_96);



 FUNC_37(VAR_136);
 FUNC_38(VAR_136);

 FUNC_47(VAR_136, 0x0, VAR_104);
 FUNC_47(VAR_136, 0x0, VAR_106);
 FUNC_47(VAR_136, 0x0, VAR_105);

 FUNC_47(VAR_136, 512, VAR_107);
 FUNC_47(VAR_136, 256, VAR_75);

 FUNC_40(VAR_136);

 FUNC_47(VAR_136, FUNC_41(VAR_136) ? 0x104780 : 0x800, VAR_128);



 if (FUNC_41(VAR_136)) {
  FUNC_47(VAR_136, 0x000f, VAR_27);
  FUNC_47(VAR_136, 0x200f, VAR_26);

  FUNC_47(VAR_136, 0x001f, VAR_45);
  FUNC_47(VAR_136, 0x201f, VAR_44);

  FUNC_47(VAR_136, 0x002f, VAR_47);
  FUNC_47(VAR_136, 0x202f, VAR_46);

  FUNC_47(VAR_136, 0x003f, VAR_49);
  FUNC_47(VAR_136, 0x203f, VAR_48);

  FUNC_47(VAR_136, 0x004f, VAR_51);
  FUNC_47(VAR_136, 0x204f, VAR_50);

  FUNC_47(VAR_136, 0x005f, VAR_53);
  FUNC_47(VAR_136, 0x205f, VAR_52);

  FUNC_47(VAR_136, 0x006f, VAR_55);
  FUNC_47(VAR_136, 0x206f, VAR_54);

  FUNC_47(VAR_136, 0x007f, VAR_57);
  FUNC_47(VAR_136, 0x207f, VAR_56);
 } else {
  FUNC_47(VAR_136, 0x0000, VAR_27);
  FUNC_47(VAR_136, 0x0008, VAR_26);

  FUNC_47(VAR_136, 0x0001, VAR_45);
  FUNC_47(VAR_136, 0x0009, VAR_44);

  FUNC_47(VAR_136, 0x0002, VAR_47);
  FUNC_47(VAR_136, 0x000a, VAR_46);

  FUNC_47(VAR_136, 0x0003, VAR_49);
  FUNC_47(VAR_136, 0x000b, VAR_48);

  FUNC_47(VAR_136, 0x0004, VAR_51);
  FUNC_47(VAR_136, 0x000c, VAR_50);

  FUNC_47(VAR_136, 0x0005, VAR_53);
  FUNC_47(VAR_136, 0x000d, VAR_52);

  FUNC_47(VAR_136, 0x0006, VAR_55);
  FUNC_47(VAR_136, 0x000e, VAR_54);

  FUNC_47(VAR_136, 0x0007, VAR_57);
  FUNC_47(VAR_136, 0x000f, VAR_56);
 }



 FUNC_47(VAR_136, 0x0, VAR_77);
 FUNC_47(VAR_136, 0x0, VAR_81);
 FUNC_47(VAR_136, 0x0, VAR_18);
 FUNC_47(VAR_136, 0x0, VAR_6);



 FUNC_33(VAR_136);



 if (FUNC_34(VAR_136) < 0)
  return -VAR_24;



 FUNC_39(VAR_136);

 VAR_136->tpd_pool = FUNC_32("tpd", &VAR_136->pci_dev->dev,
        sizeof(struct he_tpd), VAR_120, 0);
 if (VAR_136->tpd_pool == ((void*)0)) {
  FUNC_51("unable to create tpd dma_pool\n");
  return -VAR_24;
 }

 FUNC_5(&VAR_136->outstanding_tpds);

 if (FUNC_35(VAR_136, 0) != 0)
  return -VAR_24;

 for (VAR_149 = 1; VAR_149 < VAR_62; ++VAR_149) {
  FUNC_47(VAR_136, 0x0, VAR_34 + (VAR_149 * 32));
  FUNC_47(VAR_136, 0x0, VAR_35 + (VAR_149 * 32));
  FUNC_47(VAR_136, 0x0, VAR_33 + (VAR_149 * 32));
  FUNC_47(VAR_136, FUNC_10(0x1) | FUNC_9(0x0),
      VAR_32 + (VAR_149 * 32));

  FUNC_47(VAR_136, 0x0, VAR_30 + (VAR_149 * 32));
  FUNC_47(VAR_136, 0x0, VAR_31 + (VAR_149 * 32));
  FUNC_47(VAR_136, FUNC_10(0x1) | FUNC_9(0x0),
      VAR_29 + (VAR_149 * 32));
  FUNC_47(VAR_136, 0x0, VAR_28 + (VAR_149 * 32));

  FUNC_47(VAR_136, 0x0, VAR_39 + (VAR_149 * 16));
  FUNC_47(VAR_136, 0x0, VAR_36 + (VAR_149 * 16));
  FUNC_47(VAR_136, FUNC_12(0x1) | FUNC_11(0x0),
      VAR_38 + (VAR_149 * 16));
  FUNC_47(VAR_136, 0x0, VAR_37 + (VAR_149 * 16));

  FUNC_47(VAR_136, 0x0, VAR_40 + (VAR_149 * 16));
  FUNC_47(VAR_136, 0x0, VAR_41 + (VAR_149 * 16));
  FUNC_47(VAR_136, FUNC_23(0x1),
      VAR_43 + (VAR_149 * 16));
  FUNC_47(VAR_136, 0x0, VAR_42 + (VAR_149 * 16));
 }



 VAR_136->hsp = FUNC_31(&VAR_136->pci_dev->dev,
      sizeof(struct he_hsp),
      &VAR_136->hsp_phys, VAR_59);
 if (VAR_136->hsp == ((void*)0)) {
  FUNC_51("failed to allocate host status page\n");
  return -VAR_24;
 }
 FUNC_47(VAR_136, VAR_136->hsp_phys, VAR_65);
 if (VAR_134) {

  int VAR_150;

  VAR_150 = FUNC_43(VAR_136->atm_dev, VAR_113);
  VAR_150 = (VAR_150 & ~VAR_114) | (VAR_116 << VAR_115);
  FUNC_44(VAR_136->atm_dev, VAR_150, VAR_113);
  FUNC_44(VAR_136->atm_dev, VAR_112, VAR_111);
 }



 VAR_147 = FUNC_46(VAR_136, VAR_15);
 VAR_147 |= VAR_127|VAR_25;
 FUNC_48(VAR_136, VAR_147, VAR_15);

 VAR_147 = FUNC_45(VAR_136, VAR_101);
 VAR_147 |= VAR_108;
 FUNC_47(VAR_136, VAR_147, VAR_101);

 for (VAR_148 = 0; VAR_148 < VAR_61; ++VAR_148) {
  VAR_136->cs_stper[VAR_148].inuse = 0;
  VAR_136->cs_stper[VAR_148].pcr = -1;
 }
 VAR_136->total_bw = 0;




 VAR_136->atm_dev->ci_range.vpi_bits = VAR_136->vpibits;
 VAR_136->atm_dev->ci_range.vci_bits = VAR_136->vcibits;

 VAR_136->irq_peak = 0;
 VAR_136->rbrq_peak = 0;
 VAR_136->rbpl_peak = 0;
 VAR_136->tbrq_peak = 0;

 FUNC_4("hell bent for leather!\n");

 return 0;
}
