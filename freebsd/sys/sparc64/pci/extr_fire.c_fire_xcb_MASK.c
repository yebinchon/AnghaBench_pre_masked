
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct fire_softc {scalar_t__ sc_mode; int sc_dev; int sc_pcib_mtx; int sc_stats_jbc_ce_async; int sc_stats_jbc_unsol_int; int sc_stats_jbc_unsol_rd; int sc_stats_ubc_dmardue; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct fire_softc*,int ) ;
 int FUNC_1 (struct fire_softc*,int ,unsigned long long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_7(void *VAR_48)
{
 struct fire_softc *VAR_49;
 device_t VAR_50;
 uint64_t VAR_51, VAR_52, VAR_53;
 u_int VAR_54;

 VAR_54 = 0;
 VAR_49 = VAR_48;
 VAR_50 = VAR_49->sc_dev;
 FUNC_4(&VAR_49->sc_pcib_mtx);
 if (VAR_49->sc_mode == VAR_43) {
  VAR_52 = FUNC_0(VAR_49, VAR_45);
  FUNC_3(VAR_50, "UBC error: interrupt status %#llx\n",
      (unsigned long long)VAR_52);
  if ((VAR_52 & ~(VAR_47 |
      VAR_46)) != 0)
   VAR_54 = 1;
  else
   VAR_49->sc_stats_ubc_dmardue++;
  if (VAR_54 != 0) {
   FUNC_5(&VAR_49->sc_pcib_mtx);
   FUNC_6("%s: fatal UBC core block error",
       FUNC_2(VAR_49->sc_dev));
  } else {
   FUNC_1(VAR_49, VAR_44, ~0ULL);
   FUNC_5(&VAR_49->sc_pcib_mtx);
  }
 } else {
  VAR_51 = FUNC_0(VAR_49, VAR_8);
  if ((VAR_51 & (VAR_11 |
      VAR_10 |
      VAR_9)) != 0) {
   VAR_52 = FUNC_0(VAR_49, VAR_45);
   FUNC_3(VAR_50, "JBC interrupt status %#llx\n",
       (unsigned long long)VAR_52);
   if ((VAR_52 & VAR_17) != 0) {
    VAR_53 = FUNC_0(VAR_49,
        VAR_12);
    FUNC_3(VAR_50, "CSR error log %#llx\n",
        (unsigned long long)VAR_53);
   }
   if ((VAR_52 & (VAR_40 |
       VAR_39)) != 0) {
    if ((VAR_52 &
        VAR_40) != 0)
     VAR_49->sc_stats_jbc_unsol_rd++;
    if ((VAR_52 &
        VAR_39) != 0)
     VAR_49->sc_stats_jbc_unsol_int++;
    VAR_53 = FUNC_0(VAR_49,
        VAR_1);
    FUNC_3(VAR_50,
        "DMCINT IDC error log %#llx\n",
        (unsigned long long)VAR_53);
   }
   if ((VAR_52 & (VAR_31 |
       VAR_32)) != 0) {
    VAR_54 = 1;
    VAR_53 = FUNC_0(VAR_49,
        VAR_42);
    FUNC_3(VAR_50,
        "merge transaction error log %#llx\n",
        (unsigned long long)VAR_53);
   }
   if ((VAR_52 & VAR_19) != 0) {
    VAR_54 = 1;
    VAR_53 = FUNC_0(VAR_49,
        VAR_6);
    FUNC_3(VAR_50,
        "JBCINT out transaction error log "
        "%#llx\n", (unsigned long long)VAR_53);
    VAR_53 = FUNC_0(VAR_49,
        VAR_7);
    FUNC_3(VAR_50,
        "JBCINT out transaction error log 2 "
        "%#llx\n", (unsigned long long)VAR_53);
   }
   if ((VAR_52 & (VAR_38 |
       VAR_15 |
       VAR_28 | VAR_24 |
       VAR_29 |
       VAR_18 |
       VAR_41 |
       VAR_37 |
       VAR_23 |
       VAR_22 |
       VAR_14)) != 0) {
    if ((VAR_52 & (VAR_38 |
        VAR_28 |
        VAR_24 |
        VAR_29 |
        VAR_18 |
        VAR_41 |
        VAR_37 |
        VAR_23 |
        VAR_22 |
        VAR_14)) != 0)
     VAR_54 = 1;
    else
     VAR_49->sc_stats_jbc_ce_async++;
    VAR_53 = FUNC_0(VAR_49,
        VAR_4);
    FUNC_3(VAR_50,
        "JBCINT in transaction error log %#llx\n",
        (unsigned long long)VAR_53);
    VAR_53 = FUNC_0(VAR_49,
        VAR_5);
    FUNC_3(VAR_50,
        "JBCINT in transaction error log 2 "
        "%#llx\n", (unsigned long long)VAR_53);
   }
   if ((VAR_52 & (VAR_36 |
       VAR_21 |
       VAR_35 |
       VAR_34 |
       VAR_33 |
       VAR_20)) != 0) {
    VAR_54 = 1;
    VAR_53 = FUNC_0(VAR_49,
        VAR_12);
    FUNC_3(VAR_50,
        "DMCINT ODCD error log %#llx\n",
        (unsigned long long)VAR_53);
   }
   if ((VAR_52 & (VAR_30 |
       VAR_16 | VAR_13 |
       VAR_33 |
       VAR_27 |
       VAR_25 |
       VAR_26)) != 0) {
    VAR_54 = 1;
    VAR_53 = FUNC_0(VAR_49,
        VAR_2);
    FUNC_3(VAR_50, "fatal error log %#llx\n",
        (unsigned long long)VAR_53);
    VAR_53 = FUNC_0(VAR_49,
        VAR_3);
    FUNC_3(VAR_50, "fatal error log 2 "
        "%#llx\n", (unsigned long long)VAR_53);
   }
   if (VAR_54 != 0) {
    FUNC_5(&VAR_49->sc_pcib_mtx);
    FUNC_6("%s: fatal JBC core block error",
        FUNC_2(VAR_49->sc_dev));
   } else {
    FUNC_1(VAR_49, VAR_44, ~0ULL);
    FUNC_5(&VAR_49->sc_pcib_mtx);
   }
  } else {
   FUNC_5(&VAR_49->sc_pcib_mtx);
   FUNC_6("%s: unknown JCB core block error status %#llx",
       FUNC_2(VAR_49->sc_dev),
       (unsigned long long)VAR_51);
  }
 }
 return (VAR_0);
}
