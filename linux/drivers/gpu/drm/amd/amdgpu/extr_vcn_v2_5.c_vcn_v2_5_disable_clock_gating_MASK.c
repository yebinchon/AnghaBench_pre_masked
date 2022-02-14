
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_vcn_inst; int harvest_config; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ vcn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ,int ,int,int) ;
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
 int FUNC_2 (int ,int,int ,int) ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_84)
{
 uint32_t VAR_85;
 int VAR_86 = 0;
 int VAR_87;

 for (VAR_87 = 0; VAR_87 < VAR_84->vcn.num_vcn_inst; ++VAR_87) {
  if (VAR_84->vcn.harvest_config & (1 << VAR_87))
   continue;

  VAR_85 = FUNC_0(VAR_79, VAR_87, VAR_80);
  if (VAR_84->cg_flags & VAR_0)
   VAR_85 |= 1 << VAR_4;
  else
   VAR_85 &= ~VAR_3;
  VAR_85 |= 1 << VAR_1;
  VAR_85 |= 4 << VAR_2;
  FUNC_2(VAR_79, VAR_87, VAR_80, VAR_85);

  VAR_85 = FUNC_0(VAR_79, VAR_87, VAR_81);
  VAR_85 &= ~(VAR_36
   | VAR_40
   | VAR_32
   | VAR_35
   | VAR_34
   | VAR_27
   | VAR_28
   | VAR_25
   | VAR_33
   | VAR_31
   | VAR_26
   | VAR_29
   | VAR_42
   | VAR_37
   | VAR_39
   | VAR_38
   | VAR_41
   | VAR_44
   | VAR_43
   | VAR_30);

  FUNC_2(VAR_79, VAR_87, VAR_81, VAR_85);

  FUNC_1(VAR_79, VAR_87, VAR_81, 0, 0xFFFFFFFF, VAR_86);

  VAR_85 = FUNC_0(VAR_79, VAR_87, VAR_80);
  VAR_85 &= ~(VAR_22
   | VAR_17
   | VAR_19
   | VAR_18
   | VAR_21
   | VAR_16
   | VAR_20
   | VAR_12
   | VAR_15
   | VAR_14
   | VAR_7
   | VAR_8
   | VAR_5
   | VAR_13
   | VAR_11
   | VAR_6
   | VAR_9
   | VAR_24
   | VAR_23
   | VAR_10);
  FUNC_2(VAR_79, VAR_87, VAR_80, VAR_85);


  VAR_85 = FUNC_0(VAR_79, VAR_87, VAR_83);
  VAR_85 |= (VAR_76
   | VAR_71
   | VAR_73
   | VAR_60
   | VAR_64
   | VAR_74
   | VAR_75
   | VAR_67
   | VAR_70
   | VAR_58
   | VAR_59
   | VAR_62
   | VAR_63
   | VAR_57
   | VAR_78
   | VAR_55
   | VAR_68
   | VAR_69
   | VAR_66
   | VAR_77
   | VAR_61
   | VAR_72
   | VAR_65
   | VAR_56);
  FUNC_2(VAR_79, VAR_87, VAR_83, VAR_85);

  VAR_85 = FUNC_0(VAR_79, VAR_87, VAR_82);
  VAR_85 &= ~(VAR_53
   | VAR_51
   | VAR_52
   | VAR_48
   | VAR_49
   | VAR_47
   | VAR_54
   | VAR_45
   | VAR_46
   | VAR_50);
  FUNC_2(VAR_79, VAR_87, VAR_82, VAR_85);
 }
}
