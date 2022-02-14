
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
typedef int bot_state_t ;
struct TYPE_2__ {int (* func ) (int *,int,int) ;scalar_t__ cmd; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int) ;
 TYPE_1__* VAR_4 ;

int FUNC_6(bot_state_t *VAR_5, int VAR_6, char *VAR_7) {
 int VAR_8, VAR_9;

 char *VAR_10, VAR_11[VAR_0], *VAR_12;

 if (!FUNC_3()) {
  return VAR_2;
 }

 if ( VAR_6 == VAR_1 ) {
  return VAR_2;
 }

 FUNC_2(VAR_11, VAR_7, sizeof(VAR_11));
 VAR_12 = VAR_11;
 for (; *VAR_12 && *VAR_12 > ' '; VAR_12++);
 while (*VAR_12 && *VAR_12 <= ' ') *VAR_12++ = '\0';

 for (VAR_10 = VAR_12; *VAR_12 && *VAR_12 > ' '; VAR_12++);
 while (*VAR_12 && *VAR_12 <= ' ') *VAR_12++ = '\0';
 VAR_9 = FUNC_4(VAR_10);
 for (; *VAR_12 && *VAR_12 > ' '; VAR_12++);
 while (*VAR_12 && *VAR_12 <= ' ') *VAR_12++ = '\0';


 if (!FUNC_0(VAR_5, VAR_9)) {
  return VAR_2;
 }

 for (VAR_8 = 0; VAR_4[VAR_8].cmd; VAR_8++) {
  if (!FUNC_1(VAR_12, VAR_4[VAR_8].cmd)) {
   VAR_4[VAR_8].func(VAR_5, VAR_9, VAR_6);
   return VAR_3;
  }
 }
 return VAR_2;
}
