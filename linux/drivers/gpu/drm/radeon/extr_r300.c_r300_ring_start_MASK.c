
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {int num_gb_pipes; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 unsigned int VAR_41 ;
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
 int FUNC_1 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_3 (struct radeon_ring*,int) ;

void FUNC_4(struct radeon_device *VAR_52, struct radeon_ring *VAR_53)
{
 unsigned VAR_54;
 int VAR_55;


 VAR_54 = (VAR_3 | VAR_41);
 switch(VAR_52->num_gb_pipes) {
 case 2:
  VAR_54 |= VAR_33;
  break;
 case 3:
  VAR_54 |= VAR_35;
  break;
 case 4:
  VAR_54 |= VAR_34;
  break;
 case 1:
 default:
  VAR_54 |= VAR_36;
  break;
 }

 VAR_55 = FUNC_1(VAR_52, VAR_53, 64);
 if (VAR_55) {
  return;
 }
 FUNC_3(VAR_53, FUNC_0(VAR_46, 0));
 FUNC_3(VAR_53,
     VAR_44 |
     VAR_45 |
     VAR_48 |
     VAR_47);
 FUNC_3(VAR_53, FUNC_0(VAR_15, 0));
 FUNC_3(VAR_53, VAR_54);
 FUNC_3(VAR_53, FUNC_0(VAR_51, 0));
 FUNC_3(VAR_53,
     VAR_49 |
     VAR_50);
 FUNC_3(VAR_53, FUNC_0(VAR_2, 0));
 FUNC_3(VAR_53, VAR_32);
 FUNC_3(VAR_53, FUNC_0(VAR_14, 0));
 FUNC_3(VAR_53, 0);
 FUNC_3(VAR_53, FUNC_0(VAR_11, 0));
 FUNC_3(VAR_53, 0);
 FUNC_3(VAR_53, FUNC_0(VAR_39, 0));
 FUNC_3(VAR_53, VAR_37 | VAR_38);
 FUNC_3(VAR_53, FUNC_0(VAR_40, 0));
 FUNC_3(VAR_53, VAR_42 | VAR_43);
 FUNC_3(VAR_53, FUNC_0(VAR_51, 0));
 FUNC_3(VAR_53,
     VAR_49 |
     VAR_50);
 FUNC_3(VAR_53, FUNC_0(VAR_10, 0));
 FUNC_3(VAR_53, 0);
 FUNC_3(VAR_53, FUNC_0(VAR_39, 0));
 FUNC_3(VAR_53, VAR_37 | VAR_38);
 FUNC_3(VAR_53, FUNC_0(VAR_40, 0));
 FUNC_3(VAR_53, VAR_42 | VAR_43);
 FUNC_3(VAR_53, FUNC_0(VAR_12, 0));
 FUNC_3(VAR_53,
     ((6 << VAR_20) |
      (6 << VAR_26) |
      (6 << VAR_21) |
      (6 << VAR_27) |
      (6 << VAR_22) |
      (6 << VAR_28) |
      (6 << VAR_18) |
      (6 << VAR_17)));
 FUNC_3(VAR_53, FUNC_0(VAR_13, 0));
 FUNC_3(VAR_53,
     ((6 << VAR_23) |
      (6 << VAR_29) |
      (6 << VAR_24) |
      (6 << VAR_30) |
      (6 << VAR_25) |
      (6 << VAR_31) |
      (6 << VAR_19)));
 FUNC_3(VAR_53, FUNC_0(VAR_6, 0));
 FUNC_3(VAR_53, VAR_5 | VAR_7);
 FUNC_3(VAR_53, FUNC_0(VAR_8, 0));
 FUNC_3(VAR_53,
     VAR_4 | VAR_0);
 FUNC_3(VAR_53, FUNC_0(VAR_9, 0));
 FUNC_3(VAR_53,
     VAR_16 |
     VAR_1);
 FUNC_2(VAR_52, VAR_53, 0);
}
