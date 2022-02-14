
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int samples; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short* VAR_4 ;
 int* VAR_5 ;

void FUNC_3 (unsigned long *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_5 = (int *) VAR_1;
 VAR_9 = VAR_2;

 while (VAR_9 < VAR_7)
 {

  VAR_8 = VAR_9 & ((VAR_0.samples>>1)-1);

  VAR_4 = (short *) VAR_6 + (VAR_8<<1);

  VAR_3 = (VAR_0.samples>>1) - VAR_8;
  if (VAR_9 + VAR_3 > VAR_7)
   VAR_3 = VAR_7 - VAR_9;

  VAR_3 <<= 1;


  FUNC_2 ();

  VAR_5 += VAR_3;
  VAR_9 += (VAR_3>>1);

  if( FUNC_0( ) )
   FUNC_1( (byte *)VAR_4, VAR_3 << 1 );
 }
}
