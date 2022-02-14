
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sine_data ;
struct TYPE_8__ {int dmacon; TYPE_1__* aud; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct TYPE_6__ {int audlen; unsigned short audper; int audvol; scalar_t__ audlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;

void FUNC_5( unsigned int VAR_9, unsigned int VAR_10 )
{
 unsigned long VAR_11;

 if (!VAR_7)
  return;

 FUNC_3(VAR_11);
 FUNC_1( &VAR_8 );

 if (VAR_9 > 20 && VAR_9 < 32767) {
  unsigned long VAR_12 = (VAR_4 / VAR_9);

  if (VAR_12 < VAR_3)
   VAR_12 = VAR_3;
  if (VAR_12 > VAR_2)
   VAR_12 = VAR_2;


  VAR_5.aud[2].audlc = VAR_7;
  VAR_5.aud[2].audlen = sizeof(sine_data)/2;
  VAR_5.aud[2].audper = (unsigned short)VAR_12;
  VAR_5.aud[2].audvol = 32;

  if (VAR_10) {
   VAR_8.expires = VAR_6 + VAR_10;
   FUNC_0( &VAR_8 );
  }


  VAR_5.dmacon = VAR_1 | VAR_0;

 } else
  FUNC_4( 0 );

 FUNC_2(VAR_11);
}
