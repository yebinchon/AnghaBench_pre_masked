
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct fire_softc {int sc_dev; int sc_pcib_mtx; int sc_stats_ilu_err; int sc_stats_tlu_oe_non_fatal; int sc_stats_tlu_oe_tx_err; int sc_stats_tlu_oe_rx_err; int sc_stats_tlu_ce; int sc_stats_mmu_err; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fire_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct fire_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_89)
{
 struct fire_softc *VAR_90;
 device_t VAR_91;
 uint64_t VAR_92, VAR_93, VAR_94, VAR_95, VAR_96, VAR_97, VAR_98;
 uint64_t VAR_99, VAR_100, VAR_101, VAR_102, VAR_103;
 u_int VAR_104, VAR_105;

 VAR_104 = 0;
 VAR_90 = VAR_89;
 VAR_91 = VAR_90->sc_dev;
 FUNC_4(&VAR_90->sc_pcib_mtx);
 VAR_96 = FUNC_0(VAR_90, VAR_37);
 if ((VAR_96 & VAR_38) != 0) {
  VAR_93 = FUNC_0(VAR_90, VAR_7);
  if ((VAR_93 & VAR_8) != 0) {
   VAR_95 = FUNC_0(VAR_90, VAR_22);
   FUNC_3(VAR_91, "IMU error %#llx\n",
       (unsigned long long)VAR_95);
   if ((VAR_95 &
       VAR_13) != 0) {
    VAR_104 = 1;
    VAR_103 = FUNC_0(VAR_90,
        VAR_24);
    FUNC_3(VAR_91, "SCS error log %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_95 & VAR_14) != 0) {
    VAR_104 = 1;
    VAR_103 = FUNC_0(VAR_90,
        VAR_11);
    FUNC_3(VAR_91, "EQS error log %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_95 & (VAR_16 |
       VAR_18 |
       VAR_20 |
       VAR_21 |
       VAR_15 |
       VAR_19 |
       VAR_12 |
       VAR_17)) != 0) {
    VAR_104 = 1;
    VAR_103 = FUNC_0(VAR_90,
        VAR_23);
    FUNC_3(VAR_91, "RDS error log %#llx\n",
        (unsigned long long)VAR_103);
   }
  }
  if ((VAR_93 & VAR_9) != 0) {
   VAR_104 = 1;
   VAR_97 = FUNC_0(VAR_90, VAR_34);
   VAR_98 = FUNC_0(VAR_90,
       VAR_35);
   VAR_99 = FUNC_0(VAR_90,
       VAR_36);
   if ((VAR_97 & (VAR_28 |
       VAR_29 |
       VAR_30 |
       VAR_27 |
       VAR_32 |
       VAR_2 |
       VAR_84 |
       VAR_31)) != 0)
    VAR_104 = 1;
   else {
    VAR_90->sc_stats_mmu_err++;
    FUNC_1(VAR_90, VAR_33,
        VAR_97);
   }
   FUNC_3(VAR_91,
       "MMU error %#llx: TFAR %#llx TFSR %#llx\n",
       (unsigned long long)VAR_97,
       (unsigned long long)VAR_98,
       (unsigned long long)VAR_99);
  }
 }
 if ((VAR_96 & VAR_39) != 0) {
  VAR_101 = FUNC_0(VAR_90, VAR_40);
  if ((VAR_101 & VAR_44) != 0) {
   VAR_104 = 1;
   VAR_102 = FUNC_0(VAR_90,
       VAR_80);
   FUNC_3(VAR_91,
       "DLU/TLU uncorrectable error %#llx\n",
       (unsigned long long)VAR_102);
   if ((VAR_102 & (VAR_83 |
       VAR_88 |
       VAR_78 |
       VAR_79 |
       VAR_82 |
       VAR_6 |
       VAR_88)) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_70);
    FUNC_3(VAR_91,
        "receive header log %#llx\n",
        (unsigned long long)VAR_103);
    VAR_103 = FUNC_0(VAR_90,
        VAR_71);
    FUNC_3(VAR_91,
        "receive header log 2 %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_102 & VAR_76) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_74);
    FUNC_3(VAR_91,
        "transmit header log %#llx\n",
        (unsigned long long)VAR_103);
    VAR_103 = FUNC_0(VAR_90,
        VAR_75);
    FUNC_3(VAR_91,
        "transmit header log 2 %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_102 & VAR_77) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_25);
    FUNC_3(VAR_91,
        "link layer interrupt and status %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_102 & VAR_81) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_26);
    FUNC_3(VAR_91,
        "phy layer interrupt and status %#llx\n",
        (unsigned long long)VAR_103);
   }
  }
  if ((VAR_101 & VAR_41) != 0) {
   VAR_90->sc_stats_tlu_ce++;
   VAR_92 = FUNC_0(VAR_90,
       VAR_46);
   FUNC_3(VAR_91,
       "DLU/TLU correctable error %#llx\n",
       (unsigned long long)VAR_92);
   VAR_103 = FUNC_0(VAR_90,
       VAR_25);
   FUNC_3(VAR_91,
       "link layer interrupt and status %#llx\n",
       (unsigned long long)VAR_103);
   if ((VAR_92 & VAR_45) != 0) {
    FUNC_1(VAR_90,
        VAR_25, VAR_103);
    VAR_103 = FUNC_0(VAR_90,
        VAR_26);
    FUNC_3(VAR_91,
        "phy layer interrupt and status %#llx\n",
        (unsigned long long)VAR_103);
   }
   FUNC_1(VAR_90, VAR_47,
       VAR_92);
  }
  if ((VAR_101 & VAR_43) != 0) {
   VAR_105 = 0;
   VAR_100 = FUNC_0(VAR_90,
       VAR_56);
   FUNC_3(VAR_91, "DLU/TLU other event %#llx\n",
       (unsigned long long)VAR_100);
   if ((VAR_100 & (VAR_62 |
       VAR_63 |
       VAR_67 |
       VAR_65 |
       VAR_48)) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_68);
    FUNC_3(VAR_91,
        "receive header log %#llx\n",
        (unsigned long long)VAR_103);
    VAR_103 = FUNC_0(VAR_90,
        VAR_69);
    FUNC_3(VAR_91,
        "receive header log 2 %#llx\n",
        (unsigned long long)VAR_103);
    if ((VAR_100 & (VAR_62 |
        VAR_63 |
        VAR_67 |
        VAR_65)) != 0)
     VAR_104 = 1;
    else {
     VAR_90->sc_stats_tlu_oe_rx_err++;
     VAR_105 = 1;
    }
   }
   if ((VAR_100 & (VAR_62 |
       VAR_49 |
       VAR_67 |
       VAR_65)) != 0) {
    VAR_103 = FUNC_0(VAR_90,
        VAR_72);
    FUNC_3(VAR_91,
        "transmit header log %#llx\n",
        (unsigned long long)VAR_103);
    VAR_103 = FUNC_0(VAR_90,
        VAR_73);
    FUNC_3(VAR_91,
        "transmit header log 2 %#llx\n",
        (unsigned long long)VAR_103);
    if ((VAR_100 & (VAR_62 |
        VAR_49 |
        VAR_67 |
        VAR_65)) != 0)
     VAR_104 = 1;
    else {
     VAR_90->sc_stats_tlu_oe_tx_err++;
     VAR_105 = 1;
    }
   }
   if ((VAR_100 & (VAR_53 |
       VAR_51 |
       VAR_52 |
       VAR_5 |
       VAR_86 |
       VAR_4 |
       VAR_85)) != 0) {
    VAR_104 = 1;
    VAR_103 = FUNC_0(VAR_90,
        VAR_25);
    FUNC_3(VAR_91,
        "link layer interrupt and status %#llx\n",
        (unsigned long long)VAR_103);
   }
   if ((VAR_100 & (VAR_55 |
       VAR_50 |
       VAR_3 |
       VAR_87 |
       VAR_54)) != 0)
    VAR_104 = 1;
   if ((VAR_100 & (VAR_64 |
       VAR_61 |
       VAR_58 |
       VAR_59 |
       VAR_57 |
       VAR_60)) != 0)
    VAR_105 = 1;
   if (VAR_105 != 0) {
    VAR_90->sc_stats_tlu_oe_non_fatal++;
    FUNC_1(VAR_90,
        VAR_66, VAR_100);
    if ((VAR_100 & VAR_58) != 0)
     FUNC_1(VAR_90,
         VAR_25,
         FUNC_0(VAR_90,
         VAR_25));
   }
  }
  if ((VAR_101 & VAR_42) != 0) {
   VAR_94 = FUNC_0(VAR_90, VAR_10);
   FUNC_3(VAR_91, "ILU error %#llx\n",
       (unsigned long long)VAR_94);
   if ((VAR_94 & (VAR_1 |
       VAR_1)) != 0)
       VAR_104 = 1;
   else {
    VAR_90->sc_stats_ilu_err++;
    FUNC_1(VAR_90, VAR_10,
        VAR_94);
   }
  }
 }
 FUNC_5(&VAR_90->sc_pcib_mtx);
 if (VAR_104 != 0)
  FUNC_6("%s: fatal DMC/PEC error",
      FUNC_2(VAR_90->sc_dev));
 return (VAR_0);
}
