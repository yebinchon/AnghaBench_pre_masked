
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int sc_pci_secbus; } ;
struct schizo_softc {int sc_flags; int sc_dev; int sc_mtx; TYPE_1__ sc_ops; scalar_t__ sc_half; int sc_stats_pci_non_fatal; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct schizo_softc*,int ) ;
 int FUNC_3 (struct schizo_softc*,int ,int) ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int
FUNC_9(void *VAR_41)
{
 struct schizo_softc *VAR_42 = VAR_41;
 uint64_t VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;
 uint32_t VAR_48;
 u_int VAR_49;

 VAR_49 = 0;

 FUNC_6(VAR_42->sc_mtx);

 VAR_43 = FUNC_2(VAR_42, VAR_13);
 VAR_44 = FUNC_2(VAR_42, VAR_14);
 VAR_45 = FUNC_2(VAR_42, VAR_21);
 VAR_46 = FUNC_2(VAR_42, VAR_26);
 if ((VAR_42->sc_flags & VAR_8) != 0)
  VAR_47 = FUNC_2(VAR_42, VAR_33);
 else
  VAR_47 = 0;
 VAR_48 = FUNC_0(VAR_42->sc_dev, VAR_42->sc_ops.sc_pci_secbus,
     VAR_11, VAR_12, VAR_7, 2);





 if ((VAR_45 & VAR_22) != 0 &&
     (VAR_46 & VAR_28) != 0 &&
     ((VAR_48 & VAR_6) == 0 ||
     ((VAR_46 & VAR_29) != VAR_32 &&
     (VAR_46 & VAR_31) == 0 &&
     (VAR_46 & VAR_30) == 0)))
  VAR_49 = 1;
 else if ((VAR_48 & VAR_6) != 0)
  VAR_49 = 1;
 if ((VAR_48 & (VAR_2 | VAR_5 |
     VAR_3 | VAR_4 |
     VAR_1)) != 0 ||
     (VAR_45 & (VAR_9 | VAR_27 |
     VAR_25 | VAR_23 |
     VAR_10 | VAR_24)) != 0 ||
     (VAR_44 & (VAR_15 | VAR_18 |
     VAR_17 | VAR_16 | VAR_19 |
     VAR_20)) != 0)
  VAR_49 = 1;
 if (VAR_47 & (VAR_37 |
     VAR_38 | VAR_39 |
     VAR_40 | VAR_35 |
     VAR_36 | VAR_34))
  VAR_49 = 1;
 if (VAR_49 == 0)
  VAR_42->sc_stats_pci_non_fatal++;

 FUNC_5(VAR_42->sc_dev, "PCI bus %c error AFAR %#llx AFSR %#llx "
     "PCI CSR %#llx IOMMU %#llx PCI-X %#llx STATUS %#x\n",
     'A' + VAR_42->sc_half, (unsigned long long)VAR_43,
     (unsigned long long)VAR_44, (unsigned long long)VAR_45,
     (unsigned long long)VAR_46, (unsigned long long)VAR_47, VAR_48);


 FUNC_1(VAR_42->sc_dev, VAR_42->sc_ops.sc_pci_secbus, VAR_11,
     VAR_12, VAR_7, VAR_48, 2);
 FUNC_3(VAR_42, VAR_21, VAR_45);
 FUNC_3(VAR_42, VAR_14, VAR_44);
 FUNC_3(VAR_42, VAR_26, VAR_46);
 if ((VAR_42->sc_flags & VAR_8) != 0)
  FUNC_3(VAR_42, VAR_33, VAR_47);

 FUNC_7(VAR_42->sc_mtx);

 if (VAR_49 != 0)
  FUNC_8("%s: fatal PCI bus error",
      FUNC_4(VAR_42->sc_dev));
 return (VAR_0);
}
