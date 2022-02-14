
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int raw ;
typedef int byte ;
struct TYPE_9__ {int speed; } ;
struct TYPE_6__ {int rate; int width; int channels; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
struct TYPE_7__ {scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int,int,int,int *,scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int,int *) ;
 int FUNC_3 (scalar_t__*) ;
 TYPE_4__ VAR_1 ;
 scalar_t__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_4( void ) {
 int VAR_7;
 int VAR_8;
 byte VAR_9[30000];
 int VAR_10;
 int VAR_11;

 if(!VAR_3) {
  return;
 }


 if ( VAR_4->value <= 0 ) {
  return;
 }


 if ( VAR_5[0] < VAR_6 ) {
  VAR_5[0] = VAR_6;
 }

 while ( VAR_5[0] < VAR_6 + VAR_0 ) {
  VAR_7 = VAR_0 - (VAR_5[0] - VAR_6);


  VAR_8 = VAR_7 * VAR_3->info.rate / VAR_1.speed;

  if (!VAR_8)
   return;


  VAR_10 = VAR_8 * (VAR_3->info.width * VAR_3->info.channels);
  if ( VAR_10 > sizeof(VAR_9) ) {
   VAR_10 = sizeof(VAR_9);
   VAR_8 = VAR_10 / (VAR_3->info.width * VAR_3->info.channels);
  }


  VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_9);
  if(VAR_11 < VAR_10)
  {
   VAR_8 = VAR_11 / (VAR_3->info.width * VAR_3->info.channels);
  }

  if(VAR_11 > 0)
  {

   FUNC_0(0, VAR_8, VAR_3->info.rate,
    VAR_3->info.width, VAR_3->info.channels, VAR_9, VAR_4->value, -1);
  }
  else
  {

   if(VAR_2[0])
   {
    FUNC_3( VAR_2 );
    if(!VAR_3)
     return;
   }
   else
   {
    FUNC_1();
    return;
   }
  }

 }
}
