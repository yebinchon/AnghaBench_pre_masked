
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dtv_frontend_properties {scalar_t__ inversion; int transmission_mode; int guard_interval; int hierarchy; int modulation; int code_rate_HP; int bandwidth_hz; } ;
struct drxd_state {scalar_t__ drxd_state; scalar_t__ cscd_state; int sys_clock_freq; scalar_t__ operation_mode; int noise_cal; scalar_t__ type_A; struct dtv_frontend_properties props; int rf_agc_cfg; int if_agc_cfg; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



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
 scalar_t__ VAR_51 ;
 int FUNC_0 (struct drxd_state*) ;
 int FUNC_1 (struct drxd_state*) ;
 int FUNC_2 (struct drxd_state*) ;
 int FUNC_3 (struct drxd_state*) ;
 int FUNC_4 (struct drxd_state*) ;
 int FUNC_5 (int,unsigned long long,int) ;
 scalar_t__ VAR_52 ;



 int FUNC_6 (struct drxd_state*,int ,int*,int ) ;
 int FUNC_7 (struct drxd_state*) ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_8 (struct drxd_state*,int ,int ,int ) ;
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
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int FUNC_9 (struct drxd_state*,int,int,int) ;
 int FUNC_10 (struct drxd_state*,int *) ;
 int FUNC_11 (struct drxd_state*,int *) ;
 int FUNC_12 (struct drxd_state*,int *) ;
 int FUNC_13 (struct drxd_state*,int,int) ;
 int FUNC_14 (struct drxd_state*) ;
 int FUNC_15 (struct drxd_state*) ;


 int FUNC_16 (struct drxd_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_17(struct drxd_state *VAR_103, s32 VAR_104)
{
 struct dtv_frontend_properties *VAR_105 = &VAR_103->props;
 int VAR_106;

 u16 VAR_107 = 0;
 u16 VAR_108 = 0;
 u16 VAR_109 = 0;
 u16 VAR_110 = 0;
 u16 VAR_111 = 0;
 u32 VAR_112 = 0;
 u32 VAR_113 = 0;
 int VAR_114;

 u16 VAR_115 = 0;
 u16 VAR_116 = 0;
 u16 VAR_117 = 0;
 u16 VAR_118 = 0;
 u16 VAR_119 = 0;
 u16 VAR_120 = 0;
 u16 VAR_121 = 0;
 u16 VAR_122 = 0;
 u16 VAR_123 = 0;
 u16 VAR_124 = 0;

 if (VAR_104 < 0)
  VAR_104 = (VAR_104 - 500) / 1000;
 else
  VAR_104 = (VAR_104 + 500) / 1000;

 do {
  if (VAR_103->drxd_state != VAR_7)
   return -1;
  VAR_106 = FUNC_7(VAR_103);
  if (VAR_106 < 0)
   break;
  if (VAR_103->type_A) {
   VAR_106 = FUNC_4(VAR_103);
   if (VAR_106 < 0)
    break;
  } else {
   VAR_106 = FUNC_3(VAR_103);
   if (VAR_106 < 0)
    break;
   VAR_106 = FUNC_1(VAR_103);
   if (VAR_106 < 0)
    break;
   VAR_106 = FUNC_0(VAR_103);
   if (VAR_106 < 0)
    break;
   VAR_106 = FUNC_2(VAR_103);
   if (VAR_106 < 0)
    break;
   VAR_106 = FUNC_4(VAR_103);
   if (VAR_106 < 0)
    break;
  }



  VAR_106 = FUNC_10(VAR_103, &VAR_103->if_agc_cfg);
  if (VAR_106 < 0)
   break;
  VAR_106 = FUNC_12(VAR_103, &VAR_103->rf_agc_cfg);
  if (VAR_106 < 0)
   break;

  VAR_114 = (VAR_103->props.inversion == VAR_51);

  switch (VAR_105->transmission_mode) {
  default:
   VAR_108 |= VAR_78;

  case 128:
   VAR_107 |= VAR_92;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_21, VAR_20, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_115 = 99;
    VAR_116 = 83;
    VAR_117 = 67;
   }
   break;
  case 129:
   VAR_107 |= VAR_91;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_21, VAR_19, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_115 = 97;
    VAR_116 = 71;
    VAR_117 = 65;
   }
   break;
  }

  switch (VAR_105->guard_interval) {
  case 138:
   VAR_107 |= VAR_85;
   break;
  case 137:
   VAR_107 |= VAR_86;
   break;
  case 140:
   VAR_107 |= VAR_83;
   break;
  case 139:
   VAR_107 |= VAR_84;
   break;
  default:
   VAR_108 |= VAR_76;

   VAR_107 |= VAR_85;
   break;
  }

  switch (VAR_105->hierarchy) {
  case 136:
   VAR_107 |= VAR_87;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_31, 0x0001, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_8, 0x0001, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_109 = VAR_44;
    VAR_110 = VAR_35;
    VAR_111 = VAR_39;

    VAR_118 =
        VAR_73;
    VAR_119 =
        VAR_63;
    VAR_120 =
        VAR_69;

    VAR_121 =
        VAR_72;
    VAR_122 =
        VAR_62;
    VAR_123 =
        VAR_68;
   }
   break;

  case 135:
   VAR_107 |= VAR_88;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_31, 0x0002, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_8, 0x0002, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_109 = VAR_44;
    VAR_110 = VAR_36;
    VAR_111 = VAR_40;

    VAR_118 =
        VAR_73;
    VAR_119 =
        VAR_59;
    VAR_120 =
        VAR_65;

    VAR_121 =
        VAR_72;
    VAR_122 =
        VAR_58;
    VAR_123 =
        VAR_64;
   }
   break;
  case 134:
   VAR_107 |= VAR_89;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_31, 0x0003, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_8, 0x0003, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_109 = VAR_44;
    VAR_110 = VAR_37;
    VAR_111 = VAR_41;

    VAR_118 =
        VAR_73;
    VAR_119 =
        VAR_61;
    VAR_120 =
        VAR_67;

    VAR_121 =
        VAR_72;
    VAR_122 =
        VAR_60;
    VAR_123 =
        VAR_66;
   }
   break;
  case 133:
  default:

   VAR_108 |= VAR_77;
   VAR_107 |= VAR_90;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_31, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_8, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_109 = VAR_43;
    VAR_110 = VAR_38;
    VAR_111 = VAR_42;

    VAR_118 =
        VAR_71;
    VAR_119 =
        VAR_63;
    VAR_120 =
        VAR_69;

    VAR_121 =
        VAR_70;
    VAR_122 =
        VAR_62;
    VAR_123 =
        VAR_68;
   }
   break;
  }
  if (VAR_106 < 0)
   break;

  switch (VAR_105->modulation) {
  default:
   VAR_108 |= VAR_75;

  case 131:
   VAR_107 |= VAR_81;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_32, 0x0002, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_12, VAR_10, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_18, 0x0020, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_16, 0x0008, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_17, 0x0002, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_106 = FUNC_16(VAR_103, VAR_34, VAR_111, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_33, VAR_117, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_30, VAR_120, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_29, VAR_123, 0x0000);
    if (VAR_106 < 0)
     break;
   }
   break;
  case 130:
   VAR_107 |= VAR_82;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_32, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_12, VAR_11, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_18, 0x0010, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_16, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_17, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_106 = FUNC_16(VAR_103, VAR_34, VAR_109, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_33, VAR_115, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_30, VAR_118, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_29, VAR_121, 0x0000);
    if (VAR_106 < 0)
     break;
   }
   break;

  case 132:
   VAR_107 |= VAR_80;
   if (VAR_103->type_A) {
    VAR_106 = FUNC_16(VAR_103, VAR_32, 0x0001, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_12, VAR_9, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_18, 0x0010, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_16, 0x0004, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_17, 0x0000, 0x0000);
    if (VAR_106 < 0)
     break;

    VAR_106 = FUNC_16(VAR_103, VAR_34, VAR_110, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_33, VAR_116, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_30, VAR_119, 0x0000);
    if (VAR_106 < 0)
     break;
    VAR_106 = FUNC_16(VAR_103, VAR_29, VAR_122, 0x0000);
    if (VAR_106 < 0)
     break;
   }
   break;

  }
  if (VAR_106 < 0)
   break;

  switch (147) {
  default:
  case 148:
  case 146:
   VAR_107 |= VAR_94;
   VAR_106 = FUNC_16(VAR_103, VAR_15, VAR_14, 0x0000);
   break;
  case 147:
   VAR_107 |= VAR_93;
   VAR_106 = FUNC_16(VAR_103, VAR_15, VAR_13, 0x0000);
   break;
  }

  switch (VAR_105->code_rate_HP) {
  case 145:
   VAR_107 |= VAR_95;
   if (VAR_103->type_A)
    VAR_106 = FUNC_16(VAR_103, VAR_27, VAR_22, 0x0000);
   break;
  default:
   VAR_108 |= VAR_79;

  case 144:
   VAR_107 |= VAR_96;
   if (VAR_103->type_A)
    VAR_106 = FUNC_16(VAR_103, VAR_27, VAR_23, 0x0000);
   break;
  case 143:
   VAR_107 |= VAR_97;
   if (VAR_103->type_A)
    VAR_106 = FUNC_16(VAR_103, VAR_27, VAR_24, 0x0000);
   break;
  case 142:
   VAR_107 |= VAR_98;
   if (VAR_103->type_A)
    VAR_106 = FUNC_16(VAR_103, VAR_27, VAR_25, 0x0000);
   break;
  case 141:
   VAR_107 |= VAR_99;
   if (VAR_103->type_A)
    VAR_106 = FUNC_16(VAR_103, VAR_27, VAR_26, 0x0000);
   break;
  }
  if (VAR_106 < 0)
   break;
  switch (VAR_105->bandwidth_hz) {
  case 0:
   VAR_105->bandwidth_hz = 8000000;

  case 8000000:

   VAR_113 = VAR_4;

   VAR_124 = 0;
   VAR_106 = FUNC_16(VAR_103,
      VAR_45, 50, 0x0000);
   break;
  case 7000000:

   VAR_113 = VAR_3;
   VAR_124 = 0x4807;
   VAR_106 = FUNC_16(VAR_103,
      VAR_45, 59, 0x0000);
   break;
  case 6000000:

   VAR_113 = VAR_2;
   VAR_124 = 0x0F07;
   VAR_106 = FUNC_16(VAR_103,
      VAR_45, 71, 0x0000);
   break;
  default:
   VAR_106 = -VAR_28;
  }
  if (VAR_106 < 0)
   break;

  VAR_106 = FUNC_16(VAR_103, VAR_55, VAR_124, 0x0000);
  if (VAR_106 < 0)
   break;

  {
   u16 VAR_125;
   VAR_106 = FUNC_6(VAR_103, VAR_57, &VAR_125, 0);
   if (VAR_106 < 0)
    break;



   if ((VAR_105->transmission_mode == 129) &&
       (VAR_105->guard_interval == 139)) {

    VAR_125 |= VAR_56;
   } else {

    VAR_125 &= ~VAR_56;
   }
   VAR_106 = FUNC_16(VAR_103, VAR_57, VAR_125, 0);
   if (VAR_106 < 0)
    break;
  }

  VAR_106 = FUNC_11(VAR_103, &VAR_103->noise_cal);
  if (VAR_106 < 0)
   break;

  if (VAR_103->cscd_state == VAR_0) {

   VAR_106 = FUNC_16(VAR_103, VAR_101, VAR_5, 0x0000);
   if (VAR_106 < 0)
    break;

   VAR_103->cscd_state = VAR_1;
  }




  VAR_112 = FUNC_5(VAR_103->sys_clock_freq * 1000,
        (1ULL << 21), VAR_113) - (1 << 23);
  VAR_106 = FUNC_16(VAR_103, VAR_46, (u16) (VAR_112 & VAR_47), 0x0000);
  if (VAR_106 < 0)
   break;
  VAR_106 = FUNC_16(VAR_103, VAR_49, (u16) ((VAR_112 >> VAR_48) & VAR_50), 0x0000);
  if (VAR_106 < 0)
   break;



  FUNC_13(VAR_103, VAR_104, VAR_114);




  VAR_106 = FUNC_16(VAR_103, VAR_54, 0, 0x0000);
  if (VAR_106 < 0)
   break;
  VAR_106 = FUNC_16(VAR_103, VAR_53, 1, 0x0000);
  if (VAR_106 < 0)
   break;



  VAR_108 = (VAR_78 |
     VAR_76 |
     VAR_75 |
     VAR_77 |
     VAR_79);

  VAR_106 = FUNC_9(VAR_103, 0x0000, VAR_107, VAR_108);
  if (VAR_106 < 0)
   break;


  VAR_106 = FUNC_8(VAR_103, VAR_100, VAR_102, VAR_74);
  if (VAR_106 < 0)
   break;

  VAR_106 = FUNC_15(VAR_103);
  if (VAR_106 < 0)
   break;

  if (VAR_103->operation_mode != VAR_52) {
   VAR_106 = FUNC_14(VAR_103);
   if (VAR_106 < 0)
    break;
  }

  VAR_103->drxd_state = VAR_6;
 } while (0);

 return VAR_106;
}
