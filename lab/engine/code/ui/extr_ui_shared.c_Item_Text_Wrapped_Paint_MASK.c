
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec4_t ;
typedef int text ;
struct TYPE_7__ {float x; float y; } ;
struct TYPE_8__ {char* text; int textStyle; int textscale; TYPE_1__ textRect; int * cvar; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_9__ {int (* drawText ) (float,float,int ,int ,char const*,int ,int ,int ) ;int (* getCVarString ) (int *,char*,int) ;} ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*,int*,char const*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (float,float,int ,int ,char*,int ,int ,int ) ;
 int FUNC_6 (float,float,int ,int ,char const*,int ,int ,int ) ;

void FUNC_7(itemDef_t *VAR_1) {
 char VAR_2[1024];
 const char *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[1024];
 int VAR_7, VAR_8;
 float VAR_9, VAR_10;
 vec4_t VAR_11;




 if (VAR_1->text == ((void*)0)) {
  if (VAR_1->cvar == ((void*)0)) {
   return;
  }
  else {
   VAR_0->getCVarString(VAR_1->cvar, VAR_2, sizeof(VAR_2));
   VAR_5 = VAR_2;
  }
 }
 else {
  VAR_5 = VAR_1->text;
 }
 if (*VAR_5 == '\0') {
  return;
 }

 FUNC_1(VAR_1, &VAR_11);
 FUNC_0(VAR_1, &VAR_7, &VAR_8, VAR_5);

 VAR_9 = VAR_1->textRect.x;
 VAR_10 = VAR_1->textRect.y;
 VAR_4 = VAR_5;
 VAR_3 = FUNC_2(VAR_5, '\r');
 while (VAR_3 && *VAR_3) {
  FUNC_3(VAR_6, VAR_4, VAR_3-VAR_4+1);
  VAR_6[VAR_3-VAR_4] = '\0';
  VAR_0->drawText(VAR_9, VAR_10, VAR_1->textscale, VAR_11, VAR_6, 0, 0, VAR_1->textStyle);
  VAR_10 += VAR_8 + 5;
  VAR_4 += VAR_3 - VAR_4 + 1;
  VAR_3 = FUNC_2(VAR_3+1, '\r');
 }
 VAR_0->drawText(VAR_9, VAR_10, VAR_1->textscale, VAR_11, VAR_4, 0, 0, VAR_1->textStyle);
}
