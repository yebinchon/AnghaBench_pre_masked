
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 unsigned long VAR_30 ;
 unsigned long VAR_31 ;
 unsigned long VAR_32 ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 unsigned long VAR_35 ;
 int FUNC_0 (char*,int const,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,...) ;
 unsigned int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_36;
 unsigned int VAR_37;
 const int VAR_38 = 2 * sizeof(unsigned long);

 VAR_36 = FUNC_2();
 FUNC_0("PWField (0x%0*lx): GDI: 0x%02lx  UDI: 0x%02lx  MDI: 0x%02lx  PTI: 0x%02lx  PTEI: 0x%02lx\n",
  VAR_38, VAR_36,
  (VAR_36 & VAR_14) >> VAR_15,
  (VAR_36 & VAR_22) >> VAR_23,
  (VAR_36 & VAR_16) >> VAR_17,
  (VAR_36 & VAR_20) >> VAR_21,
  (VAR_36 & VAR_18) >> VAR_19);

 VAR_36 = FUNC_3();
 FUNC_0("PWSize  (0x%0*lx): PS: 0x%lx  GDW: 0x%02lx  UDW: 0x%02lx  MDW: 0x%02lx  PTW: 0x%02lx  PTEW: 0x%02lx\n",
  VAR_38, VAR_36,
  (VAR_36 & VAR_28) >> VAR_29,
  (VAR_36 & VAR_24) >> VAR_25,
  (VAR_36 & VAR_34) >> VAR_35,
  (VAR_36 & VAR_26) >> VAR_27,
  (VAR_36 & VAR_32) >> VAR_33,
  (VAR_36 & VAR_30) >> VAR_31);

 VAR_37 = FUNC_1();
 FUNC_0("PWCtl   (0x%x): PWEn: 0x%x  XK: 0x%x  XS: 0x%x  XU: 0x%x  DPH: 0x%x  HugePg: 0x%x  Psn: 0x%x\n",
  VAR_37,
  (VAR_37 & VAR_6) >> VAR_7,
  (VAR_37 & VAR_8) >> VAR_9,
  (VAR_37 & VAR_10) >> VAR_11,
  (VAR_37 & VAR_12) >> VAR_13,
  (VAR_37 & VAR_0) >> VAR_1,
  (VAR_37 & VAR_2) >> VAR_3,
  (VAR_37 & VAR_4) >> VAR_5);
}
