
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int teammatename ;
typedef int netname ;
struct TYPE_10__ {int client; int cs; int teamleader; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_11__ {int subtype; } ;
typedef TYPE_2__ bot_match_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char*,int ) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int ,char*,int) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(bot_state_t *VAR_8, bot_match_t *VAR_9) {
 char VAR_10[VAR_3];
 char VAR_11[VAR_2];
 int VAR_12, VAR_13;

 FUNC_5(VAR_8->client, VAR_10, sizeof(VAR_10));
 if (FUNC_7(VAR_10, VAR_8->teamleader) != 0) return;

 FUNC_9(VAR_9, VAR_4, VAR_11, sizeof(VAR_11));
 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 < 0) return;

 VAR_13 = FUNC_1(VAR_8, VAR_12);
 switch(VAR_9->subtype)
 {
  case 129:
  {
   VAR_13 &= ~VAR_5;
   VAR_13 |= VAR_6;
   break;
  }
  case 130:
  {
   VAR_13 &= ~VAR_6;
   VAR_13 |= VAR_5;
   break;
  }
  case 128:
  {
   VAR_13 &= ~(VAR_5|VAR_6);
   break;
  }
 }
 FUNC_2(VAR_8, VAR_12, VAR_13);

 FUNC_6(VAR_12, VAR_11, sizeof(VAR_11));
 FUNC_0(VAR_8, "keepinmind", VAR_11, ((void*)0));
 FUNC_8(VAR_8->cs, VAR_12, VAR_1);
 FUNC_3(VAR_8, VAR_12, VAR_7);
 FUNC_10(VAR_8->client, VAR_0);
}
