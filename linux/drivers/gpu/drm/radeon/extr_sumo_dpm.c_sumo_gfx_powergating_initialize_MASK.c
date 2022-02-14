
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int FUNC_7 (int) ;
 int VAR_11 ;
 int FUNC_8 (int) ;
 int VAR_12 ;
 int FUNC_9 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (int ) ;
 int VAR_22 ;
 int FUNC_11 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int,int*,int*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_18(struct radeon_device *VAR_26)
{
 u32 VAR_27;
 u32 VAR_28, VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35 = FUNC_16(VAR_26);

 if (VAR_26->family == VAR_3) {
  VAR_30 = 4;
  VAR_32 = 10;
  VAR_33 = 10;
  VAR_34 = 4;
  VAR_31 = 50 + 1000/200 + 6 * 32;
 } else {
  VAR_30 = 16;
  VAR_32 = 50;
  VAR_33 = 50;
  VAR_34 = 50;
  VAR_31 = 113;
 }

 FUNC_12(VAR_2, 0x01B60A17);

 FUNC_15(VAR_24,
          VAR_35, 16, &VAR_28, &VAR_29);

 FUNC_13(VAR_1, FUNC_7(VAR_28) | FUNC_9(VAR_29),
   ~(VAR_11 | VAR_13));

 FUNC_15(VAR_25,
          VAR_35, 16, &VAR_28, &VAR_29);

 FUNC_13(VAR_0, FUNC_7(VAR_28) | FUNC_9(VAR_29),
   ~(VAR_11 | VAR_13));

 if (VAR_26->family == VAR_3) {
  FUNC_14(VAR_20, 0x10103210);
  FUNC_14(VAR_21, 0x10101010);
 } else {
  FUNC_14(VAR_20, 0x76543210);
  FUNC_14(VAR_21, 0xFEDCBA98);
 }

 VAR_27 = FUNC_10(VAR_15);
 VAR_27 &=
  ~(VAR_22 | VAR_10 | VAR_12);
 VAR_27 |= FUNC_6(VAR_30) | FUNC_8(1) | VAR_14;
 if (VAR_26->family == VAR_3) {
  VAR_27 &= ~VAR_9;
  VAR_27 |= FUNC_5(0x77);
 }
 FUNC_14(VAR_15, VAR_27);

 VAR_27 = FUNC_10(VAR_16);
 VAR_27 &= ~(VAR_8 | VAR_7);
 VAR_27 |= FUNC_4(VAR_31) | FUNC_3(50);
 FUNC_14(VAR_16, VAR_27);

 VAR_27 = FUNC_10(VAR_17);
 VAR_27 &= ~(VAR_5 | VAR_4);
 VAR_27 |= FUNC_1(VAR_32) | FUNC_0(50);
 FUNC_14(VAR_17, VAR_27);

 VAR_27 = FUNC_10(VAR_18);
 VAR_27 &= ~(VAR_23 | VAR_6);
 VAR_27 |= FUNC_11(VAR_33) | FUNC_2(VAR_34);
 FUNC_14(VAR_18, VAR_27);

 if (VAR_26->family == VAR_3)
  FUNC_14(VAR_19, 0xA02);

 FUNC_17(VAR_26);

 VAR_27 = FUNC_10(VAR_15);
 VAR_27 &=
  ~(VAR_22 | VAR_10 | VAR_12);
 VAR_27 |= FUNC_6(VAR_30) | FUNC_8(4) | VAR_14;
 if (VAR_26->family == VAR_3) {
  VAR_27 &= ~VAR_9;
  VAR_27 |= FUNC_5(0x77);
 }
 FUNC_14(VAR_15, VAR_27);

 if (VAR_26->family == VAR_3) {
  VAR_27 = FUNC_10(VAR_16);
  VAR_27 &= ~(VAR_8 | VAR_7);
  VAR_27 |= FUNC_4(113) | FUNC_3(50);
  FUNC_14(VAR_16, VAR_27);

  VAR_27 = FUNC_10(VAR_17);
  VAR_27 &= ~(VAR_5 | VAR_4);
  VAR_27 |= FUNC_1(16) | FUNC_0(50);
  FUNC_14(VAR_17, VAR_27);
 }

 FUNC_17(VAR_26);

 VAR_27 = FUNC_10(VAR_15);
 VAR_27 &=
  ~(VAR_22 | VAR_10 | VAR_12);
 VAR_27 |= FUNC_8(5) | VAR_14;

 if (VAR_26->family == VAR_3) {
  VAR_27 |= FUNC_6(4);
  VAR_27 &= ~VAR_9;
  VAR_27 |= FUNC_5(0x77);
 } else
  VAR_27 |= FUNC_6(11);
 FUNC_14(VAR_15, VAR_27);

 if (VAR_26->family == VAR_3) {
  VAR_27 = FUNC_10(VAR_16);
  VAR_27 &= ~(VAR_8 | VAR_7);
  VAR_27 |= FUNC_4(113) | FUNC_3(50);
  FUNC_14(VAR_16, VAR_27);

  VAR_27 = FUNC_10(VAR_17);
  VAR_27 &= ~(VAR_5 | VAR_4);
  VAR_27 |= FUNC_1(22) | FUNC_0(50);
  FUNC_14(VAR_17, VAR_27);
 }

 FUNC_17(VAR_26);
}
