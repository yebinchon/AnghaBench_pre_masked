
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int w; int h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_8__ {scalar_t__ y; } ;
struct TYPE_9__ {TYPE_1__ rect; } ;
struct TYPE_11__ {TYPE_2__ window; } ;
typedef TYPE_4__ itemDef_t ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(itemDef_t *VAR_3, float VAR_4, float VAR_5) {
 rectDef_t VAR_6;

 VAR_6.x = FUNC_0(VAR_3) - (VAR_1 / 2);
 VAR_6.y = VAR_3->window.rect.y - 2;
 VAR_6.w = VAR_1;
 VAR_6.h = VAR_0;

 if (FUNC_1(&VAR_6, VAR_4, VAR_5)) {
  return VAR_2;
 }
 return 0;
}
