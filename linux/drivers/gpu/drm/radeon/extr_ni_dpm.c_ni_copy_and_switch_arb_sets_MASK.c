
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int) ;

int FUNC_8(struct radeon_device *VAR_21,
    u32 VAR_22, u32 VAR_23)
{
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;

 switch (VAR_22) {
 case 131:
  VAR_24 = FUNC_1(VAR_4);
  VAR_25 = FUNC_1(VAR_5);
  VAR_26 = (FUNC_1(VAR_2) & VAR_13) >> VAR_14;
  break;
 case 130:
  VAR_24 = FUNC_1(VAR_9);
  VAR_25 = FUNC_1(VAR_6);
  VAR_26 = (FUNC_1(VAR_2) & VAR_15) >> VAR_16;
  break;
 case 129:
  VAR_24 = FUNC_1(VAR_10);
  VAR_25 = FUNC_1(VAR_7);
  VAR_26 = (FUNC_1(VAR_2) & VAR_17) >> VAR_18;
  break;
 case 128:
  VAR_24 = FUNC_1(VAR_11);
  VAR_25 = FUNC_1(VAR_8);
  VAR_26 = (FUNC_1(VAR_2) & VAR_19) >> VAR_20;
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_23) {
 case 131:
  FUNC_6(VAR_4, VAR_24);
  FUNC_6(VAR_5, VAR_25);
  FUNC_7(VAR_2, FUNC_2(VAR_26), ~VAR_13);
  break;
 case 130:
  FUNC_6(VAR_9, VAR_24);
  FUNC_6(VAR_6, VAR_25);
  FUNC_7(VAR_2, FUNC_3(VAR_26), ~VAR_15);
  break;
 case 129:
  FUNC_6(VAR_10, VAR_24);
  FUNC_6(VAR_7, VAR_25);
  FUNC_7(VAR_2, FUNC_4(VAR_26), ~VAR_17);
  break;
 case 128:
  FUNC_6(VAR_11, VAR_24);
  FUNC_6(VAR_8, VAR_25);
  FUNC_7(VAR_2, FUNC_5(VAR_26), ~VAR_19);
  break;
 default:
  return -VAR_1;
 }

 VAR_27 = FUNC_1(VAR_12) | 0x0000000F;
 FUNC_6(VAR_12, VAR_27);
 FUNC_7(VAR_3, FUNC_0(VAR_23), ~VAR_0);

 return 0;
}
