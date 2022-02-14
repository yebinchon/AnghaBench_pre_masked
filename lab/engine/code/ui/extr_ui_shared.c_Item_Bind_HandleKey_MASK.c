
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {int rect; } ;
struct TYPE_8__ {int cvar; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_10__ {int (* setBinding ) (int,char*) ;int cursory; int cursorx; } ;
struct TYPE_9__ {int bind1; int bind2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_6__* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int,char*) ;

qboolean FUNC_9(itemDef_t *VAR_15, int VAR_16, qboolean VAR_17) {
 int VAR_18;
 int VAR_19;

 if (!VAR_12)
 {
  if (VAR_17 && ((VAR_16 == VAR_8 && FUNC_2(&VAR_15->window.rect, VAR_0->cursorx, VAR_0->cursory))
    || VAR_16 == VAR_2 || VAR_16 == VAR_7 || VAR_16 == VAR_3 || VAR_16 == VAR_4 || VAR_16 == VAR_5 || VAR_16 == VAR_6)) {
   VAR_12 = VAR_14;
   VAR_10 = VAR_15;
  }
  return VAR_14;
 }
 else
 {
  if (VAR_10 == ((void*)0)) {
   return VAR_14;
  }

  if (VAR_16 & VAR_1) {
   return VAR_14;
  }

  switch (VAR_16)
  {
   case 128:
    VAR_12 = VAR_13;
    return VAR_14;

   case 129:
    VAR_18 = FUNC_0(VAR_15->cvar);
    if (VAR_18 != -1) {
     if( VAR_11[VAR_18].bind1 != -1 ) {
      VAR_0->setBinding( VAR_11[VAR_18].bind1, "" );
      VAR_11[VAR_18].bind1 = -1;
     }
     if( VAR_11[VAR_18].bind2 != -1 ) {
      VAR_0->setBinding( VAR_11[VAR_18].bind2, "" );
      VAR_11[VAR_18].bind2 = -1;
     }
    }
    FUNC_1(VAR_14);
    VAR_12 = VAR_13;
    VAR_10 = ((void*)0);
    return VAR_14;

   case '`':
    return VAR_14;
  }
 }

 if (VAR_16 != -1)
 {

  for (VAR_19=0; VAR_19 < VAR_9; VAR_19++)
  {

   if (VAR_11[VAR_19].bind2 == VAR_16) {
    VAR_11[VAR_19].bind2 = -1;
   }

   if (VAR_11[VAR_19].bind1 == VAR_16)
   {
    VAR_11[VAR_19].bind1 = VAR_11[VAR_19].bind2;
    VAR_11[VAR_19].bind2 = -1;
   }
  }
 }


 VAR_18 = FUNC_0(VAR_15->cvar);

 if (VAR_18 != -1) {
  if (VAR_16 == -1) {
   if( VAR_11[VAR_18].bind1 != -1 ) {
    VAR_0->setBinding( VAR_11[VAR_18].bind1, "" );
    VAR_11[VAR_18].bind1 = -1;
   }
   if( VAR_11[VAR_18].bind2 != -1 ) {
    VAR_0->setBinding( VAR_11[VAR_18].bind2, "" );
    VAR_11[VAR_18].bind2 = -1;
   }
  }
  else if (VAR_11[VAR_18].bind1 == -1) {
   VAR_11[VAR_18].bind1 = VAR_16;
  }
  else if (VAR_11[VAR_18].bind1 != VAR_16 && VAR_11[VAR_18].bind2 == -1) {
   VAR_11[VAR_18].bind2 = VAR_16;
  }
  else {
   VAR_0->setBinding( VAR_11[VAR_18].bind1, "" );
   VAR_0->setBinding( VAR_11[VAR_18].bind2, "" );
   VAR_11[VAR_18].bind1 = VAR_16;
   VAR_11[VAR_18].bind2 = -1;
  }
 }

 FUNC_1(VAR_14);
 VAR_12 = VAR_13;

 return VAR_14;
}
