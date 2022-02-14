
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ktr_syscall {int ktr_narg; int ktr_code; int* ktr_args; } ;
typedef int register_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int*,int,char) ;
 int FUNC_10 (int*,int*,int,char) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char) ;
 int VAR_9 ;
 int FUNC_14 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int ,int,int,int) ;
 int FUNC_16 (int) ;
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
 int FUNC_17 (int ,int) ;
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
 char* FUNC_18 (int,int) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;

void
FUNC_19(struct ktr_syscall *VAR_65, u_int VAR_66)
{
 int VAR_67 = VAR_65->ktr_narg;
 register_t *VAR_68, *VAR_69;
 intmax_t VAR_70;
 int VAR_71, VAR_72;

 FUNC_14(VAR_65->ktr_code, VAR_66);
 VAR_68 = VAR_69 = &VAR_65->ktr_args[0];
 if (VAR_67) {
  char VAR_73 = '(';
  if (VAR_8 &&
      (VAR_66 == 0 ||
      (VAR_66 & VAR_5) == VAR_4)) {
   VAR_71 = 0;
   if (VAR_66 & VAR_6) {



    VAR_72 = 2;
   } else
    VAR_72 = 1;
   switch (VAR_65->ktr_code) {
   case 224:
   case 221:
   case 219:
   case 216:
   case 213:
   case 212:
   case 205:
   case 203:
   case 191:
   case 184:
   case 182:
   case 181:
   case 171:
   case 165:
   case 161:
   case 134:
   case 132:
    FUNC_13('(');
    FUNC_4(VAR_12, *VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    break;
   }
   switch (VAR_65->ktr_code) {
   case 197: {
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(VAR_73);
    FUNC_2(*VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    break;
   }
   case 167:
    FUNC_13('(');
    FUNC_3(VAR_41, *VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    break;
   case 225:
   case 218:
   case 216:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_10, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 172:
   case 171:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_37, VAR_68[0]);
    if ((VAR_68[0] & VAR_1) == VAR_1) {
     FUNC_13(',');
     FUNC_1(VAR_68[1]);
    }
    VAR_68 += 2;
    VAR_67 -= 2;
    break;
   case 131:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_6(VAR_62, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 130:
    FUNC_13('(');
    FUNC_3(VAR_22, *VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    FUNC_10(VAR_69, VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_63, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 220:
   case 214:
   case 192:
   case 213:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_1(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 181:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_1(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 202:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_20, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 178:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_32, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 133:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_32, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 162:
   case 152:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_6(VAR_33, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 163:
   case 151:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_6(VAR_33, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 222:
   case 221:
   case 215:
   case 193:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_0(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 196:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_11(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 164:
    FUNC_13('(');
    FUNC_5(VAR_42, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 135:
    FUNC_13('(');
    FUNC_1(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 175:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_35, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;

   case 206:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_31, *VAR_68);
    FUNC_13(',');
    VAR_68++;
    VAR_67--;
    FUNC_5(VAR_30, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;

   case 179:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_31, *VAR_68);
    FUNC_13(',');
    VAR_68++;
    VAR_67--;
    FUNC_5(VAR_30, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 177:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_31, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 187:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_27, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 170:
   case 189:
   case 209:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_38, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 201:
   case 150:
    FUNC_13('(');
    FUNC_3(VAR_39, *VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    break;
   case 211:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_17, VAR_68[0]);
    if (FUNC_16(VAR_68[0])) {
     FUNC_13(',');
     if (VAR_68[0] == VAR_0)
      FUNC_5(
          VAR_18,
       VAR_68[1]);
     else
      FUNC_15(VAR_9,
          VAR_68[0], VAR_68[1],
          VAR_7 ? 10 : 16);
    }
    VAR_68 += 2;
    VAR_67 -= 2;
    break;
   case 142: {
    int VAR_74;
    FUNC_13('(');
    VAR_74 = *VAR_68;
    FUNC_3(VAR_55,
        VAR_74);
    VAR_68++;
    VAR_67--;
    FUNC_13(',');
    FUNC_5(VAR_54, *VAR_68);
    VAR_68++;
    VAR_67--;
    if (VAR_74 == VAR_2 ||
        VAR_74 == VAR_3) {
     FUNC_13(',');
     FUNC_3(VAR_23,
         *VAR_68);
     VAR_68++;
     VAR_67--;
    }
    VAR_73 = ',';
    break;
   }
   case 148:
   case 198: {
    const char *VAR_75;

    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_4(VAR_56,
        *VAR_68);
    VAR_75 = FUNC_18(VAR_68[0], VAR_68[1]);
    if (VAR_75 != ((void*)0)) {
     FUNC_12(",%s", VAR_75);
     VAR_68++;
     VAR_67--;
    }
    VAR_68++;
    VAR_67--;
    break;
   }

   case 207:
    FUNC_9(VAR_68, VAR_67, VAR_73);

    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_10(VAR_69, VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_64, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;

   case 188:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_10(VAR_69, VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_64, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 210:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_19, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 183:
   case 182:
   case 185:
   case 184:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_1(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 145:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_52, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 141:
    FUNC_13('(');
    FUNC_3(VAR_55, *VAR_68);
    VAR_68++;
    VAR_67--;
    FUNC_13(',');
    FUNC_5(VAR_54, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 200:
   case 149:
    FUNC_13('(');
    FUNC_3(VAR_44, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 199:
    FUNC_13('(');
    FUNC_3(VAR_21, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 166:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    if (!FUNC_17(VAR_9, *VAR_68)) {
     if (VAR_7)
      FUNC_12("<invalid=%d>", (int)*VAR_68);
     else
      FUNC_12("<invalid=%#x>",
          (int)*VAR_68);
    }
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 174:
    FUNC_13('(');
    FUNC_3(VAR_36, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 159:
   case 158:
    FUNC_13('(');
    FUNC_3(VAR_45,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 227:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_47, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 154:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_48, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 176:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_34, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 147:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_50, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 146:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_51, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;

   case 208:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_37, VAR_68[0]);
    FUNC_13(',');
    FUNC_1(VAR_68[1]);
    VAR_68 += 2;
    VAR_67 -= 2;
    break;

   case 186:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_28,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 160:
    FUNC_13('(');
    FUNC_5(VAR_43, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 190:
    FUNC_13('(');
    FUNC_3(VAR_26,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 180:
    FUNC_13('(');
    FUNC_5(VAR_29, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 155:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_46,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 157:
   case 156:
    FUNC_13('(');
    FUNC_3(VAR_46,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 153:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_49, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 195:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_24, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 143:
    FUNC_13('(');
    FUNC_3(VAR_53,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 232:
   case 229:
   case 233:
   case 230:
   case 235:
   case 236:
   case 238:
   case 239:
   case 231:
   case 228:
   case 234:
   case 237:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_11, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 144:
    FUNC_13('(');
    FUNC_11(*VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   case 217:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_15,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 173:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_32, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 138:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_5(VAR_58, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 137:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_11(*VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 194:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_25,
        *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 191:
   case 161:
   case 140:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_4(VAR_12, *VAR_68);
    VAR_68++;
    VAR_67--;
    FUNC_9(VAR_68, VAR_67, VAR_73);
    break;
   case 223:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    VAR_70 = *VAR_68;
    VAR_68++;
    VAR_67--;
    FUNC_7(VAR_14, VAR_70);
    break;
   case 169:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    (void)FUNC_13(',');
    FUNC_3(VAR_16, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 168:
    FUNC_13('(');
    FUNC_3(VAR_22, *VAR_68);
    VAR_73 = ',';
    VAR_68++;
    VAR_67--;
    FUNC_10(VAR_69, VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_40, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   case 226:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_13(',');
    FUNC_3(VAR_60, *VAR_68);
    switch (*VAR_68) {
    case 129:
     VAR_68++;
     VAR_67--;
     FUNC_13(',');
     FUNC_8(
         VAR_59, *VAR_68);
     break;
    case 128:
     VAR_68++;
     VAR_67--;
     FUNC_13(',');
     FUNC_8(
         VAR_61, *VAR_68);
     break;
    }
    VAR_68++;
    VAR_67--;
    break;
   case 204:
   case 136:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_10(VAR_69, VAR_68, VAR_67, VAR_73);
    break;
   case 212:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    break;
   case 205:
   case 132:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    FUNC_9(VAR_68, VAR_67, VAR_73);
    break;
   case 134:
    FUNC_9(VAR_68, VAR_67, VAR_73);
    break;
   case 139:
    FUNC_13('(');
    FUNC_3(VAR_57, *VAR_68);
    VAR_68++;
    VAR_67--;
    VAR_73 = ',';
    break;
   }
   switch (VAR_65->ktr_code) {
   case 221:
   case 212:
   case 216:
   case 213:
   case 205:
   case 191:
   case 134:
   case 132:
    FUNC_13(',');
    FUNC_6(VAR_13, *VAR_68);
    VAR_68++;
    VAR_67--;
    break;
   }
  }
  while (VAR_67 > 0) {
   FUNC_9(VAR_68, VAR_67, VAR_73);
  }
  FUNC_13(')');
 }
 FUNC_13('\n');
}
