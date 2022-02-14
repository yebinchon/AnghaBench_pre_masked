
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {short left; short right; } ;
typedef TYPE_1__ portable_samplepair_t ;
typedef int byte ;
struct TYPE_11__ {float speed; } ;
struct TYPE_10__ {int origin; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int value; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int*,int*) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 int* VAR_6 ;
 TYPE_1__** VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;

void FUNC_2( int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16, const byte *VAR_17, float VAR_18, int VAR_19)
{
 int VAR_20;
 int VAR_21, VAR_22;
 float VAR_23;
 int VAR_24, VAR_25;
 portable_samplepair_t *VAR_26;

 if ( !VAR_9 || VAR_8 ) {
  return;
 }

 if ( (VAR_12 < 0) || (VAR_12 >= VAR_2) ) {
  return;
 }

 VAR_26 = VAR_7[VAR_12];

 if ( VAR_5->integer ) {
  VAR_24 = VAR_25 = 0;
 } else {
  int VAR_27, VAR_28;

  if ( VAR_19 >= 0 && VAR_19 < VAR_0 ) {

   FUNC_1( VAR_4[ VAR_19 ].origin, 256, &VAR_27, &VAR_28 );
  } else {
   VAR_27 = VAR_28 = 256;
  }

  VAR_24 = VAR_27 * VAR_18 * VAR_11->value;
  VAR_25 = VAR_28 * VAR_18 * VAR_11->value;
 }

 if ( VAR_6[VAR_12] < VAR_10 ) {
  FUNC_0( "S_Base_RawSamples: resetting minimum: %i < %i\n", VAR_6[VAR_12], VAR_10 );
  VAR_6[VAR_12] = VAR_10;
 }

 VAR_23 = (float)VAR_14 / VAR_3.speed;


 if (VAR_16 == 2 && VAR_15 == 2)
 {
  if (VAR_23 == 1.0)
  {
   for (VAR_20=0 ; VAR_20<VAR_13 ; VAR_20++)
   {
    VAR_22 = VAR_6[VAR_12]&(VAR_1-1);
    VAR_6[VAR_12]++;
    VAR_26[VAR_22].left = ((short *)VAR_17)[VAR_20*2] * VAR_24;
    VAR_26[VAR_22].right = ((short *)VAR_17)[VAR_20*2+1] * VAR_25;
   }
  }
  else
  {
   for (VAR_20=0 ; ; VAR_20++)
   {
    VAR_21 = VAR_20*VAR_23;
    if (VAR_21 >= VAR_13)
     break;
    VAR_22 = VAR_6[VAR_12]&(VAR_1-1);
    VAR_6[VAR_12]++;
    VAR_26[VAR_22].left = ((short *)VAR_17)[VAR_21*2] * VAR_24;
    VAR_26[VAR_22].right = ((short *)VAR_17)[VAR_21*2+1] * VAR_25;
   }
  }
 }
 else if (VAR_16 == 1 && VAR_15 == 2)
 {
  for (VAR_20=0 ; ; VAR_20++)
  {
   VAR_21 = VAR_20*VAR_23;
   if (VAR_21 >= VAR_13)
    break;
   VAR_22 = VAR_6[VAR_12]&(VAR_1-1);
   VAR_6[VAR_12]++;
   VAR_26[VAR_22].left = ((short *)VAR_17)[VAR_21] * VAR_24;
   VAR_26[VAR_22].right = ((short *)VAR_17)[VAR_21] * VAR_25;
  }
 }
 else if (VAR_16 == 2 && VAR_15 == 1)
 {
  VAR_24 *= 256;
  VAR_25 *= 256;

  for (VAR_20=0 ; ; VAR_20++)
  {
   VAR_21 = VAR_20*VAR_23;
   if (VAR_21 >= VAR_13)
    break;
   VAR_22 = VAR_6[VAR_12]&(VAR_1-1);
   VAR_6[VAR_12]++;
   VAR_26[VAR_22].left = ((char *)VAR_17)[VAR_21*2] * VAR_24;
   VAR_26[VAR_22].right = ((char *)VAR_17)[VAR_21*2+1] * VAR_25;
  }
 }
 else if (VAR_16 == 1 && VAR_15 == 1)
 {
  VAR_24 *= 256;
  VAR_25 *= 256;

  for (VAR_20=0 ; ; VAR_20++)
  {
   VAR_21 = VAR_20*VAR_23;
   if (VAR_21 >= VAR_13)
    break;
   VAR_22 = VAR_6[VAR_12]&(VAR_1-1);
   VAR_6[VAR_12]++;
   VAR_26[VAR_22].left = (((byte *)VAR_17)[VAR_21]-128) * VAR_24;
   VAR_26[VAR_22].right = (((byte *)VAR_17)[VAR_21]-128) * VAR_25;
  }
 }

 if ( VAR_6[VAR_12] > VAR_10 + VAR_1 ) {
  FUNC_0( "S_Base_RawSamples: overflowed %i > %i\n", VAR_6[VAR_12], VAR_10 );
 }
}
