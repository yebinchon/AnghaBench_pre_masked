
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int standard; int curr_symbol_rate; int mpeg_output_clock_rate; int constellation; } ;
struct drx_demod_instance {scalar_t__ my_common_attr; scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct TYPE_2__ {int enable_mpeg_output; } ;
struct drx_common_attr {int sys_clock_freq; TYPE_1__ mpeg_cfg; } ;
struct drx_cfg_mpeg_output {int enable_mpeg_output; int static_clk; int insert_rs_byte; int enable_parallel; int invert_data; int invert_err; int invert_str; int invert_val; int invert_clk; } ;


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
 int FUNC_0 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct drx_demod_instance *VAR_71, struct drx_cfg_mpeg_output *VAR_72)
{
 struct i2c_device_addr *VAR_73 = (struct i2c_device_addr *)(((void*)0));
 struct drxj_data *VAR_74 = (struct drxj_data *) (((void*)0));
 struct drx_common_attr *VAR_75 = (struct drx_common_attr *) (((void*)0));
 int VAR_76;
 u16 VAR_77 = 0;
 u16 VAR_78 = 0;
 u16 VAR_79 = 0;
 u32 VAR_80 = 0;
 u32 VAR_81 = 0;
 u32 VAR_82 = 0;
 u16 VAR_83 = 0;

 u16 VAR_84 =
     VAR_30 | VAR_29 |
     VAR_28 | VAR_27 |
     VAR_26 | VAR_25 |
     VAR_24 | VAR_23;


 if ((VAR_71 == ((void*)0)) || (VAR_72 == ((void*)0)))
  return -VAR_1;

 VAR_73 = VAR_71->my_i2c_dev_addr;
 VAR_74 = (struct drxj_data *) VAR_71->my_ext_attr;
 VAR_75 = (struct drx_common_attr *) VAR_71->my_common_attr;

 if (VAR_72->enable_mpeg_output == 1) {


  switch (VAR_74->standard) {
  case 131:
  case 130:
  case 129:
  case 128:
   break;
  default:
   return 0;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_41, 0, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  switch (VAR_74->standard) {
  case 131:
   VAR_76 = FUNC_2(VAR_73, VAR_20, 7, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_47, 10, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_49, 10, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_3, 5, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_5, 7, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_43, 10, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }

   VAR_76 = FUNC_2(VAR_73, VAR_46, 3, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }

   VAR_76 = FUNC_2(VAR_73, VAR_45, 5, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   break;
  case 130:
  case 128:
   switch (VAR_74->constellation) {
   case 134:
    VAR_82 = 8;
    break;
   case 136:
    VAR_82 = 7;
    break;
   case 132:
    VAR_82 = 6;
    break;
   case 133:
    VAR_82 = 5;
    break;
   case 135:
    VAR_82 = 4;
    break;
   default:
    return -VAR_2;
   }


   VAR_80 =
       (VAR_74->curr_symbol_rate / 8) * VAR_82 * 188;

  case 129:
   VAR_76 = FUNC_2(VAR_73, VAR_20, VAR_21, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_47, VAR_48, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_49, 5, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_3, VAR_4, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_5, VAR_6, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   if (VAR_72->static_clk == 1) {
    VAR_76 = FUNC_2(VAR_73, VAR_43, 0xD, 0);
    if (VAR_76 != 0) {
     FUNC_4("error %d\n", VAR_76);
     goto rw_error;
    }
   } else {
    VAR_76 = FUNC_2(VAR_73, VAR_43, VAR_44, 0);
    if (VAR_76 != 0) {
     FUNC_4("error %d\n", VAR_76);
     goto rw_error;
    }
   }
   VAR_76 = FUNC_2(VAR_73, VAR_46, 2, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_45, 12, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   break;
  default:
   break;
  }


  VAR_76 = FUNC_1(VAR_73, VAR_40, &VAR_77, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_1(VAR_73, VAR_37, &VAR_78, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  if (VAR_72->insert_rs_byte == 1) {

   VAR_77 |= VAR_38;

   VAR_78 |= VAR_35;
   switch (VAR_74->standard) {
   case 131:
    VAR_81 = 0x004854D3;
    break;
   case 129:
    VAR_77 |= VAR_39;
    switch (VAR_74->constellation) {
    case 134:
     VAR_81 = 0x008945E7;
     break;
    case 132:
     VAR_81 = 0x005F64D4;
     break;
    default:
     return -VAR_2;
    }
    break;
   case 130:
   case 128:

    VAR_81 =
        (FUNC_3
         (VAR_80,
          (u32) (VAR_75->sys_clock_freq / 8))) /
        188;
    break;
   default:
    return -VAR_2;
   }
  } else {


   VAR_77 &= (~VAR_38);

   VAR_78 &= (~VAR_35);
   switch (VAR_74->standard) {
   case 131:
    VAR_81 = 0x0041605C;
    break;
   case 129:
    VAR_77 &= (~VAR_39);
    switch (VAR_74->constellation) {
    case 134:
     VAR_81 = 0x0082D6A0;
     break;
    case 132:
     VAR_81 = 0x005AEC1A;
     break;
    default:
     return -VAR_2;
    }
    break;
   case 130:
   case 128:

    VAR_81 =
        (FUNC_3
         (VAR_80,
          (u32) (VAR_75->sys_clock_freq / 8))) /
        204;
    break;
   default:
    return -VAR_2;
   }
  }

  if (VAR_72->enable_parallel == 1) {
   VAR_78 &= (~(VAR_36));
  } else {
   VAR_78 |= VAR_36;
  }


  if (VAR_72->invert_data == 1)
   VAR_79 |= VAR_84;
  else
   VAR_79 &= (~(VAR_84));

  if (VAR_72->invert_err == 1)
   VAR_79 |= VAR_31;
  else
   VAR_79 &= (~(VAR_31));

  if (VAR_72->invert_str == 1)
   VAR_79 |= VAR_32;
  else
   VAR_79 &= (~(VAR_32));

  if (VAR_72->invert_val == 1)
   VAR_79 |= VAR_33;
  else
   VAR_79 &= (~(VAR_33));

  if (VAR_72->invert_clk == 1)
   VAR_79 |= VAR_22;
  else
   VAR_79 &= (~(VAR_22));


  if (VAR_72->static_clk == 1) {
   u32 VAR_85 = 0;
   u32 VAR_86 = 0;
   u16 VAR_87 = 0;
   u16 VAR_88 = 0;

   VAR_87 = VAR_8;

   switch (VAR_74->standard) {
   case 131:
    VAR_88 = 4;
    if (VAR_72->insert_rs_byte == 1)
     VAR_87 = 208;
    break;
   case 130:
    {
     u32 VAR_89 = 6400000;
     if (VAR_72->insert_rs_byte == 1) {
      VAR_87 = 204;
      VAR_89 = 5900000;
     }
     if (VAR_74->curr_symbol_rate >=
         VAR_89) {
      VAR_88 = 0;
     } else {
      VAR_88 = 1;
     }
    }
    break;
   case 129:
    VAR_88 = 1;
    if (VAR_72->insert_rs_byte == 1)
     VAR_87 = 128;
    break;
   case 128:
    VAR_88 = 1;
    if (VAR_72->insert_rs_byte == 1)
     VAR_87 = 204;
    break;
   default:
    return -VAR_2;
   }
   VAR_86 =
       VAR_75->sys_clock_freq * 1000 / (VAR_88 +
              2);
   VAR_85 =
       FUNC_3(VAR_86, VAR_75->sys_clock_freq * 1000);
   VAR_85 >>= 3;
   VAR_76 = FUNC_2(VAR_73, VAR_13, (u16)((VAR_85 >> 16) & VAR_14), 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_16, (u16)(VAR_85 & VAR_15), 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_11, VAR_9 | VAR_10, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_19, VAR_17 | VAR_18, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_7, VAR_87, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   if (VAR_74->mpeg_output_clock_rate != VAR_0)
    VAR_88 = VAR_74->mpeg_output_clock_rate - 1;
   VAR_76 = FUNC_2(VAR_73, VAR_12, VAR_88, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
  } else {

   VAR_76 = FUNC_2(VAR_73, VAR_11, VAR_9, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_19, 0, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
  }

  VAR_76 = FUNC_0(VAR_73, VAR_42, VAR_81, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }


  VAR_76 = FUNC_2(VAR_73, VAR_40, VAR_77, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_37, VAR_78, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_34, VAR_79, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }



  VAR_76 = FUNC_2(VAR_73, VAR_70, 0xFABA, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_68, 0x0013, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_66, 0x0013, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_55, VAR_50 << VAR_53 | 0x03 << VAR_54, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_69, 0x0013, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_83 =
      VAR_52 <<
      VAR_56 | 0x03 << VAR_57;
  VAR_76 = FUNC_2(VAR_73, VAR_58, VAR_83, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  if (VAR_72->enable_parallel == 1) {
   VAR_83 =
       VAR_51 <<
       VAR_56 | 0x03 <<
       VAR_57;
   VAR_76 = FUNC_2(VAR_73, VAR_58, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_59, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_60, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_61, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_62, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_63, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_64, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_65, VAR_83, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
  } else {
   VAR_76 = FUNC_2(VAR_73, VAR_59, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_60, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_61, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_62, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_63, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_64, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
   VAR_76 = FUNC_2(VAR_73, VAR_65, 0x0000, 0);
   if (VAR_76 != 0) {
    FUNC_4("error %d\n", VAR_76);
    goto rw_error;
   }
  }

  VAR_76 = FUNC_2(VAR_73, VAR_67, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_70, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
 } else {

  VAR_76 = FUNC_2(VAR_73, VAR_70, 0xFABA, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_68, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_66, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_55, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_69, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_58, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_59, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_60, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_61, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_62, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_63, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_64, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
  VAR_76 = FUNC_2(VAR_73, VAR_65, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_67, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }

  VAR_76 = FUNC_2(VAR_73, VAR_70, 0x0000, 0);
  if (VAR_76 != 0) {
   FUNC_4("error %d\n", VAR_76);
   goto rw_error;
  }
 }


 VAR_75->mpeg_cfg.enable_mpeg_output = VAR_72->enable_mpeg_output;

 return 0;
rw_error:
 return VAR_76;
}
