
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int playonwalls; int CIN_WIDTH; int drawX; int CIN_HEIGHT; int drawY; void* dirty; int * buf; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int (* UploadCinematic ) (int,int,int,int,int *,int,void*) ;} ;


 int FUNC_0 (int,int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int,int,int,int,int *,int,void*) ;
 int FUNC_4 (int,int,int,int,int *,int,void*) ;

void FUNC_5(int VAR_6) {
 if (VAR_6 >= 0 && VAR_6 < VAR_0) {
  if (!VAR_1[VAR_6].buf) {
   return;
  }
  if (VAR_1[VAR_6].playonwalls <= 0 && VAR_1[VAR_6].dirty) {
   if (VAR_1[VAR_6].playonwalls == 0) {
    VAR_1[VAR_6].playonwalls = -1;
   } else {
    if (VAR_1[VAR_6].playonwalls == -1) {
     VAR_1[VAR_6].playonwalls = -2;
    } else {
     VAR_1[VAR_6].dirty = VAR_3;
    }
   }
  }


  if (VAR_1[VAR_6].dirty && (VAR_1[VAR_6].CIN_WIDTH != VAR_1[VAR_6].drawX || VAR_1[VAR_6].CIN_HEIGHT != VAR_1[VAR_6].drawY)) {
   int *VAR_7;

   VAR_7 = FUNC_1( 256*256*4 );

   FUNC_0(VAR_6, VAR_7);

   VAR_5.UploadCinematic( VAR_1[VAR_6].CIN_WIDTH, VAR_1[VAR_6].CIN_HEIGHT, 256, 256, (byte *)VAR_7, VAR_6, VAR_4);
   VAR_1[VAR_6].dirty = VAR_3;
   FUNC_2(VAR_7);
  } else {

   VAR_5.UploadCinematic( VAR_1[VAR_6].CIN_WIDTH, VAR_1[VAR_6].CIN_HEIGHT, VAR_1[VAR_6].drawX, VAR_1[VAR_6].drawY,
     VAR_1[VAR_6].buf, VAR_6, VAR_1[VAR_6].dirty);
   VAR_1[VAR_6].dirty = VAR_3;
  }

  if (VAR_2->integer == 0 && VAR_1[VAR_6].playonwalls == 1) {
   VAR_1[VAR_6].playonwalls--;
  }
  else if (VAR_2->integer != 0 && VAR_1[VAR_6].playonwalls != 1) {
   VAR_1[VAR_6].playonwalls = 1;
  }
 }
}
