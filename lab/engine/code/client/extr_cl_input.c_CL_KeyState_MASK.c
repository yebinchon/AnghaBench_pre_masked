
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msec; void* downtime; scalar_t__ active; } ;
typedef TYPE_1__ kbutton_t ;


 int FUNC_0 (char*,int) ;
 void* VAR_0 ;
 float VAR_1 ;

float FUNC_1( kbutton_t *VAR_2 ) {
 float VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->msec;
 VAR_2->msec = 0;

 if ( VAR_2->active ) {

  if ( !VAR_2->downtime ) {
   VAR_4 = VAR_0;
  } else {
   VAR_4 += VAR_0 - VAR_2->downtime;
  }
  VAR_2->downtime = VAR_0;
 }







 VAR_3 = (float)VAR_4 / VAR_1;
 if ( VAR_3 < 0 ) {
  VAR_3 = 0;
 }
 if ( VAR_3 > 1 ) {
  VAR_3 = 1;
 }

 return VAR_3;
}
