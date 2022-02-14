
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int lastTime; int burst; } ;
typedef TYPE_1__ leakyBucket_t ;
struct TYPE_5__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

qboolean FUNC_1( leakyBucket_t *VAR_3, int VAR_4, int VAR_5 ) {
 if ( VAR_3 != ((void*)0) ) {
  if (VAR_2->integer){
   int VAR_6 = FUNC_0();
   int VAR_7 = VAR_6 - VAR_3->lastTime;
   int VAR_8 = VAR_7 / VAR_5;
   int VAR_9 = VAR_7 % VAR_5;

   if ( VAR_8 > VAR_3->burst || VAR_7 < 0 ) {
    VAR_3->burst = 0;
    VAR_3->lastTime = VAR_6;
   } else {
    VAR_3->burst -= VAR_8;
    VAR_3->lastTime = VAR_6 - VAR_9;
   }

   if ( VAR_3->burst < VAR_4 ) {
    VAR_3->burst++;
    return VAR_0;
   }
  } else {
   return VAR_0;
  }
 }

 return VAR_1;
}
