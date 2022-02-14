
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_64__ TYPE_2__ ;
typedef struct TYPE_63__ TYPE_1__ ;


struct TYPE_63__ {int client; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_64__ {int type; } ;
typedef TYPE_2__ bot_match_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_19 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_22 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_23 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_24 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_25 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_26 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_27 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_28 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_29 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_30 (char*,TYPE_2__*,int) ;
 int FUNC_31 (int ,char*) ;

int FUNC_32(bot_state_t *VAR_6, char *VAR_7) {
 bot_match_t VAR_8;

 VAR_8.type = 0;

 if (!FUNC_30(VAR_7, &VAR_8, VAR_2
           |VAR_1
           |VAR_0)) {
  return VAR_4;
 }

 switch(VAR_8.type)
 {
  case 146:
  case 161:
  {
   FUNC_12(VAR_6, &VAR_8);
   break;
  }
  case 155:
  {
   FUNC_5(VAR_6, &VAR_8);
   break;
  }
  case 159:
  {
   FUNC_3(VAR_6, &VAR_8);
   break;
  }
  case 140:
  {
   FUNC_18(VAR_6, &VAR_8);
   break;
  }

  case 149:
  {
   FUNC_9(VAR_6, &VAR_8);
   break;
  }
  case 138:
  {
   FUNC_20(VAR_6, &VAR_8);
   break;
  }

  case 139:
  {
   FUNC_19(VAR_6, &VAR_8);
   break;
  }

  case 134:
  {
   FUNC_24(VAR_6, &VAR_8);
   break;
  }

  case 156:
  {
   FUNC_2(VAR_6, &VAR_8);
   break;
  }
  case 148:
  {
   FUNC_10(VAR_6, &VAR_8);
   break;
  }
  case 145:
  {
   FUNC_13(VAR_6, &VAR_8);
   break;
  }
  case 142:
  {
   FUNC_16(VAR_6, &VAR_8);
   break;
  }
  case 129:
  {
   FUNC_28(VAR_6, &VAR_8);
   break;
  }
  case 158:
  {
   FUNC_4(VAR_6, &VAR_8);
   break;
  }
  case 157:
  {
   FUNC_31(VAR_6->client, "the part of my brain to create formations has been damaged");
   break;
  }
  case 151:
  {
   FUNC_31(VAR_6->client, "the part of my brain to create formations has been damaged");
   break;
  }
  case 150:
  {
   FUNC_8(VAR_6, &VAR_8);
   break;
  }
  case 153:
  {
   break;
  }
  case 154:
  {
   FUNC_6(VAR_6, &VAR_8);
   break;
  }
  case 137:
  {
   FUNC_21(VAR_6, &VAR_8);
   break;
  }
  case 136:
  {
   FUNC_22(VAR_6, &VAR_8);
   break;
  }
  case 128:
  {
   FUNC_29(VAR_6, &VAR_8);
   break;
  }
  case 132:
  {
   FUNC_25(VAR_6, &VAR_8);
   break;
  }
  case 131:
  {
   FUNC_26(VAR_6, &VAR_8);
   break;
  }
  case 130:
  {
   FUNC_27(VAR_6, &VAR_8);
   break;
  }
  case 143:
  {
   FUNC_15(VAR_6, &VAR_8);
   break;
  }
  case 144:
  {
   FUNC_14(VAR_6, &VAR_8);
   break;
  }
  case 152:
  {
   FUNC_7(VAR_6, &VAR_8);
   break;
  }
  case 141:
  {
   FUNC_17(VAR_6, &VAR_8);
   break;
  }
  case 133:
  {
   break;
  }
  case 135:
  {
   FUNC_23(VAR_6, &VAR_8);
   break;
  }
  default:
  {
   FUNC_0(VAR_3, "unknown match type\n");
   break;
  }
 }
 return VAR_5;
}
