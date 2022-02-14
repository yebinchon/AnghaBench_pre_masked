
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int h; } ;
typedef TYPE_1__ SDL_Rect ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1( const void *VAR_1, const void *VAR_2 )
{
 const float VAR_3 = 0.001f;
 SDL_Rect *VAR_4 = (SDL_Rect *)VAR_1;
 SDL_Rect *VAR_5 = (SDL_Rect *)VAR_2;
 float VAR_6 = (float)VAR_4->w / (float)VAR_4->h;
 float VAR_7 = (float)VAR_5->w / (float)VAR_5->h;
 int VAR_8 = VAR_4->w * VAR_4->h;
 int VAR_9 = VAR_5->w * VAR_5->h;
 float VAR_10 = FUNC_0( VAR_6 - VAR_0 );
 float VAR_11 = FUNC_0( VAR_7 - VAR_0 );
 float VAR_12 = VAR_10 - VAR_11;

 if( VAR_12 > VAR_3 )
  return 1;
 else if( VAR_12 < -VAR_3 )
  return -1;
 else
  return VAR_8 - VAR_9;
}
