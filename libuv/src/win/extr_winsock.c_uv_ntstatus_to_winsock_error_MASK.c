
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef int DWORD ;


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

int FUNC_0(NTSTATUS VAR_26) {
  switch (VAR_26) {
    case 134:
      return VAR_3;

    case 145:
      return VAR_0;

    case 162:
    case 147:
      return VAR_21;

    case 167:
    case 146:
    case 177:
    case 128:
    case 152:
    case 141:
    case 131:
    case 138:
      return VAR_19;

    case 132:
    case 135:
    case 182:
      return VAR_6;

    case 158:
    case 160:
    case 133:
      return VAR_24;

    case 170:
      return VAR_11;

    case 140:
    case 172:
    case 159:
    case 174:
    case 143:
    case 169:
      return VAR_10;

    case 157:
    case 130:
    case 175:
      return VAR_8;

    case 181:
    case 155:
    case 142:
      return VAR_18;

    case 168:
      return VAR_13;

    case 178:
    case 137:
      return VAR_14;

    case 180:
    case 164:
      return VAR_16;

    case 179:
    case 183:
      return VAR_12;

    case 171:
    case 136:
      return VAR_25;

    case 161:
    case 156:
    case 151:
    case 150:
    case 148:
    case 149:
    case 129:
      return VAR_17;

    case 163:
      return VAR_20;

    case 139:
    case 173:
      return VAR_9;

    case 144:
      return VAR_23;

    case 176:
    case 166:
    case 165:
      return VAR_7;

    case 153:
    case 154:
      return VAR_22;

    case 184:
      return VAR_5;

    default:
      if ((VAR_26 & (VAR_4 << 16)) == (VAR_4 << 16) &&
          (VAR_26 & (VAR_1 | VAR_2))) {


        return (DWORD) (VAR_26 & 0xffff);
      } else {

        return VAR_15;
      }
  }
}
