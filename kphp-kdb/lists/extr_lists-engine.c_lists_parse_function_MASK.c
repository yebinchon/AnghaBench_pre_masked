
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_act_extra {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct tl_act_extra* FUNC_5 (int) ;
 struct tl_act_extra* FUNC_6 () ;
 struct tl_act_extra* FUNC_7 () ;
 struct tl_act_extra* FUNC_8 (int ) ;
 struct tl_act_extra* FUNC_9 (int,int) ;
 struct tl_act_extra* FUNC_10 () ;
 struct tl_act_extra* FUNC_11 () ;
 struct tl_act_extra* FUNC_12 (int) ;
 struct tl_act_extra* FUNC_13 (int) ;
 struct tl_act_extra* FUNC_14 (int) ;
 struct tl_act_extra* FUNC_15 () ;
 struct tl_act_extra* FUNC_16 (int) ;
 struct tl_act_extra* FUNC_17 (int,int) ;
 struct tl_act_extra* FUNC_18 (int,int,int,int) ;
 struct tl_act_extra* FUNC_19 (int) ;
 struct tl_act_extra* FUNC_20 (int,int) ;
 struct tl_act_extra* FUNC_21 (int,int) ;
 struct tl_act_extra* FUNC_22 () ;
 struct tl_act_extra* FUNC_23 (int) ;

struct tl_act_extra *FUNC_24 (long long VAR_3) {
  if (VAR_3 != 0) {
    FUNC_3 ("Lists only support actor_id = 0", VAR_1);
    return 0;
  }
  int VAR_4 = FUNC_2 ();
  if (FUNC_1 ()) {
    return 0;
  }
  switch (VAR_4) {
  case 172:
    return FUNC_6 ();
  case 173:
    return FUNC_7 ();
  case 171:
    return FUNC_22 ();
  case 142:
    return FUNC_13 (0);
  case 181:
    return FUNC_13 (2);
  case 143:
    return FUNC_13 (1);
  case 141:
    return FUNC_15 ();
  case 140:
    return FUNC_14 (0);
  case 180:
    return FUNC_14 (1);
  case 154:
    return FUNC_14 (2);
  case 176:
    return FUNC_14 (3);
  case 138:
    return FUNC_16 (0);
  case 153:
    return FUNC_16 (1);
  case 175:
    return FUNC_16 (2);
  case 152:
    return FUNC_12 (0);
  case 174:
    return FUNC_12 (1);
  case 139:
    return FUNC_19 (0);
  case 179:
    return FUNC_19 (1);
  case 178:
    return FUNC_19 (2);
  case 170:
    return FUNC_23 (0);
  case 169:
    return FUNC_23 (1);
  case 168:
    return FUNC_8 (VAR_2);
  case 166:
    return FUNC_9 (0, 0);
  case 167:
    return FUNC_9 (0, 1);
  case 165:
    return FUNC_9 (1, 2);
  case 162:
    return FUNC_9 (1, 4);
  case 163:
    return FUNC_11 ();
  case 164:
    return FUNC_10 ();
  case 161:
    return FUNC_17 (0, 0);
  case 157:
    return FUNC_17 (0, 1);
  case 159:
    return FUNC_17 (1, 0);
  case 158:
    return FUNC_17 (1, 1);
  case 160:
    return FUNC_5 (0);
  case 155:
    return FUNC_5 (1);
  case 156:
    return FUNC_5 (2);
  case 151:
    return FUNC_18 (1, 0, 0, 0);
  case 148:
    return FUNC_18 (1, 0, 1, 0);
  case 150:
    return FUNC_18 (1, 0, 0, 1);
  case 149:
    return FUNC_18 (1, 0, 1, 1);
  case 147:
    return FUNC_18 (1, 1, 0, 0);
  case 144:
    return FUNC_18 (1, 1, 1, 0);
  case 146:
    return FUNC_18 (1, 1, 0, 1);
  case 145:
    return FUNC_18 (1, 1, 1, 1);
  case 133:
    return FUNC_18 (0, 0, 0, 0);
  case 132:
    return FUNC_18 (0, 0, 1, 0);
  case 131:
    return FUNC_21 (0, 0);
  case 128:
    return FUNC_21 (1, 0);
  case 130:
    return FUNC_21 (0, 1);
  case 129:
    return FUNC_21 (1, 1);
  case 137:
    return FUNC_20 (0, 0);
  case 134:
    return FUNC_20 (0, 1);
  case 136:
    return FUNC_20 (1, 0);
  case 135:
    return FUNC_20 (1, 1);
  case 177:
    return FUNC_0 ();
  default:
    FUNC_4 (VAR_0, "Unknown op %08x", VAR_4);
    return 0;
  }
}
