
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qhandle_t ;
struct TYPE_10__ {float** axis; float* origin; } ;
typedef TYPE_1__ orientation_t ;
struct TYPE_11__ {scalar_t__ type; int * mdv; scalar_t__ modelData; } ;
typedef TYPE_2__ model_t ;
struct TYPE_12__ {float* origin; float** axis; } ;
typedef TYPE_3__ mdvTag_t ;
typedef int mdrHeader_t ;


 int FUNC_0 (float**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int *,int,char const*,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int,char const*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int,int,float,char const*) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7( orientation_t *VAR_4, qhandle_t VAR_5, int VAR_6, int VAR_7,
      float VAR_8, const char *VAR_9 ) {
 mdvTag_t *VAR_10, *VAR_11;
 mdvTag_t VAR_12, VAR_13;
 int VAR_14;
 float VAR_15, VAR_16;
 model_t *VAR_17;

 VAR_17 = FUNC_2( VAR_5 );
 if ( !VAR_17->mdv[0] )
 {
  if(VAR_17->type == VAR_1)
  {
   VAR_10 = FUNC_1((mdrHeader_t *) VAR_17->modelData, VAR_6, VAR_9, &VAR_12);
   VAR_11 = FUNC_1((mdrHeader_t *) VAR_17->modelData, VAR_7, VAR_9, &VAR_13);
  }
  else if( VAR_17->type == VAR_0 ) {
   return FUNC_4( VAR_4, VAR_17->modelData,
     VAR_6, VAR_7,
     VAR_8, VAR_9 );
  } else {
   VAR_10 = VAR_11 = ((void*)0);
  }
 }
 else
 {
  VAR_10 = FUNC_3( VAR_17->mdv[0], VAR_6, VAR_9 );
  VAR_11 = FUNC_3( VAR_17->mdv[0], VAR_7, VAR_9 );
 }

 if ( !VAR_10 || !VAR_11 ) {
  FUNC_0( VAR_4->axis );
  FUNC_5( VAR_4->origin );
  return VAR_2;
 }

 VAR_15 = VAR_8;
 VAR_16 = 1.0f - VAR_8;

 for ( VAR_14 = 0 ; VAR_14 < 3 ; VAR_14++ ) {
  VAR_4->origin[VAR_14] = VAR_10->origin[VAR_14] * VAR_16 + VAR_11->origin[VAR_14] * VAR_15;
  VAR_4->axis[0][VAR_14] = VAR_10->axis[0][VAR_14] * VAR_16 + VAR_11->axis[0][VAR_14] * VAR_15;
  VAR_4->axis[1][VAR_14] = VAR_10->axis[1][VAR_14] * VAR_16 + VAR_11->axis[1][VAR_14] * VAR_15;
  VAR_4->axis[2][VAR_14] = VAR_10->axis[2][VAR_14] * VAR_16 + VAR_11->axis[2][VAR_14] * VAR_15;
 }
 FUNC_6( VAR_4->axis[0] );
 FUNC_6( VAR_4->axis[1] );
 FUNC_6( VAR_4->axis[2] );
 return VAR_3;
}
