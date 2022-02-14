
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float timeOffset; int oldShader; int newShader; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char const*) ;

void FUNC_2(const char *VAR_3, const char *VAR_4, float VAR_5) {
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_3, VAR_2[VAR_6].oldShader) == 0) {

   FUNC_1(VAR_2[VAR_6].newShader,VAR_4);
   VAR_2[VAR_6].timeOffset = VAR_5;
   return;
  }
 }
 if (VAR_1 < VAR_0) {
  FUNC_1(VAR_2[VAR_1].newShader,VAR_4);
  FUNC_1(VAR_2[VAR_1].oldShader,VAR_3);
  VAR_2[VAR_1].timeOffset = VAR_5;
  VAR_1++;
 }
}
