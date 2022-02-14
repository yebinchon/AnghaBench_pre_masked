
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int characterCount; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 char* FUNC_4 (char*,int) ;

__attribute__((used)) static qboolean FUNC_5(int VAR_5, float *VAR_6, int VAR_7, qboolean VAR_8, int VAR_9) {
 int VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 != 0) {



  char *VAR_11 = FUNC_4(VAR_8 ? "ui_blueteam%i" : "ui_redteam%i", VAR_9);
  int VAR_12 = FUNC_3(VAR_11);

  VAR_12 += VAR_10;

  if (VAR_4.integer >= VAR_0) {
   if (VAR_12 >= VAR_3.characterCount + 2) {
    VAR_12 = 0;
   } else if (VAR_12 < 0) {
    VAR_12 = VAR_3.characterCount + 2 - 1;
   }
  } else {
   if (VAR_12 >= FUNC_0() + 2) {
    VAR_12 = 0;
   } else if (VAR_12 < 0) {
    VAR_12 = FUNC_0() + 2 - 1;
   }
  }

  FUNC_2(VAR_11, VAR_12);
  return VAR_2;
 }
 return VAR_1;
}
