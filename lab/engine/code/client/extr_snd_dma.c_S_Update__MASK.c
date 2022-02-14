
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {float speed; unsigned int submission_chunk; int samples; int channels; } ;
struct TYPE_5__ {float value; } ;
struct TYPE_4__ {float value; } ;


 float FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(void) {
 unsigned VAR_6;
 int VAR_7;
 static float VAR_8 = 0.0f;
 float VAR_9, VAR_10;
 float VAR_11, VAR_12;
 static int VAR_13 = -1;

 if ( !VAR_4 || VAR_3 ) {
  return;
 }

 VAR_11 = FUNC_0();


 FUNC_3();

 if (VAR_5 == VAR_13) {
  return;
 }
 VAR_13 = VAR_5;



 FUNC_5();

 VAR_12 = VAR_11 - VAR_8;
 if (VAR_12<11) {
  VAR_12 = 11;
 }

 VAR_9 = VAR_2->value * VAR_0.speed;
 VAR_10 = VAR_1->value + VAR_12*VAR_0.speed*0.01;

 if (VAR_10 < VAR_9) {
  VAR_9 = VAR_10;
 }


 VAR_6 = VAR_5 + VAR_9;


 VAR_6 = (VAR_6 + VAR_0.submission_chunk-1)
  & ~(VAR_0.submission_chunk-1);


 VAR_7 = VAR_0.samples >> (VAR_0.channels-1);
 if (VAR_6 - VAR_5 > VAR_7)
  VAR_6 = VAR_5 + VAR_7;



 FUNC_1 ();

 FUNC_4 (VAR_6);

 FUNC_2 ();

 VAR_8 = VAR_11;
}
