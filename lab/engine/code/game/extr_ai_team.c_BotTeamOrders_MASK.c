
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
typedef int bot_state_t ;
struct TYPE_2__ {int maxclients; } ;


 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

void FUNC_6(bot_state_t *VAR_5) {
 int VAR_6[VAR_1];
 int VAR_7, VAR_8;
 char VAR_9[VAR_2];

 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4.maxclients; VAR_8++) {
  FUNC_5(VAR_0+VAR_8, VAR_9, sizeof(VAR_9));

  if (!FUNC_4(VAR_9) || !FUNC_4(FUNC_2(VAR_9, "n"))) continue;

  if (FUNC_3(FUNC_2(VAR_9, "t")) == VAR_3) continue;

  if (FUNC_1(VAR_5, VAR_8)) {
   VAR_6[VAR_7] = VAR_8;
   VAR_7++;
  }
 }

 switch(VAR_7) {
  case 1: break;
  case 2:
  {

   break;
  }
  case 3:
  {

   FUNC_0(VAR_5, VAR_6, 2);
   break;
  }
  case 4:
  {
   FUNC_0(VAR_5, VAR_6, 2);
   FUNC_0(VAR_5, &VAR_6[2], 2);
   break;
  }
  case 5:
  {
   FUNC_0(VAR_5, VAR_6, 2);
   FUNC_0(VAR_5, &VAR_6[2], 3);
   break;
  }
  default:
  {
   if (VAR_7 <= 10) {
    for (VAR_8 = 0; VAR_8 < VAR_7 / 2; VAR_8++) {
     FUNC_0(VAR_5, &VAR_6[VAR_8*2], 2);
    }
   }
   break;
  }
 }
}
