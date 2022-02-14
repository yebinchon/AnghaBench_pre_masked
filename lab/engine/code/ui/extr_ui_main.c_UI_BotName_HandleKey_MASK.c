
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int botIndex; int characterCount; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_3(int VAR_4, float *VAR_5, int VAR_6) {
 int VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 != 0) {
  int VAR_8 = FUNC_2("g_gametype");
  int VAR_9 = VAR_3.botIndex;

  VAR_9 += VAR_7;

  if (VAR_8 >= VAR_0) {
   if (VAR_9 >= VAR_3.characterCount) {
    VAR_9 = 0;
   } else if (VAR_9 < 0) {
    VAR_9 = VAR_3.characterCount - 1;
   }
  } else {
   if (VAR_9 >= FUNC_0()) {
    VAR_9 = 0;
   } else if (VAR_9 < 0) {
    VAR_9 = FUNC_0() - 1;
   }
  }
  VAR_3.botIndex = VAR_9;
  return VAR_2;
 }
 return VAR_1;
}
