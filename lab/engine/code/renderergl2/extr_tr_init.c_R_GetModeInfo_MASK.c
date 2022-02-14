
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; float pixelAspect; } ;
typedef TYPE_1__ vidmode_t ;
typedef int qboolean ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;

qboolean FUNC_0( int *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12, float *VAR_13, int VAR_14 ) {
 vidmode_t *VAR_15;
 float VAR_16;

 if ( VAR_14 < -1 ) {
  return VAR_0;
 }
 if ( VAR_14 >= VAR_8 ) {
  return VAR_0;
 }

 if ( VAR_14 == -1 ) {
  *VAR_9 = VAR_6->integer;
  *VAR_10 = VAR_5->integer;
  *VAR_11 = VAR_3->integer;
  *VAR_12 = VAR_2->integer;
  VAR_16 = VAR_4->value;
 } else {
  VAR_15 = &VAR_7[VAR_14];

  *VAR_9 = VAR_15->width;
  *VAR_10 = VAR_15->height;
  *VAR_11 = VAR_3->integer;
  *VAR_12 = VAR_2->integer;
  VAR_16 = VAR_15->pixelAspect;
 }

 *VAR_13 = (float)*VAR_9 / ( *VAR_10 * VAR_16 );

 return VAR_1;
}
