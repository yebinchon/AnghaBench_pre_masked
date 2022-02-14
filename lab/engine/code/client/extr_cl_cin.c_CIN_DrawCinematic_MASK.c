
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {scalar_t__ status; float xpos; float ypos; float width; float height; int CIN_WIDTH; int drawX; int CIN_HEIGHT; int drawY; void* dirty; int * buf; } ;
struct TYPE_3__ {int (* DrawStretchRaw ) (float,float,float,float,int,int,int *,int,void*) ;} ;


 int FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int FUNC_3 (float*,float*,float*,float*) ;
 TYPE_2__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (float,float,float,float,int,int,int *,int,void*) ;
 int FUNC_5 (float,float,float,float,int,int,int *,int,void*) ;

void FUNC_6 (int VAR_6) {
 float VAR_7, VAR_8, VAR_9, VAR_10;
 byte *VAR_11;

 if (VAR_6 < 0 || VAR_6>= VAR_1 || VAR_2[VAR_6].status == VAR_0) return;

 if (!VAR_2[VAR_6].buf) {
  return;
 }

 VAR_7 = VAR_2[VAR_6].xpos;
 VAR_8 = VAR_2[VAR_6].ypos;
 VAR_9 = VAR_2[VAR_6].width;
 VAR_10 = VAR_2[VAR_6].height;
 VAR_11 = VAR_2[VAR_6].buf;
 FUNC_3( &VAR_7, &VAR_8, &VAR_9, &VAR_10 );

 if (VAR_2[VAR_6].dirty && (VAR_2[VAR_6].CIN_WIDTH != VAR_2[VAR_6].drawX || VAR_2[VAR_6].CIN_HEIGHT != VAR_2[VAR_6].drawY)) {
  int *VAR_12;

  VAR_12 = FUNC_1( 256*256*4 );

  FUNC_0(VAR_6, VAR_12);

  VAR_5.DrawStretchRaw( VAR_7, VAR_8, VAR_9, VAR_10, 256, 256, (byte *)VAR_12, VAR_6, VAR_4);
  VAR_2[VAR_6].dirty = VAR_3;
  FUNC_2(VAR_12);
  return;
 }

 VAR_5.DrawStretchRaw( VAR_7, VAR_8, VAR_9, VAR_10, VAR_2[VAR_6].drawX, VAR_2[VAR_6].drawY, VAR_11, VAR_6, VAR_2[VAR_6].dirty);
 VAR_2[VAR_6].dirty = VAR_3;
}
