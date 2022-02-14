
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {TYPE_1__ rect; } ;
struct TYPE_9__ {TYPE_2__ window; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,int) ;
 int VAR_3 ;

int FUNC_1(int VAR_4, int VAR_5) {
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  rectDef_t VAR_7;
  VAR_7 = VAR_2[VAR_6].window.rect.x - 3;
  VAR_7 = VAR_2[VAR_6].window.rect.y - 3;
  VAR_7 = VAR_7 = 7;
  if (FUNC_0(&VAR_7, VAR_4, VAR_5)) {
   return VAR_1;
  }
 }
 return VAR_0;
}
