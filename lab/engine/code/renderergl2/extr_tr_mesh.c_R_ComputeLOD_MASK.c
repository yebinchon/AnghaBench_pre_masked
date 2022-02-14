
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int frame; int origin; } ;
struct TYPE_18__ {TYPE_2__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_19__ {int * bounds; } ;
typedef TYPE_5__ mdvFrame_t ;
struct TYPE_20__ {size_t numBones; int ofsFrames; } ;
typedef TYPE_6__ mdrHeader_t ;
struct TYPE_21__ {int * bounds; int * bones; } ;
typedef TYPE_7__ mdrFrame_t ;
typedef int byte ;
struct TYPE_23__ {int (* ftol ) (float) ;} ;
struct TYPE_22__ {TYPE_3__* currentModel; } ;
struct TYPE_17__ {int numLods; scalar_t__ type; TYPE_1__** mdv; scalar_t__ modelData; } ;
struct TYPE_15__ {TYPE_5__* frames; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {float value; } ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float,int ) ;
 float FUNC_1 (int ,int ) ;
 TYPE_11__* VAR_1 ;
 TYPE_10__* VAR_2 ;
 TYPE_9__ VAR_3 ;
 int FUNC_2 (float) ;
 TYPE_8__ VAR_4 ;

int FUNC_3( trRefEntity_t *VAR_5 ) {
 float VAR_6;
 float VAR_7, VAR_8;
 float VAR_9;
 mdvFrame_t *VAR_10;
 mdrHeader_t *VAR_11;
 mdrFrame_t *VAR_12;
 int VAR_13;

 if ( VAR_4.currentModel->numLods < 2 )
 {

  VAR_13 = 0;
 }
 else
 {



  if(VAR_4.currentModel->type == VAR_0)
  {
   int VAR_14;
   VAR_11 = (mdrHeader_t *) VAR_4.currentModel->modelData;
   VAR_14 = (size_t) (&((mdrFrame_t *)0)->bones[VAR_11->numBones]);

   VAR_12 = (mdrFrame_t *) ((byte *) VAR_11 + VAR_11->ofsFrames + VAR_14 * VAR_5->e.frame);

   VAR_6 = FUNC_1(VAR_12->bounds[0], VAR_12->bounds[1]);
  }
  else
  {

   VAR_10 = VAR_4.currentModel->mdv[0]->frames;

   VAR_10 += VAR_5->e.frame;

   VAR_6 = FUNC_1( VAR_10->bounds[0], VAR_10->bounds[1] );
  }

  if ( ( VAR_9 = FUNC_0( VAR_6, VAR_5->e.origin ) ) != 0 )
  {
   VAR_8 = VAR_2->value;
   if (VAR_8 > 20) VAR_8 = 20;
   VAR_7 = 1.0f - VAR_9 * VAR_8;
  }
  else
  {

   VAR_7 = 0;
  }

  VAR_7 *= VAR_4.currentModel->numLods;
  VAR_13 = VAR_3.ftol(VAR_7);

  if ( VAR_13 < 0 )
  {
   VAR_13 = 0;
  }
  else if ( VAR_13 >= VAR_4.currentModel->numLods )
  {
   VAR_13 = VAR_4.currentModel->numLods - 1;
  }
 }

 VAR_13 += VAR_1->integer;

 if ( VAR_13 >= VAR_4.currentModel->numLods )
  VAR_13 = VAR_4.currentModel->numLods - 1;
 if ( VAR_13 < 0 )
  VAR_13 = 0;

 return VAR_13;
}
