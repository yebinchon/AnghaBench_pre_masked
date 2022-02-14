
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_7__ {float aviSoundFrameRemainder; } ;
struct TYPE_6__ {int samples; int channels; float speed; int submission_chunk; } ;
struct TYPE_5__ {int value; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (int ,float) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_4__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(void)
{
 int VAR_6;
 static int VAR_7;
 static int VAR_8;
 int VAR_9;

 VAR_9 = VAR_2.samples / VAR_2.channels;

 if( FUNC_0( ) )
 {
  float VAR_10 = FUNC_3(VAR_0->value, 1000.0f);
  float VAR_11 = FUNC_2(VAR_2.speed / VAR_10, 1.0f) + VAR_1.aviSoundFrameRemainder;

  int VAR_12 = (int)VAR_11;
  VAR_5 += VAR_12;
  VAR_1.aviSoundFrameRemainder = VAR_11 - VAR_12;

  return;
 }



 VAR_6 = FUNC_4();
 if (VAR_6 < VAR_8)
 {
  VAR_7++;

  if (VAR_4 > 0x40000000)
  {
   VAR_7 = 0;
   VAR_4 = VAR_9;
   FUNC_5 ();
  }
 }
 VAR_8 = VAR_6;

 VAR_5 = VAR_7*VAR_9 + VAR_6/VAR_2.channels;
 if ( VAR_2.submission_chunk < 256 ) {
  VAR_4 = VAR_5 + VAR_3->value * VAR_2.speed;
 } else {
  VAR_4 = VAR_5 + VAR_2.submission_chunk;
 }
}
