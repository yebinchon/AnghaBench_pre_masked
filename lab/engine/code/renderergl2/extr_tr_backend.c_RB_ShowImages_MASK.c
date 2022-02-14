
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_7__ {float uploadWidth; float uploadHeight; } ;
typedef TYPE_1__ image_t ;
struct TYPE_11__ {int vidWidth; int vidHeight; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int (* Milliseconds ) () ;int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_8__ {int numImages; TYPE_1__** images; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,float,float,int ,int) ;
 TYPE_5__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_2__ VAR_6 ;

void FUNC_9( void ) {
 int VAR_7;
 image_t *VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 FUNC_2();

 FUNC_4( VAR_0 );

 FUNC_5();

 VAR_13 = VAR_5.Milliseconds();

 for ( VAR_7=0 ; VAR_7<VAR_6.numImages ; VAR_7++ ) {
  VAR_8 = VAR_6.images[VAR_7];

  VAR_11 = VAR_3.vidWidth / 20;
  VAR_12 = VAR_3.vidHeight / 15;
  VAR_9 = VAR_7 % 20 * VAR_11;
  VAR_10 = VAR_7 / 20 * VAR_12;


  if ( VAR_4->integer == 2 ) {
   VAR_11 *= VAR_8->uploadWidth / 512.0f;
   VAR_12 *= VAR_8->uploadHeight / 512.0f;
  }

  {
   vec4_t VAR_15[4];

   FUNC_0(VAR_8, VAR_2);

   FUNC_3(VAR_15[0], VAR_9, VAR_10, 0, 1);
   FUNC_3(VAR_15[1], VAR_9 + VAR_11, VAR_10, 0, 1);
   FUNC_3(VAR_15[2], VAR_9 + VAR_11, VAR_10 + VAR_12, 0, 1);
   FUNC_3(VAR_15[3], VAR_9, VAR_10 + VAR_12, 0, 1);

   FUNC_1(VAR_15);
  }
 }

 FUNC_5();

 VAR_14 = VAR_5.Milliseconds();
 VAR_5.Printf( VAR_1, "%i msec to draw all images\n", VAR_14 - VAR_13 );

}
