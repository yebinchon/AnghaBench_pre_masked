
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


typedef int vec3_t ;
typedef int qhandle_t ;
struct TYPE_10__ {scalar_t__ type; TYPE_7__* modelData; TYPE_3__** mdv; TYPE_1__* bmodel; } ;
typedef TYPE_2__ model_t ;
struct TYPE_11__ {TYPE_4__* frames; } ;
typedef TYPE_3__ mdvModel_t ;
struct TYPE_12__ {scalar_t__* bounds; } ;
typedef TYPE_4__ mdvFrame_t ;
struct TYPE_13__ {int ofsFrames; } ;
typedef TYPE_5__ mdrHeader_t ;
struct TYPE_14__ {scalar_t__* bounds; } ;
typedef TYPE_6__ mdrFrame_t ;
struct TYPE_15__ {scalar_t__ bounds; } ;
typedef TYPE_7__ iqmData_t ;
typedef int byte ;
struct TYPE_9__ {scalar_t__* bounds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3( qhandle_t VAR_4, vec3_t VAR_5, vec3_t VAR_6 ) {
 model_t *VAR_7;

 VAR_7 = FUNC_0( VAR_4 );

 if(VAR_7->type == VAR_0) {
  FUNC_2( VAR_7->bmodel->bounds[0], VAR_5 );
  FUNC_2( VAR_7->bmodel->bounds[1], VAR_6 );

  return;
 } else if (VAR_7->type == VAR_3) {
  mdvModel_t *VAR_8;
  mdvFrame_t *VAR_9;

  VAR_8 = VAR_7->mdv[0];
  VAR_9 = VAR_8->frames;

  FUNC_2( VAR_9->bounds[0], VAR_5 );
  FUNC_2( VAR_9->bounds[1], VAR_6 );

  return;
 } else if (VAR_7->type == VAR_2) {
  mdrHeader_t *VAR_10;
  mdrFrame_t *VAR_11;

  VAR_10 = (mdrHeader_t *)VAR_7->modelData;
  VAR_11 = (mdrFrame_t *) ((byte *)VAR_10 + VAR_10->ofsFrames);

  FUNC_2( VAR_11->bounds[0], VAR_5 );
  FUNC_2( VAR_11->bounds[1], VAR_6 );

  return;
 } else if(VAR_7->type == VAR_1) {
  iqmData_t *VAR_12;

  VAR_12 = VAR_7->modelData;

  if(VAR_12->bounds)
  {
   FUNC_2(VAR_12->bounds, VAR_5);
   FUNC_2(VAR_12->bounds + 3, VAR_6);
   return;
  }
 }

 FUNC_1( VAR_5 );
 FUNC_1( VAR_6 );
}
