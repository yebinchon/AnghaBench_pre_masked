
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
typedef int bot_state_t ;
typedef int bot_goal_t ;
struct TYPE_2__ {int maxclients; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,int) ;

int FUNC_7(bot_state_t *VAR_13, int *VAR_14, int VAR_15) {

 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 char VAR_21[VAR_4];
 int VAR_22[VAR_3];
 bot_goal_t *VAR_23 = ((void*)0);




 if (VAR_10 == VAR_2)

 {
  if (FUNC_2(VAR_13) == VAR_5)
   VAR_23 = &VAR_9;
  else
   VAR_23 = &VAR_8;
 }
 VAR_19 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_11.maxclients; VAR_16++) {
  FUNC_6(VAR_0+VAR_16, VAR_21, sizeof(VAR_21));

  if (!FUNC_5(VAR_21) || !FUNC_5(FUNC_3(VAR_21, "n"))) continue;

  if (FUNC_4(FUNC_3(VAR_21, "t")) == VAR_6) continue;

  if (FUNC_1(VAR_13, VAR_16) && VAR_23) {

   VAR_20 = FUNC_0(VAR_16, VAR_23);

   for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
    if (VAR_20 < VAR_22[VAR_17]) {
     for (VAR_18 = VAR_19; VAR_18 > VAR_17; VAR_18--) {
      VAR_22[VAR_18] = VAR_22[VAR_18-1];
      VAR_14[VAR_18] = VAR_14[VAR_18-1];
     }
     break;
    }
   }
   VAR_22[VAR_17] = VAR_20;
   VAR_14[VAR_17] = VAR_16;
   VAR_19++;
   if (VAR_19 >= VAR_15) break;
  }
 }
 return VAR_19;
}
