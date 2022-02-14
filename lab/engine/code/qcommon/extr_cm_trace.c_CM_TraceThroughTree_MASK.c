
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {float fraction; } ;
struct TYPE_9__ {float* extents; scalar_t__ isPoint; TYPE_1__ trace; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_10__ {int type; float dist; int normal; } ;
typedef TYPE_3__ cplane_t ;
struct TYPE_11__ {int* children; TYPE_3__* plane; } ;
typedef TYPE_4__ cNode_t ;
struct TYPE_12__ {TYPE_4__* nodes; int * leafs; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 float FUNC_1 (int ,float*) ;
 float VAR_0 ;
 TYPE_5__ VAR_1 ;

void FUNC_2( traceWork_t *VAR_2, int VAR_3, float VAR_4, float VAR_5, vec3_t VAR_6, vec3_t VAR_7) {
 cNode_t *VAR_8;
 cplane_t *VAR_9;
 float VAR_10, VAR_11, VAR_12;
 float VAR_13, VAR_14;
 float VAR_15;
 vec3_t VAR_16;
 int VAR_17;
 float VAR_18;

 if (VAR_2->trace.fraction <= VAR_4) {
  return;
 }


 if (VAR_3 < 0) {
  FUNC_0( VAR_2, &VAR_1.leafs[-1-VAR_3] );
  return;
 }





 VAR_8 = VAR_1.nodes + VAR_3;
 VAR_9 = VAR_8->plane;


 if ( VAR_9->type < 3 ) {
  VAR_10 = VAR_6[VAR_9->type] - VAR_9->dist;
  VAR_11 = VAR_7[VAR_9->type] - VAR_9->dist;
  VAR_12 = VAR_2->extents[VAR_9->type];
 } else {
  VAR_10 = FUNC_1 (VAR_9->normal, VAR_6) - VAR_9->dist;
  VAR_11 = FUNC_1 (VAR_9->normal, VAR_7) - VAR_9->dist;
  if ( VAR_2->isPoint ) {
   VAR_12 = 0;
  } else {

   VAR_12 = 2048;
  }
 }


 if ( VAR_10 >= VAR_12 + 1 && VAR_11 >= VAR_12 + 1 ) {
  FUNC_2( VAR_2, VAR_8->children[0], VAR_4, VAR_5, VAR_6, VAR_7 );
  return;
 }
 if ( VAR_10 < -VAR_12 - 1 && VAR_11 < -VAR_12 - 1 ) {
  FUNC_2( VAR_2, VAR_8->children[1], VAR_4, VAR_5, VAR_6, VAR_7 );
  return;
 }


 if ( VAR_10 < VAR_11 ) {
  VAR_15 = 1.0/(VAR_10-VAR_11);
  VAR_17 = 1;
  VAR_14 = (VAR_10 + VAR_12 + VAR_0)*VAR_15;
  VAR_13 = (VAR_10 - VAR_12 + VAR_0)*VAR_15;
 } else if (VAR_10 > VAR_11) {
  VAR_15 = 1.0/(VAR_10-VAR_11);
  VAR_17 = 0;
  VAR_14 = (VAR_10 - VAR_12 - VAR_0)*VAR_15;
  VAR_13 = (VAR_10 + VAR_12 + VAR_0)*VAR_15;
 } else {
  VAR_17 = 0;
  VAR_13 = 1;
  VAR_14 = 0;
 }


 if ( VAR_13 < 0 ) {
  VAR_13 = 0;
 }
 if ( VAR_13 > 1 ) {
  VAR_13 = 1;
 }

 VAR_18 = VAR_4 + (VAR_5 - VAR_4)*VAR_13;

 VAR_16[0] = VAR_6[0] + VAR_13*(VAR_7[0] - VAR_6[0]);
 VAR_16[1] = VAR_6[1] + VAR_13*(VAR_7[1] - VAR_6[1]);
 VAR_16[2] = VAR_6[2] + VAR_13*(VAR_7[2] - VAR_6[2]);

 FUNC_2( VAR_2, VAR_8->children[VAR_17], VAR_4, VAR_18, VAR_6, VAR_16 );



 if ( VAR_14 < 0 ) {
  VAR_14 = 0;
 }
 if ( VAR_14 > 1 ) {
  VAR_14 = 1;
 }

 VAR_18 = VAR_4 + (VAR_5 - VAR_4)*VAR_14;

 VAR_16[0] = VAR_6[0] + VAR_14*(VAR_7[0] - VAR_6[0]);
 VAR_16[1] = VAR_6[1] + VAR_14*(VAR_7[1] - VAR_6[1]);
 VAR_16[2] = VAR_6[2] + VAR_14*(VAR_7[2] - VAR_6[2]);

 FUNC_2( VAR_2, VAR_8->children[VAR_17^1], VAR_18, VAR_5, VAR_16, VAR_7 );
}
