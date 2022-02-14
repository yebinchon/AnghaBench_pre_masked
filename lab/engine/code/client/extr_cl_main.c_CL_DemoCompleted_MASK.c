
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ fileHandle_t ;
typedef int buffer ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {char* string; } ;
struct TYPE_4__ {int timeDemoStart; double timeDemoFrames; char** timeDemoDurations; int timeDemoMaxDuration; int timeDemoMinDuration; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,double,int,double,int ,int,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (char*) ;

void FUNC_10( void )
{
 char VAR_6[ VAR_0 ];

 if( VAR_2 && VAR_2->integer )
 {
  int VAR_7;

  VAR_7 = FUNC_8() - VAR_4.timeDemoStart;
  if( VAR_7 > 0 )
  {


   FUNC_4( VAR_6, sizeof( VAR_6 ),
     "%i frames %3.1f seconds %3.1f fps %d.0/%.1f/%d.0/%.1f ms\n",
     VAR_4.timeDemoFrames,
     VAR_7/1000.0,
     VAR_4.timeDemoFrames*1000.0 / VAR_7,
     VAR_4.timeDemoMinDuration,
     VAR_7 / (float)VAR_4.timeDemoFrames,
     VAR_4.timeDemoMaxDuration,
     FUNC_0( ) );
   FUNC_3( "%s", VAR_6 );


   if( VAR_3 && FUNC_9( VAR_3->string ) > 0 )
   {
    int VAR_8;
    int VAR_9;
    fileHandle_t VAR_10;

    if( ( VAR_4.timeDemoFrames - 1 ) > VAR_1 )
     VAR_9 = VAR_1;
    else
     VAR_9 = VAR_4.timeDemoFrames - 1;

    VAR_10 = FUNC_6( VAR_3->string );
    if( VAR_10 )
    {
     FUNC_7( VAR_10, "# %s", VAR_6 );

     for( VAR_8 = 0; VAR_8 < VAR_9; VAR_8++ )
      FUNC_7( VAR_10, "%d\n", VAR_4.timeDemoDurations[ VAR_8 ] );

     FUNC_5( VAR_10 );
     FUNC_3( "%s written\n", VAR_3->string );
    }
    else
    {
     FUNC_3( "Couldn't open %s for writing\n",
       VAR_3->string );
    }
   }
  }
 }

 FUNC_1( VAR_5 );
 FUNC_2();
}
