
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_5(void)
{
 u16 VAR_30 = FUNC_0();

 switch (VAR_30) {
 case 135:
  return 300000000;

 case 134:
 {
  unsigned int VAR_31, VAR_32;

  VAR_31 = FUNC_2(VAR_23);
  VAR_32 = (VAR_31 & VAR_26)
    >> VAR_27;

  switch (VAR_32) {
  case 0x12:
  case 0x14:
  case 0x19:
   return 160000000;
  case 0x1c:
   return 192000000;
  case 0x13:
  case 0x15:
   return 200000000;
  case 0x1a:
   return 384000000;
  case 0x16:
   return 400000000;
  default:
   return 320000000;
  }

 }
 case 133:

  return 240000000;

 case 132:

  return 140000000;

 case 131:
 {
  unsigned int VAR_33, VAR_34, VAR_35, VAR_36;


  VAR_33 = FUNC_3(VAR_25);
  VAR_34 = (VAR_33 & VAR_19) >> VAR_20;
  VAR_35 = (VAR_33 & VAR_21) >> VAR_22;
  VAR_36 = (VAR_33 & VAR_17) >> VAR_18;
  VAR_34 += 1;
  VAR_35 += 2;
  VAR_36 += 1;
  return (16 * 1000000 * VAR_34 * VAR_35) / VAR_36;
 }

 case 130:
 {
  unsigned int VAR_37, VAR_38, VAR_39, VAR_40;


  VAR_37 = FUNC_1(VAR_1);
  VAR_38 = (VAR_37 & VAR_11) >> VAR_12;
  VAR_39 = (VAR_37 & VAR_13) >> VAR_14;
  VAR_40 = (VAR_37 & VAR_9) >> VAR_10;
  return (16 * 1000000 * VAR_38 * VAR_39) / VAR_40;
 }

 case 129:
 {
  unsigned int VAR_41, VAR_42;

  VAR_41 = FUNC_2(VAR_24);
  VAR_42 = (VAR_41 & VAR_28)
    >> VAR_29;
  switch (VAR_42) {
  case 0x03:
  case 0x0b:
  case 0x13:
  case 0x1b:
   return 240000000;
  case 0x04:
  case 0x0c:
  case 0x14:
  case 0x1c:
   return 160000000;
  case 0x05:
  case 0x0e:
  case 0x16:
  case 0x1e:
  case 0x1f:
   return 400000000;
  case 0x06:
   return 440000000;
  case 0x07:
  case 0x17:
   return 384000000;
  case 0x15:
  case 0x1d:
   return 200000000;
  default:
   return 320000000;
  }
 }
 case 128:
 {
  unsigned int VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;


  VAR_43 = FUNC_1(VAR_0);

  VAR_44 = (VAR_43 & VAR_5) >>
   VAR_6;

  VAR_45 = (VAR_43 & VAR_7) >>
   VAR_8;

  VAR_46 = (VAR_43 & VAR_3) >>
   VAR_4;

  VAR_43 = FUNC_1(VAR_2);
  VAR_47 = (VAR_43 & VAR_15) >>
   VAR_16;

  return (((64 * 1000000) / VAR_44) * VAR_45 * VAR_46) / VAR_47;
 }

 default:
  FUNC_4("Failed to detect clock for CPU with id=%04X\n", VAR_30);
 }
}
