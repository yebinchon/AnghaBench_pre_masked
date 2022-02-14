
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 size_t FUNC_0 (int *) ;


 int VAR_0 ;
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
 int * VAR_38 ;
 int * VAR_39 ;
 int * VAR_40 ;
 int * VAR_41 ;
 int * VAR_42 ;
 int * VAR_43 ;
 int FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_44, u32 VAR_45,
        u64 VAR_46)
{
 u8 VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
 u16 VAR_52;
 bool VAR_53, VAR_54, VAR_55, VAR_56;
 bool VAR_57, VAR_58;


 if (VAR_45 > VAR_36)
  return;





 if (VAR_45 == VAR_37)
  return;

 if (VAR_46 & VAR_35) {
  VAR_47 = ((VAR_46 >> VAR_23)
         & VAR_22);
  if (VAR_47 < FUNC_0(VAR_42)) {
   FUNC_1("%stransaction type: %s\n", VAR_44,
          VAR_42[VAR_47]);
  }
 }

 if (VAR_46 & VAR_29) {
  VAR_48 = ((VAR_46 >> VAR_11)
      & VAR_10);
  switch (VAR_45) {
  case 129:
   if (VAR_48 < FUNC_0(VAR_41)) {
    FUNC_1("%soperation type: %s\n", VAR_44,
           VAR_41[VAR_48]);
   }
   break;
  case 128:
   if (VAR_48 < FUNC_0(VAR_43)) {
    FUNC_1("%soperation type: %s\n", VAR_44,
           VAR_43[VAR_48]);
   }
   break;
  case 130:
   if (VAR_48 < FUNC_0(VAR_39)) {
    FUNC_1("%soperation type: %s\n", VAR_44,
           VAR_39[VAR_48]);
   }
   break;
  }
 }

 if (VAR_46 & VAR_27) {
  VAR_49 = ((VAR_46 >> VAR_7)
    & VAR_6);
  switch (VAR_45) {
  case 129:
   FUNC_1("%scache level: %d\n", VAR_44, VAR_49);
   break;
  case 128:
   FUNC_1("%sTLB level: %d\n", VAR_44, VAR_49);
   break;
  case 130:
   FUNC_1("%saffinity level at which the bus error occurred: %d\n",
          VAR_44, VAR_49);
   break;
  }
 }

 if (VAR_46 & VAR_32) {
  VAR_53 = ((VAR_46 >> VAR_15)
     & VAR_14);
  if (VAR_53)
   FUNC_1("%sprocessor context corrupted\n", VAR_44);
  else
   FUNC_1("%sprocessor context not corrupted\n", VAR_44);
 }

 if (VAR_46 & VAR_26) {
  VAR_54 = ((VAR_46 >> VAR_5)
        & VAR_4);
  if (VAR_54)
   FUNC_1("%sthe error has been corrected\n", VAR_44);
  else
   FUNC_1("%sthe error has not been corrected\n", VAR_44);
 }

 if (VAR_46 & VAR_31) {
  VAR_55 = ((VAR_46 >> VAR_17)
         & VAR_16);
  if (VAR_55)
   FUNC_1("%sPC is precise\n", VAR_44);
  else
   FUNC_1("%sPC is imprecise\n", VAR_44);
 }

 if (VAR_46 & VAR_33) {
  VAR_56 = ((VAR_46 >> VAR_19)
      & VAR_18);
  if (VAR_56)
   FUNC_1("%sProgram execution can be restarted reliably at the PC associated with the error.\n", VAR_44);
 }


 if (VAR_45 != 130)
  return;

 if (VAR_46 & VAR_30) {
  VAR_50 = ((VAR_46 >> VAR_13)
          & VAR_12);
  if (VAR_50 < FUNC_0(VAR_40)) {
   FUNC_1("%sparticipation type: %s\n", VAR_44,
          VAR_40[VAR_50]);
  }
 }

 if (VAR_46 & VAR_34) {
  VAR_57 = ((VAR_46 >> VAR_21)
       & VAR_20);
  if (VAR_57)
   FUNC_1("%srequest timed out\n", VAR_44);
 }

 if (VAR_46 & VAR_25) {
  VAR_51 = ((VAR_46 >> VAR_3)
     & VAR_2);
  if (VAR_51 < FUNC_0(VAR_38)) {
   FUNC_1("%saddress space: %s\n", VAR_44,
          VAR_38[VAR_51]);
  }
 }

 if (VAR_46 & VAR_28) {
  VAR_52 = ((VAR_46 >> VAR_9)
      & VAR_8);
  FUNC_1("%smemory access attributes:0x%x\n", VAR_44, VAR_52);
 }

 if (VAR_46 & VAR_24) {
  VAR_58 = ((VAR_46 >> VAR_1)
          & VAR_0);
  if (VAR_58)
   FUNC_1("%saccess mode: normal\n", VAR_44);
  else
   FUNC_1("%saccess mode: secure\n", VAR_44);
 }
}
