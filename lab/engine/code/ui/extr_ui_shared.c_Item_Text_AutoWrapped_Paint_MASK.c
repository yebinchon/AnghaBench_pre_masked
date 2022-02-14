
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec4_t ;
typedef int text ;
struct TYPE_10__ {float y; scalar_t__ x; } ;
struct TYPE_9__ {int w; } ;
struct TYPE_12__ {TYPE_1__ rect; } ;
struct TYPE_11__ {char* text; float textaligny; scalar_t__ textalignment; int textStyle; int textscale; TYPE_2__ textRect; TYPE_4__ window; scalar_t__ textalignx; int * cvar; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_13__ {int (* textWidth ) (char*,int ,int ) ;int (* drawText ) (scalar_t__,float,int ,int ,char*,int ,int ,int ) ;int (* getCVarString ) (int *,char*,int) ;} ;


 TYPE_8__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int*,int*,char const*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (scalar_t__*,float*,TYPE_4__*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (scalar_t__,float,int ,int ,char*,int ,int ,int ) ;

void FUNC_6(itemDef_t *VAR_4) {
 char VAR_5[1024];
 const char *VAR_6, *VAR_7, *VAR_8;
 char VAR_9[1024];
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 float VAR_16;
 vec4_t VAR_17;

 VAR_13 = 0;
 VAR_8 = ((void*)0);

 if (VAR_4->text == ((void*)0)) {
  if (VAR_4->cvar == ((void*)0)) {
   return;
  }
  else {
   VAR_0->getCVarString(VAR_4->cvar, VAR_5, sizeof(VAR_5));
   VAR_7 = VAR_5;
  }
 }
 else {
  VAR_7 = VAR_4->text;
 }
 if (*VAR_7 == '\0') {
  return;
 }
 FUNC_1(VAR_4, &VAR_17);
 FUNC_0(VAR_4, &VAR_10, &VAR_11, VAR_7);

 VAR_16 = VAR_4->textaligny;
 VAR_12 = 0;
 VAR_9[0] = '\0';
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_6 = VAR_7;
 while (VAR_6) {
  if (*VAR_6 == ' ' || *VAR_6 == '\t' || *VAR_6 == '\n' || *VAR_6 == '\0') {
   VAR_14 = VAR_12;
   VAR_8 = VAR_6+1;
   VAR_15 = VAR_13;
  }
  VAR_13 = VAR_0->textWidth(VAR_9, VAR_4->textscale, 0);
  if ( (VAR_14 && VAR_13 > VAR_4->window.rect.w) || *VAR_6 == '\n' || *VAR_6 == '\0') {
   if (VAR_12) {
    if (VAR_4->textalignment == VAR_2) {
     VAR_4->textRect.x = VAR_4->textalignx;
    } else if (VAR_4->textalignment == VAR_3) {
     VAR_4->textRect.x = VAR_4->textalignx - VAR_15;
    } else if (VAR_4->textalignment == VAR_1) {
     VAR_4->textRect.x = VAR_4->textalignx - VAR_15 / 2;
    }
    VAR_4->textRect.y = VAR_16;
    FUNC_2(&VAR_4->textRect.x, &VAR_4->textRect.y, &VAR_4->window);

    VAR_9[VAR_14] = '\0';
    VAR_0->drawText(VAR_4->textRect.x, VAR_4->textRect.y, VAR_4->textscale, VAR_17, VAR_9, 0, 0, VAR_4->textStyle);
   }
   if (*VAR_6 == '\0') {
    break;
   }

   VAR_16 += VAR_11 + 5;
   VAR_6 = VAR_8;
   VAR_12 = 0;
   VAR_14 = 0;
   VAR_15 = 0;
   continue;
  }
  VAR_9[VAR_12++] = *VAR_6++;
  VAR_9[VAR_12] = '\0';
 }
}
