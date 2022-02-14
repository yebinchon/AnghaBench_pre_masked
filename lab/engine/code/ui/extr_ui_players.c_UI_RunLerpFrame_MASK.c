
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int playerInfo_t ;
struct TYPE_5__ {int animationNumber; scalar_t__ frameTime; int oldFrame; int frame; scalar_t__ oldFrameTime; scalar_t__ animationTime; double backlerp; TYPE_2__* animation; } ;
typedef TYPE_1__ lerpFrame_t ;
struct TYPE_6__ {int frameLerp; int numFrames; int loopFrames; int firstFrame; scalar_t__ flipflop; scalar_t__ reversed; } ;
typedef TYPE_2__ animation_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1( playerInfo_t *VAR_1, lerpFrame_t *VAR_2, int VAR_3 ) {
 int VAR_4, VAR_5;
 animation_t *VAR_6;


 if ( VAR_3 != VAR_2->animationNumber || !VAR_2->animation ) {
  FUNC_0( VAR_1, VAR_2, VAR_3 );
 }



 if ( VAR_0 >= VAR_2->frameTime ) {
  VAR_2->oldFrame = VAR_2->frame;
  VAR_2->oldFrameTime = VAR_2->frameTime;


  VAR_6 = VAR_2->animation;
  if ( !VAR_6->frameLerp ) {
   return;
  }
  if ( VAR_0 < VAR_2->animationTime ) {
   VAR_2->frameTime = VAR_2->animationTime;
  } else {
   VAR_2->frameTime = VAR_2->oldFrameTime + VAR_6->frameLerp;
  }
  VAR_4 = ( VAR_2->frameTime - VAR_2->animationTime ) / VAR_6->frameLerp;

  VAR_5 = VAR_6->numFrames;
  if (VAR_6->flipflop) {
   VAR_5 *= 2;
  }
  if ( VAR_4 >= VAR_5 ) {
   VAR_4 -= VAR_5;
   if ( VAR_6->loopFrames ) {
    VAR_4 %= VAR_6->loopFrames;
    VAR_4 += VAR_6->numFrames - VAR_6->loopFrames;
   } else {
    VAR_4 = VAR_5 - 1;


    VAR_2->frameTime = VAR_0;
   }
  }
  if ( VAR_6->reversed ) {
   VAR_2->frame = VAR_6->firstFrame + VAR_6->numFrames - 1 - VAR_4;
  }
  else if (VAR_6->flipflop && VAR_4>=VAR_6->numFrames) {
   VAR_2->frame = VAR_6->firstFrame + VAR_6->numFrames - 1 - (VAR_4%VAR_6->numFrames);
  }
  else {
   VAR_2->frame = VAR_6->firstFrame + VAR_4;
  }
  if ( VAR_0 > VAR_2->frameTime ) {
   VAR_2->frameTime = VAR_0;
  }
 }

 if ( VAR_2->frameTime > VAR_0 + 200 ) {
  VAR_2->frameTime = VAR_0;
 }

 if ( VAR_2->oldFrameTime > VAR_0 ) {
  VAR_2->oldFrameTime = VAR_0;
 }

 if ( VAR_2->frameTime == VAR_2->oldFrameTime ) {
  VAR_2->backlerp = 0;
 } else {
  VAR_2->backlerp = 1.0 - (float)( VAR_0 - VAR_2->oldFrameTime ) / ( VAR_2->frameTime - VAR_2->oldFrameTime );
 }
}
