
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ownerDraw; } ;
struct TYPE_6__ {int w; int h; int y; scalar_t__ x; } ;
struct TYPE_7__ {char const* text; scalar_t__ type; scalar_t__ textalignment; TYPE_3__ window; TYPE_1__ textRect; scalar_t__ textalignx; int textaligny; int textscale; scalar_t__ cvar; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_9__ {int (* textWidth ) (char*,int ,int ) ;int (* textHeight ) (char const*,int ,int ) ;int (* getCVarString ) (scalar_t__,char*,int) ;scalar_t__ (* ownerDrawWidth ) (int ,int ) ;} ;


 TYPE_5__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,int *,TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (char const*,int ,int ) ;

void FUNC_7(itemDef_t *VAR_5, int *VAR_6, int *VAR_7, const char *VAR_8) {
 const char *VAR_9 = (VAR_8) ? VAR_8 : VAR_5->text;

 if (VAR_9 == ((void*)0) ) {
  return;
 }

 *VAR_6 = VAR_5->textRect.w;
 *VAR_7 = VAR_5->textRect.h;


 if (*VAR_6 == 0 || (VAR_5->type == VAR_4 && VAR_5->textalignment == VAR_1)) {
  int VAR_10 = VAR_0->textWidth(VAR_5->text, VAR_5->textscale, 0);

  if (VAR_5->type == VAR_4 && (VAR_5->textalignment == VAR_1 || VAR_5->textalignment == VAR_2)) {
   VAR_10 += VAR_0->ownerDrawWidth(VAR_5->window.ownerDraw, VAR_5->textscale);
  } else if (VAR_5->type == VAR_3 && VAR_5->textalignment == VAR_1 && VAR_5->cvar) {
   char VAR_11[256];
   VAR_0->getCVarString(VAR_5->cvar, VAR_11, 256);
   VAR_10 += VAR_0->textWidth(VAR_11, VAR_5->textscale, 0);
  }

  *VAR_6 = VAR_0->textWidth(VAR_9, VAR_5->textscale, 0);
  *VAR_7 = VAR_0->textHeight(VAR_9, VAR_5->textscale, 0);
  VAR_5->textRect.w = *VAR_6;
  VAR_5->textRect.h = *VAR_7;
  VAR_5->textRect.x = VAR_5->textalignx;
  VAR_5->textRect.y = VAR_5->textaligny;
  if (VAR_5->textalignment == VAR_2) {
   VAR_5->textRect.x = VAR_5->textalignx - VAR_10;
  } else if (VAR_5->textalignment == VAR_1) {
   VAR_5->textRect.x = VAR_5->textalignx - VAR_10 / 2;
  }

  FUNC_0(&VAR_5->textRect.x, &VAR_5->textRect.y, &VAR_5->window);
 }
}
