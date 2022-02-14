
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int x; int w; scalar_t__ h; scalar_t__ y; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_5__ {size_t spectatorLen; int spectatorWidth; int spectatorPaintX; int spectatorPaintX2; size_t spectatorOffset; scalar_t__ time; scalar_t__ spectatorTime; int * spectatorList; } ;


 int FUNC_0 (float*,int,scalar_t__,float,int ,int *,int ,size_t) ;
 int FUNC_1 (int *,float,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_2(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, qhandle_t VAR_4) {
 if (VAR_0.spectatorLen) {
  float VAR_5;

  if (VAR_0.spectatorWidth == -1) {
   VAR_0.spectatorWidth = 0;
   VAR_0.spectatorPaintX = VAR_1->x + 1;
   VAR_0.spectatorPaintX2 = -1;
  }

  if (VAR_0.spectatorOffset > VAR_0.spectatorLen) {
   VAR_0.spectatorOffset = 0;
   VAR_0.spectatorPaintX = VAR_1->x + 1;
   VAR_0.spectatorPaintX2 = -1;
  }

  if (VAR_0.time > VAR_0.spectatorTime) {
   VAR_0.spectatorTime = VAR_0.time + 10;
   if (VAR_0.spectatorPaintX <= VAR_1->x + 2) {
    if (VAR_0.spectatorOffset < VAR_0.spectatorLen) {
     VAR_0.spectatorPaintX += FUNC_1(&VAR_0.spectatorList[VAR_0.spectatorOffset], VAR_2, 1) - 1;
     VAR_0.spectatorOffset++;
    } else {
     VAR_0.spectatorOffset = 0;
     if (VAR_0.spectatorPaintX2 >= 0) {
      VAR_0.spectatorPaintX = VAR_0.spectatorPaintX2;
     } else {
      VAR_0.spectatorPaintX = VAR_1->x + VAR_1->w - 2;
     }
     VAR_0.spectatorPaintX2 = -1;
    }
   } else {
    VAR_0.spectatorPaintX--;
    if (VAR_0.spectatorPaintX2 >= 0) {
     VAR_0.spectatorPaintX2--;
    }
   }
  }

  VAR_5 = VAR_1->x + VAR_1->w - 2;
  FUNC_0(&VAR_5, VAR_0.spectatorPaintX, VAR_1->y + VAR_1->h - 3, VAR_2, VAR_3, &VAR_0.spectatorList[VAR_0.spectatorOffset], 0, 0);
  if (VAR_0.spectatorPaintX2 >= 0) {
   float VAR_6 = VAR_1->x + VAR_1->w - 2;
   FUNC_0(&VAR_6, VAR_0.spectatorPaintX2, VAR_1->y + VAR_1->h - 3, VAR_2, VAR_3, VAR_0.spectatorList, 0, VAR_0.spectatorOffset);
  }
  if (VAR_0.spectatorOffset && VAR_5 > 0) {

   if (VAR_0.spectatorPaintX2 == -1) {
      VAR_0.spectatorPaintX2 = VAR_1->x + VAR_1->w - 2;
   }
  } else {
   VAR_0.spectatorPaintX2 = -1;
  }

 }
}
