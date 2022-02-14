
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {int cc; int rt; size_t fmt; int cond; int fs; } ;
struct TYPE_16__ {int fmt; int ft; int fd; int func; int fs; void* opcode; } ;
struct TYPE_15__ {int op; int rt; int func; int fd; int fs; void* opcode; } ;
struct TYPE_14__ {int op; size_t fmt; int rt; int fs; } ;
struct TYPE_26__ {size_t fmt; int rt; int fs; } ;
struct TYPE_25__ {int rt; int rd; int func; int re; int rs; void* opcode; } ;
struct TYPE_24__ {int func; size_t fmt; int ft; int fd; int fs; int op; } ;
struct TYPE_23__ {size_t fmt; int cc; int fd; int fs; int op; } ;
struct TYPE_22__ {int op; int index; int fd; int base; } ;
struct TYPE_21__ {int func; int fd; int fs; int ft; int fr; void* opcode; } ;
struct TYPE_20__ {int fd; int fs; int ft; int fr; } ;
struct TYPE_19__ {int opcode; int rt; int rs; } ;
struct TYPE_18__ {int flag; int bc; void* opcode; } ;
union mips_instruction {TYPE_13__ mm_fp4_format; TYPE_12__ fp0_format; TYPE_11__ fp1_format; TYPE_10__ mm_fp1_format; TYPE_9__ mm_fp3_format; TYPE_8__ r_format; TYPE_7__ mm_fp0_format; TYPE_6__ mm_fp2_format; TYPE_5__ mm_fp5_format; TYPE_4__ fp6_format; TYPE_3__ mm_fp6_format; TYPE_2__ mm_i_format; TYPE_1__ fb_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
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
 int* VAR_64 ;
 int VAR_65 ;
 void** VAR_66 ;
 int VAR_67 ;
 void* VAR_68 ;
 int VAR_69 ;
 int* VAR_70 ;
 int VAR_71 ;

__attribute__((used)) static int FUNC_0(union mips_instruction *VAR_72)
{
 union mips_instruction VAR_73 = *VAR_72;
 union mips_instruction VAR_74 = VAR_73;
 int VAR_75, VAR_76, VAR_77;

 switch (VAR_73.mm_i_format.opcode) {
 case 141:
  VAR_74.mm_i_format.opcode = VAR_33;
  VAR_74.mm_i_format.rt = VAR_73.mm_i_format.rs;
  VAR_74.mm_i_format.rs = VAR_73.mm_i_format.rt;
  break;
 case 140:
  VAR_74.mm_i_format.opcode = VAR_35;
  VAR_74.mm_i_format.rt = VAR_73.mm_i_format.rs;
  VAR_74.mm_i_format.rs = VAR_73.mm_i_format.rt;
  break;
 case 129:
  VAR_74.mm_i_format.opcode = VAR_65;
  VAR_74.mm_i_format.rt = VAR_73.mm_i_format.rs;
  VAR_74.mm_i_format.rs = VAR_73.mm_i_format.rt;
  break;
 case 128:
  VAR_74.mm_i_format.opcode = VAR_69;
  VAR_74.mm_i_format.rt = VAR_73.mm_i_format.rs;
  VAR_74.mm_i_format.rs = VAR_73.mm_i_format.rt;
  break;
 case 130:

  if ((VAR_73.mm_i_format.rt == VAR_41) ||
      (VAR_73.mm_i_format.rt == VAR_42)) {
   VAR_74.fb_format.opcode = VAR_4;
   VAR_74.fb_format.bc = VAR_2;
   VAR_74.fb_format.flag =
    (VAR_73.mm_i_format.rt == VAR_42) ? 1 : 0;
  } else
   return VAR_1;
  break;
 case 131:
  switch (VAR_73.mm_fp0_format.func) {
  case 180:
  case 177:
  case 179:
  case 176:
  case 174:
  case 172:
  case 173:
  case 171:
   VAR_77 = VAR_73.mm_fp0_format.func;
   if (VAR_77 == 180)
    VAR_75 = VAR_38;
   else if (VAR_77 == 177)
    VAR_75 = VAR_37;
   else if (VAR_77 == 179)
    VAR_75 = VAR_61;
   else if (VAR_77 == 176)
    VAR_75 = VAR_60;
   else if (VAR_77 == 174)
    VAR_75 = VAR_57;
   else if (VAR_77 == 172)
    VAR_75 = VAR_56;
   else if (VAR_77 == 173)
    VAR_75 = VAR_63;
   else
    VAR_75 = VAR_62;
   VAR_74.fp6_format.opcode = VAR_5;
   VAR_74.fp6_format.fr = VAR_73.mm_fp6_format.fr;
   VAR_74.fp6_format.ft = VAR_73.mm_fp6_format.ft;
   VAR_74.fp6_format.fs = VAR_73.mm_fp6_format.fs;
   VAR_74.fp6_format.fd = VAR_73.mm_fp6_format.fd;
   VAR_74.fp6_format.func = VAR_75;
   break;
  case 178:
   VAR_75 = -1;
   VAR_77 = VAR_73.mm_fp5_format.op & 0x7;
   if (VAR_77 == VAR_51)
    VAR_75 = VAR_34;
   else if (VAR_77 == VAR_53)
    VAR_75 = VAR_67;
   else if (VAR_77 == VAR_52)
    VAR_75 = VAR_36;
   else if (VAR_77 == VAR_54)
    VAR_75 = VAR_71;

   if (VAR_75 != -1) {
    VAR_74.r_format.opcode = VAR_5;
    VAR_74.r_format.rs =
     VAR_73.mm_fp5_format.base;
    VAR_74.r_format.rt =
     VAR_73.mm_fp5_format.index;
    VAR_74.r_format.rd = 0;
    VAR_74.r_format.re = VAR_73.mm_fp5_format.fd;
    VAR_74.r_format.func = VAR_75;
   } else
    return VAR_1;
   break;
  case 175:
   VAR_77 = -1;
   if (VAR_73.mm_fp2_format.op == VAR_47)
    VAR_77 = 1;
   else if (VAR_73.mm_fp2_format.op == VAR_45)
    VAR_77 = 0;
   if (VAR_77 != -1) {
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_66[VAR_73.mm_fp2_format.fmt];
    VAR_74.fp0_format.ft =
     (VAR_73.mm_fp2_format.cc<<2) + VAR_77;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp2_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp2_format.fd;
    VAR_74.fp0_format.func = VAR_20;
   } else
    return VAR_1;
   break;
  case 170:
   VAR_75 = -1;
   if (VAR_73.mm_fp0_format.op == VAR_43)
    VAR_75 = VAR_9;
   else if (VAR_73.mm_fp0_format.op == VAR_50)
    VAR_75 = VAR_30;
   else if (VAR_73.mm_fp0_format.op == VAR_49)
    VAR_75 = VAR_23;
   else if (VAR_73.mm_fp0_format.op == VAR_44)
    VAR_75 = VAR_16;
   if (VAR_75 != -1) {
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_66[VAR_73.mm_fp0_format.fmt];
    VAR_74.fp0_format.ft =
     VAR_73.mm_fp0_format.ft;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp0_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp0_format.fd;
    VAR_74.fp0_format.func = VAR_75;
   } else
    return VAR_1;
   break;
  case 169:
   VAR_75 = -1;
   if (VAR_73.mm_fp0_format.op == VAR_46)
    VAR_75 = VAR_21;
   else if (VAR_73.mm_fp0_format.op == VAR_48)
    VAR_75 = VAR_22;
   if (VAR_75 != -1) {
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_66[VAR_73.mm_fp0_format.fmt];
    VAR_74.fp0_format.ft =
     VAR_73.mm_fp0_format.ft;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp0_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp0_format.fd;
    VAR_74.fp0_format.func = VAR_75;
   } else
    return VAR_1;
   break;
  case 168:
   switch (VAR_73.mm_fp1_format.op) {
   case 137:
   case 136:
   case 135:
   case 134:
    if ((VAR_73.mm_fp1_format.op & 0x7f) ==
        137)
     VAR_77 = 0;
    else
     VAR_77 = 1;
    VAR_74.r_format.opcode = VAR_68;
    VAR_74.r_format.rs = VAR_73.mm_fp4_format.fs;
    VAR_74.r_format.rt =
     (VAR_73.mm_fp4_format.cc << 2) + VAR_77;
    VAR_74.r_format.rd = VAR_73.mm_fp4_format.rt;
    VAR_74.r_format.re = 0;
    VAR_74.r_format.func = VAR_55;
    break;
   case 160:
   case 159:
   case 157:
   case 156:
    if ((VAR_73.mm_fp1_format.op & 0x7f) ==
        160) {
     VAR_75 = VAR_12;
     VAR_76 = VAR_70[VAR_73.mm_fp3_format.fmt];
    } else {
     VAR_75 = VAR_14;
     VAR_76 = VAR_7[VAR_73.mm_fp3_format.fmt];
    }
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt = VAR_76;
    VAR_74.fp0_format.ft = 0;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp3_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp3_format.rt;
    VAR_74.fp0_format.func = VAR_75;
    break;
   case 152:
   case 151:
   case 164:
   case 163:
   case 150:
   case 149:
    if ((VAR_73.mm_fp1_format.op & 0x7f) ==
        152)
     VAR_75 = VAR_19;
    else if ((VAR_73.mm_fp1_format.op & 0x7f) ==
      164)
     VAR_75 = VAR_8;
    else
     VAR_75 = VAR_24;
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_66[VAR_73.mm_fp3_format.fmt];
    VAR_74.fp0_format.ft = 0;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp3_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp3_format.rt;
    VAR_74.fp0_format.func = VAR_75;
    break;
   case 154:
   case 153:
   case 162:
   case 161:
   case 143:
   case 142:
   case 147:
   case 146:
   case 158:
   case 155:
    if (VAR_73.mm_fp1_format.op == 154)
     VAR_75 = VAR_18;
    else if (VAR_73.mm_fp1_format.op == 153)
     VAR_75 = VAR_17;
    else if (VAR_73.mm_fp1_format.op == 162)
     VAR_75 = VAR_11;
    else if (VAR_73.mm_fp1_format.op == 161)
     VAR_75 = VAR_10;
    else if (VAR_73.mm_fp1_format.op == 143)
     VAR_75 = VAR_32;
    else if (VAR_73.mm_fp1_format.op == 142)
     VAR_75 = VAR_31;
    else if (VAR_73.mm_fp1_format.op == 147)
     VAR_75 = VAR_27;
    else if (VAR_73.mm_fp1_format.op == 146)
     VAR_75 = VAR_26;
    else if (VAR_73.mm_fp1_format.op == 158)
     VAR_75 = VAR_13;
    else
     VAR_75 = VAR_15;
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_64[VAR_73.mm_fp1_format.fmt];
    VAR_74.fp0_format.ft = 0;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp1_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp1_format.rt;
    VAR_74.fp0_format.func = VAR_75;
    break;
   case 145:
   case 144:
   case 148:
    if (VAR_73.mm_fp1_format.op == 145)
     VAR_75 = VAR_28;
    else if (VAR_73.mm_fp1_format.op == 144)
     VAR_75 = VAR_29;
    else
     VAR_75 = VAR_25;
    VAR_74.fp0_format.opcode = VAR_4;
    VAR_74.fp0_format.fmt =
     VAR_66[VAR_73.mm_fp1_format.fmt];
    VAR_74.fp0_format.ft = 0;
    VAR_74.fp0_format.fs =
     VAR_73.mm_fp1_format.fs;
    VAR_74.fp0_format.fd =
     VAR_73.mm_fp1_format.rt;
    VAR_74.fp0_format.func = VAR_75;
    break;
   case 139:
   case 133:
   case 166:
   case 165:
   case 138:
   case 132:
    if (VAR_73.mm_fp1_format.op == 139)
     VAR_77 = VAR_39;
    else if (VAR_73.mm_fp1_format.op == 133)
     VAR_77 = VAR_58;
    else if (VAR_73.mm_fp1_format.op == 166)
     VAR_77 = VAR_3;
    else if (VAR_73.mm_fp1_format.op == 165)
     VAR_77 = VAR_6;
    else if (VAR_73.mm_fp1_format.op == 138)
     VAR_77 = VAR_40;
    else
     VAR_77 = VAR_59;
    VAR_74.fp1_format.opcode = VAR_4;
    VAR_74.fp1_format.op = VAR_77;
    VAR_74.fp1_format.rt =
     VAR_73.mm_fp1_format.rt;
    VAR_74.fp1_format.fs =
     VAR_73.mm_fp1_format.fs;
    VAR_74.fp1_format.fd = 0;
    VAR_74.fp1_format.func = 0;
    break;
   default:
    return VAR_1;
   }
   break;
  case 167:
   VAR_74.fp0_format.opcode = VAR_4;
   VAR_74.fp0_format.fmt =
    VAR_66[VAR_73.mm_fp4_format.fmt];
   VAR_74.fp0_format.ft = VAR_73.mm_fp4_format.rt;
   VAR_74.fp0_format.fs = VAR_73.mm_fp4_format.fs;
   VAR_74.fp0_format.fd = VAR_73.mm_fp4_format.cc << 2;
   VAR_74.fp0_format.func =
    VAR_73.mm_fp4_format.cond | VAR_0;
   break;
  default:
   return VAR_1;
  }
  break;
 default:
  return VAR_1;
 }

 *VAR_72 = VAR_74;
 return 0;
}
