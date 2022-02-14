
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeDemoFrames; float* timeDemoDurations; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1( void )
{
 int VAR_2;
 int VAR_3;
 float VAR_4 = 0.0f;
 float VAR_5 = 0.0f;

 if( ( VAR_1.timeDemoFrames - 1 ) > VAR_0 )
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1.timeDemoFrames - 1;

 for( VAR_2 = 0; VAR_2 < VAR_3; VAR_2++ )
  VAR_4 += VAR_1.timeDemoDurations[ VAR_2 ];
 VAR_4 /= VAR_3;

 for( VAR_2 = 0; VAR_2 < VAR_3; VAR_2++ )
 {
  float VAR_6 = VAR_1.timeDemoDurations[ VAR_2 ];

  VAR_5 += ( ( VAR_6 - VAR_4 ) * ( VAR_6 - VAR_4 ) );
 }
 VAR_5 /= VAR_3;

 return FUNC_0( VAR_5 );
}
