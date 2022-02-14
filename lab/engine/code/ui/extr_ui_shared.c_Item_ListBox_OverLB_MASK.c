
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int x; int y; int h; int w; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_8__ {int x; int y; int h; int w; } ;
struct TYPE_9__ {int flags; TYPE_1__ rect; } ;
struct TYPE_11__ {TYPE_2__ window; } ;
typedef TYPE_4__ itemDef_t ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_2(itemDef_t *VAR_7, float VAR_8, float VAR_9) {
 rectDef_t VAR_10;
 int VAR_11;

 if (VAR_7->window.flags & VAR_1) {

  VAR_10.x = VAR_7->window.rect.x;
  VAR_10.y = VAR_7->window.rect.y + VAR_7->window.rect.h - VAR_0;
  VAR_10.h = VAR_10.w = VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_2;
  }

  VAR_10.x = VAR_7->window.rect.x + VAR_7->window.rect.w - VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_5;
  }

  VAR_11 = FUNC_0(VAR_7);
  VAR_10.x = VAR_11;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_6;
  }
  VAR_10.x = VAR_7->window.rect.x + VAR_0;
  VAR_10.w = VAR_11 - VAR_10.x;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_4;
  }
  VAR_10.x = VAR_11 + VAR_0;
  VAR_10.w = VAR_7->window.rect.x + VAR_7->window.rect.w - VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_3;
  }
 } else {
  VAR_10.x = VAR_7->window.rect.x + VAR_7->window.rect.w - VAR_0;
  VAR_10.y = VAR_7->window.rect.y;
  VAR_10.h = VAR_10.w = VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_2;
  }
  VAR_10.y = VAR_7->window.rect.y + VAR_7->window.rect.h - VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_5;
  }
  VAR_11 = FUNC_0(VAR_7);
  VAR_10.y = VAR_11;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_6;
  }
  VAR_10.y = VAR_7->window.rect.y + VAR_0;
  VAR_10.h = VAR_11 - VAR_10.y;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_4;
  }
  VAR_10.y = VAR_11 + VAR_0;
  VAR_10.h = VAR_7->window.rect.y + VAR_7->window.rect.h - VAR_0;
  if (FUNC_1(&VAR_10, VAR_8, VAR_9)) {
   return VAR_3;
  }
 }
 return 0;
}
