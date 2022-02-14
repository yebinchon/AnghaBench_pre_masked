
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_13__ {TYPE_2__* snap; } ;
struct TYPE_12__ {int icon; } ;
struct TYPE_11__ {scalar_t__ gametype; } ;
struct TYPE_8__ {int* stats; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_5) {
 int VAR_6;

 if (VAR_4.gametype < VAR_0) {
  return;
 }
 VAR_6 = VAR_2.snap->ps.stats[VAR_1];
 if ( VAR_6 ) {
  FUNC_1( VAR_6 );
  FUNC_0( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_3[ VAR_6 ].icon );
 }
}
