
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {int h; int w; scalar_t__ y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_15__ {int time; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_9__ {int armorModel; int armorIcon; } ;
struct TYPE_11__ {TYPE_1__ media; } ;


 int FUNC_0 (int ,scalar_t__,int ,int,int ,int ,int*,int*) ;
 int FUNC_1 (int ,scalar_t__,int ,int,int ) ;
 int FUNC_2 (int*) ;
 size_t VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_3( rectDef_t *VAR_6, qboolean VAR_7 ) {
 vec3_t VAR_8;
 vec3_t VAR_9;

 if ( VAR_4.integer == 0 ) {
  return;
 }

 if ( VAR_7 || ( !VAR_2.integer && VAR_3.integer) ) {
  FUNC_1( VAR_6->x, VAR_6->y + VAR_6->h/2 + 1, VAR_6->w, VAR_6->h, VAR_5.media.armorIcon );
 } else if (VAR_2.integer) {
  FUNC_2( VAR_8 );
  VAR_9[0] = 90;
  VAR_9[1] = 0;
  VAR_9[2] = -10;
  VAR_8[VAR_0] = ( VAR_1.time & 2047 ) * 360 / 2048.0f;
  FUNC_0( VAR_6->x, VAR_6->y, VAR_6->w, VAR_6->h, VAR_5.media.armorModel, 0, VAR_9, VAR_8 );
 }
}
