
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ writeMapFile; } ;
struct TYPE_3__ {int segmentBase; int imageUsed; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (char*,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * VAR_6 ;
 char** VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (char*,int,...) ;
 TYPE_1__* VAR_16 ;
 int FUNC_9 () ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void FUNC_11( void ) {
 int VAR_18;
 char VAR_19[VAR_4];
 char *VAR_20;

 FUNC_8( "outputFilename: %s\n", VAR_14 );

 for ( VAR_18 = 0 ; VAR_18 < VAR_12 ; VAR_18++ ) {
  FUNC_10( VAR_19, VAR_6[ VAR_18 ] );
  FUNC_1( VAR_19, ".asm" );
  FUNC_4( VAR_19, (void **)&VAR_7[VAR_18] );
 }


 for ( VAR_15 = 0 ; VAR_15 < 2 ; VAR_15++ ) {
  VAR_16[VAR_3].segmentBase = VAR_16[VAR_1].imageUsed;
  VAR_16[VAR_0].segmentBase = VAR_16[VAR_3].segmentBase + VAR_16[VAR_3].imageUsed;
  VAR_16[VAR_2].segmentBase = VAR_16[VAR_0].segmentBase + VAR_16[VAR_0].imageUsed;
  for ( VAR_18 = 0 ; VAR_18 < VAR_5 ; VAR_18++ ) {
   VAR_16[VAR_18].imageUsed = 0;
  }
  VAR_16[VAR_1].imageUsed = 4;
  VAR_11 = 0;

  for ( VAR_18 = 0 ; VAR_18 < VAR_12 ; VAR_18++ ) {
   VAR_8 = VAR_18;
   VAR_10 = VAR_6[ VAR_18 ];
   VAR_9 = 0;
   FUNC_8("pass %i: %s\n", VAR_15, VAR_10 );
   FUNC_7( ((void*)0) );
   VAR_20 = VAR_7[VAR_18];
   while ( VAR_20 ) {
    VAR_20 = FUNC_3( VAR_20 );
    FUNC_0();
   }
  }


  for ( VAR_18 = 0 ; VAR_18 < VAR_5 ; VAR_18++ ) {
   VAR_16[VAR_18].imageUsed = (VAR_16[VAR_18].imageUsed + 3) & ~3;
  }
  if (VAR_15 == 0) {
   FUNC_9();
  }
 }


 FUNC_2( "_stackStart", VAR_16[VAR_0].imageUsed );
 VAR_16[VAR_0].imageUsed += VAR_17;
 FUNC_2( "_stackEnd", VAR_16[VAR_0].imageUsed );


 FUNC_6();


 if( VAR_13.writeMapFile ) {
  FUNC_5();
 }
}
