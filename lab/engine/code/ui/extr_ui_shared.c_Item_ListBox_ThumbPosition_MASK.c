
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {float startPos; } ;
typedef TYPE_3__ listBoxDef_t ;
struct TYPE_7__ {float w; int x; float h; int y; } ;
struct TYPE_8__ {int flags; TYPE_1__ rect; } ;
struct TYPE_10__ {TYPE_2__ window; scalar_t__ typeData; } ;
typedef TYPE_4__ itemDef_t ;


 float FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(itemDef_t *VAR_2) {
 float VAR_3, VAR_4, VAR_5;
 listBoxDef_t *VAR_6 = (listBoxDef_t*)VAR_2->typeData;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_2->window.flags & VAR_1) {
  VAR_5 = VAR_2->window.rect.w - (VAR_0 * 2) - 2;
  if (VAR_3 > 0) {
   VAR_4 = (VAR_5-VAR_0) / (float) VAR_3;
  } else {
   VAR_4 = 0;
  }
  VAR_4 *= VAR_6->startPos;
  return VAR_2->window.rect.x + 1 + VAR_0 + VAR_4;
 }
 else {
  VAR_5 = VAR_2->window.rect.h - (VAR_0 * 2) - 2;
  if (VAR_3 > 0) {
   VAR_4 = (VAR_5-VAR_0) / (float) VAR_3;
  } else {
   VAR_4 = 0;
  }
  VAR_4 *= VAR_6->startPos;
  return VAR_2->window.rect.y + 1 + VAR_0 + VAR_4;
 }
}
