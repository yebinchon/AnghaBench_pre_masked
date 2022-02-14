
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vram_width; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__ mc; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct radeon_device *VAR_92, int VAR_93)
{
 uint32_t VAR_94;

 if (VAR_93) {
  if (VAR_92->flags & VAR_89) {
   VAR_94 = FUNC_2(VAR_67);
   if ((FUNC_1(VAR_39) &
        VAR_36) >
       VAR_35) {
    VAR_94 &=
        ~(VAR_70 |
          VAR_78);
   }
   VAR_94 &=
       ~(VAR_74 | VAR_71 |
         VAR_83 | VAR_80 |
         VAR_75 | VAR_79 |
         VAR_77 | VAR_81 |
         VAR_82);
   FUNC_3(VAR_67, VAR_94);
  } else if (FUNC_0(VAR_92)) {
   if ((VAR_92->family == VAR_2) ||
       (VAR_92->family == VAR_3)) {
    VAR_94 = FUNC_2(VAR_67);
    VAR_94 &=
        ~(VAR_72 |
          VAR_70 |
          VAR_74 |
          VAR_71 |
          VAR_83 |
          VAR_73 | VAR_30
          | VAR_75 |
          VAR_85 | VAR_25
          | VAR_24 | VAR_28
          | VAR_29 |
          VAR_84 |
          VAR_26 |
          VAR_76);
    VAR_94 |= VAR_42;
    VAR_94 |=
        VAR_83 |
        VAR_85;
    FUNC_3(VAR_67, VAR_94);

    VAR_94 = FUNC_2(VAR_86);
    VAR_94 &= ~VAR_87;
    VAR_94 |= VAR_88;
    FUNC_3(VAR_86, VAR_94);

    VAR_94 = FUNC_2(VAR_91);
    VAR_94 |= (VAR_59 |
     VAR_61);
    FUNC_3(VAR_91, VAR_94);

    VAR_94 = FUNC_2(VAR_58);
    VAR_94 |= (VAR_56 |
     VAR_57 |
     VAR_41 |
     VAR_13 |
     VAR_60 |
     VAR_63 |
     VAR_17 |
     VAR_64 |
     VAR_65 |
     VAR_18 |
     VAR_19 |
     VAR_15 |
     VAR_16);
    FUNC_3(VAR_58, VAR_94);
   } else if (VAR_92->family >= VAR_8) {
    VAR_94 = FUNC_2(VAR_21);
    VAR_94 &= ~(VAR_27 |
      VAR_23 |
      VAR_22);
    VAR_94 |= (VAR_32 |
     VAR_31 |
     VAR_20);
    FUNC_3(VAR_21, VAR_94);

    VAR_94 = FUNC_2(VAR_67);
    VAR_94 &=
        ~(VAR_72 |
          VAR_70 |
          VAR_74 |
          VAR_71 |
          VAR_83 |
          VAR_73 | VAR_30
          | VAR_75 |
          VAR_85 | VAR_25
          | VAR_24 | VAR_28
          | VAR_29 |
          VAR_84 |
          VAR_26 |
          VAR_76);
    VAR_94 |= VAR_42;
    FUNC_3(VAR_67, VAR_94);

    VAR_94 = FUNC_2(VAR_86);
    VAR_94 &= ~VAR_87;
    VAR_94 |= VAR_88;
    FUNC_3(VAR_86, VAR_94);

    VAR_94 = FUNC_2(VAR_91);
    VAR_94 |= (VAR_59 |
     VAR_61);
    FUNC_3(VAR_91, VAR_94);

    VAR_94 = FUNC_2(VAR_58);
    VAR_94 |= (VAR_56 |
     VAR_57 |
     VAR_41 |
     VAR_13 |
     VAR_60 |
     VAR_63 |
     VAR_17 |
     VAR_64 |
     VAR_65 |
     VAR_18 |
     VAR_19 |
     VAR_15 |
     VAR_16);
    FUNC_3(VAR_58, VAR_94);

    VAR_94 = FUNC_2(VAR_53);
    VAR_94 |= (VAR_54 |
     VAR_50);
    FUNC_3(VAR_53, VAR_94);

    VAR_94 = FUNC_2(VAR_52);
    VAR_94 |= (VAR_46 |
     VAR_47);

    VAR_94 &= ~(VAR_48 |
      VAR_49 |
      VAR_45);





    if ((VAR_94 & VAR_9) &&
        (VAR_94 & VAR_10)) {

     VAR_94 = FUNC_2(VAR_52);
     if (VAR_92->mc.vram_width == 64) {
      if (FUNC_1(VAR_55) &
          VAR_14)
       VAR_94 &=
           ~VAR_10;
      else
       VAR_94 &=
           ~VAR_9;
     } else {
      VAR_94 &= ~(VAR_9 |
        VAR_10);
     }
    }

    FUNC_3(VAR_52, VAR_94);
   } else {
    VAR_94 = FUNC_2(VAR_67);
    VAR_94 &= ~(VAR_30);
    VAR_94 |= VAR_70;
    FUNC_3(VAR_67, VAR_94);
    FUNC_4(15);

    VAR_94 = FUNC_2(VAR_21);
    VAR_94 &= ~(VAR_27 |
      VAR_23 |
      VAR_22);
    FUNC_3(VAR_21, VAR_94);
   }
  } else {
   VAR_94 = FUNC_2(VAR_38);

   VAR_94 &= ~(VAR_33 |
     VAR_40 |
     VAR_43);

   VAR_94 |= (VAR_44 |
    (0x01 << VAR_34));
   FUNC_3(VAR_38, VAR_94);
   FUNC_4(15);

   VAR_94 = FUNC_2(VAR_37);
   VAR_94 |= VAR_68;
   FUNC_3(VAR_37, VAR_94);
   FUNC_4(15);




   VAR_94 = FUNC_2(VAR_67);

   VAR_94 &= ~VAR_69;


   if (((VAR_92->family == VAR_6) &&
        ((FUNC_1(VAR_39) &
          VAR_36) <
         VAR_35))
       || ((VAR_92->family == VAR_4)
    &&
    ((FUNC_1(VAR_39) &
      VAR_36) <=
     VAR_35))) {
    VAR_94 |= VAR_70;
    VAR_94 |= VAR_85;
   }

   FUNC_3(VAR_67, VAR_94);

   if ((VAR_92->family == VAR_5) ||
       (VAR_92->family == VAR_6) ||
       (VAR_92->family == VAR_7)) {
    VAR_94 = FUNC_2(VAR_86);
    VAR_94 &= ~VAR_87;


    if (((VAR_92->family == VAR_5) ||
         (VAR_92->family == VAR_6)) &&
        ((FUNC_1(VAR_39) &
          VAR_36) <
         VAR_35)) {
     VAR_94 |= VAR_87;
    }
    FUNC_3(VAR_86, VAR_94);
    FUNC_4(15);
   }


   if (((VAR_92->family == VAR_5) ||
        (VAR_92->family == VAR_6)) &&
       ((FUNC_1(VAR_39) &
         VAR_36) <
        VAR_35)) {
    VAR_94 = FUNC_2(VAR_66);
    VAR_94 |= VAR_90;
    FUNC_3(VAR_66, VAR_94);
   }
   FUNC_4(15);


   VAR_94 = FUNC_2(VAR_58);
   VAR_94 |= (VAR_56 |
    VAR_57 |
    VAR_60 |
    VAR_63 |
    VAR_62 |
    VAR_64 |
    VAR_65);

   FUNC_3(VAR_58, VAR_94);
   FUNC_4(15);

   VAR_94 = FUNC_2(VAR_91);
   VAR_94 |= (VAR_59 |
    VAR_61);

   FUNC_3(VAR_91, VAR_94);
   FUNC_4(15);
  }
 } else {

  if (VAR_92->flags & VAR_89) {
   VAR_94 = FUNC_2(VAR_67);
   VAR_94 |= (VAR_70 | VAR_74 |
    VAR_71 | VAR_83
    | VAR_73 | VAR_80 |
    VAR_75 | VAR_85 |
    VAR_79 | VAR_77 |
    VAR_81 | VAR_82 |
    VAR_78);
   FUNC_3(VAR_67, VAR_94);
  } else if ((VAR_92->family == VAR_2) ||
      (VAR_92->family == VAR_3)) {
   VAR_94 = FUNC_2(VAR_67);
   VAR_94 |= (VAR_72 | VAR_70 |
    VAR_74 | VAR_71
    | VAR_83 | VAR_73 |
    VAR_30 | VAR_75 |
    VAR_85 | VAR_25 |
    VAR_24 | VAR_28 |
    VAR_29 | VAR_84 |
    VAR_26 | VAR_76);
   FUNC_3(VAR_67, VAR_94);

   VAR_94 = FUNC_2(VAR_86);
   VAR_94 |= VAR_87;
   FUNC_3(VAR_86, VAR_94);

   VAR_94 = FUNC_2(VAR_91);
   VAR_94 &= ~(VAR_59 |
     VAR_61 |
     VAR_12);
   FUNC_3(VAR_91, VAR_94);

   VAR_94 = FUNC_2(VAR_58);
   VAR_94 &= ~(VAR_56 |
     VAR_57 |
     VAR_41 |
     VAR_13 |
     VAR_60 |
     VAR_63 |
     VAR_17 |
     VAR_64 |
     VAR_65 |
     VAR_18 |
     VAR_19 |
     VAR_15 |
     VAR_16 |
     VAR_11);
   FUNC_3(VAR_58, VAR_94);
  } else if (VAR_92->family >= VAR_8) {

   VAR_94 = FUNC_2(VAR_21);
   VAR_94 |= (VAR_27 |
    VAR_23 | VAR_22);
   FUNC_3(VAR_21, VAR_94);

   VAR_94 = FUNC_2(VAR_67);
   VAR_94 |= (VAR_72 | VAR_70 |
    VAR_74 | VAR_71
    | VAR_83 | VAR_73 |
    VAR_30 | VAR_75 |
    VAR_85 | VAR_25 |
    VAR_24 | VAR_28 |
    VAR_29 | VAR_84 |
    VAR_26 | VAR_76);
   FUNC_3(VAR_67, VAR_94);

   VAR_94 = FUNC_2(VAR_86);
   VAR_94 |= VAR_87;
   FUNC_3(VAR_86, VAR_94);

   VAR_94 = FUNC_2(VAR_52);
   VAR_94 |= (VAR_46 |
    VAR_47 |
    VAR_48 |
    VAR_49 | VAR_45);
   FUNC_3(VAR_52, VAR_94);

   VAR_94 = FUNC_2(VAR_91);
   VAR_94 &= ~(VAR_59 |
     VAR_61 |
     VAR_12);
   FUNC_3(VAR_91, VAR_94);

   VAR_94 = FUNC_2(VAR_58);
   VAR_94 &= ~(VAR_56 |
     VAR_57 |
     VAR_41 |
     VAR_13 |
     VAR_60 |
     VAR_63 |
     VAR_17 |
     VAR_64 |
     VAR_65 |
     VAR_18 |
     VAR_19 |
     VAR_15 |
     VAR_16 |
     VAR_11);
   FUNC_3(VAR_58, VAR_94);
  } else {
   VAR_94 = FUNC_2(VAR_67);
   VAR_94 |= (VAR_70 | VAR_73);
   VAR_94 |= VAR_80;

   if (VAR_92->flags & VAR_89) {
    VAR_94 |= (VAR_78 |
     VAR_82 |
     VAR_81 |
     VAR_77 |
     VAR_79 |
     VAR_85 |
     VAR_75 |
     VAR_83 |
     VAR_71 |
     VAR_72 |
     VAR_74);
   } else if ((VAR_92->family == VAR_0) ||
       (VAR_92->family == VAR_1)) {
    VAR_94 |= (VAR_74 |
     VAR_71 |
     VAR_72 |
     VAR_83 |
     VAR_75 |
     VAR_85);
   }
   FUNC_3(VAR_67, VAR_94);

   FUNC_4(16);

   if ((VAR_92->family == VAR_0) ||
       (VAR_92->family == VAR_1)) {
    VAR_94 = FUNC_2(VAR_21);
    VAR_94 |= (VAR_27 |
     VAR_23 |
     VAR_22);
    FUNC_3(VAR_21, VAR_94);
    FUNC_4(16);
   }

   if (VAR_92->flags & VAR_51) {
    VAR_94 = FUNC_2(VAR_52);
    VAR_94 &= ~(VAR_46 |
      VAR_48);
    FUNC_3(VAR_52, VAR_94);
    FUNC_4(16);
   }

   if ((VAR_92->family == VAR_5) ||
       (VAR_92->family == VAR_6) ||
       (VAR_92->family == VAR_7)) {
    VAR_94 = FUNC_2(VAR_86);
    VAR_94 |= VAR_87;
    FUNC_3(VAR_86, VAR_94);
    FUNC_4(16);
   }

   VAR_94 = FUNC_2(VAR_58);
   VAR_94 &= ~(VAR_56 |
     VAR_57 |
     VAR_60 |
     VAR_63 |
     VAR_62 |
     VAR_64 |
     VAR_65);

   FUNC_3(VAR_58, VAR_94);
   FUNC_4(16);

   VAR_94 = FUNC_2(VAR_91);
   VAR_94 &= ~(VAR_59 |
     VAR_61);
   FUNC_3(VAR_91, VAR_94);
  }
 }
}
