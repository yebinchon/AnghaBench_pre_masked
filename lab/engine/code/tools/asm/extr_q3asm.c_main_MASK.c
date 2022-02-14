
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ symbol_t ;
struct TYPE_5__ {void* verbose; void* vanillaQ3Compatibility; void* writeMapFile; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 double FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int * VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_9 (char*,double) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_12( int VAR_10, char **VAR_11 ) {
 int VAR_12;
 double VAR_13, VAR_14;



 if ( VAR_10 < 2 ) {
  FUNC_5( VAR_11[0] );
 }

 VAR_13 = FUNC_2 ();


 FUNC_11( VAR_5, "q3asm" );
 VAR_2 = 0;

 for ( VAR_12 = 1 ; VAR_12 < VAR_10 ; VAR_12++ ) {
  if ( VAR_11[VAR_12][0] != '-' ) {
   break;
  }
  if( !FUNC_10( VAR_11[ VAR_12 ], "-h" ) ||
      !FUNC_10( VAR_11[ VAR_12 ], "--help" ) ||
      !FUNC_10( VAR_11[ VAR_12 ], "-?") ) {
   FUNC_5( VAR_11[0] );
  }

  if ( !FUNC_10( VAR_11[VAR_12], "-o" ) ) {
   if ( VAR_12 == VAR_10 - 1 ) {
    FUNC_1( "-o must precede a filename" );
   }

   FUNC_11( VAR_5, VAR_11[ VAR_12+1 ] );
   VAR_12++;
   continue;
  }

  if ( !FUNC_10( VAR_11[VAR_12], "-f" ) ) {
   if ( VAR_12 == VAR_10 - 1 ) {
    FUNC_1( "-f must precede a filename" );
   }
   FUNC_4( VAR_11[ VAR_12+1 ] );
   VAR_12++;
   continue;
  }

  if (!FUNC_10(VAR_11[VAR_12], "-b")) {
   if (VAR_12 == VAR_10 - 1) {
    FUNC_1("-b requires an argument");
   }
   VAR_12++;
   VAR_9 = FUNC_6(VAR_11[VAR_12]);
   continue;
  }

  if( !FUNC_10( VAR_11[ VAR_12 ], "-v" ) ) {





   VAR_4.verbose = VAR_6;
   continue;
  }

  if( !FUNC_10( VAR_11[ VAR_12 ], "-m" ) ) {
   VAR_4.writeMapFile = VAR_6;
   continue;
  }

  if( !FUNC_10( VAR_11[ VAR_12 ], "-vq3" ) ) {
   VAR_4.vanillaQ3Compatibility = VAR_6;
   continue;
  }

  FUNC_1( "Unknown option: %s", VAR_11[VAR_12] );
 }


 for ( ; VAR_12 < VAR_10 ; VAR_12++ ) {
  VAR_0[ VAR_2 ] = FUNC_7( VAR_11[ VAR_12 ] );
  VAR_2++;
 }

 if ( VAR_2 == 0 ) {
  FUNC_1( "No file to assemble" );
 }

 FUNC_3();
 FUNC_0();

 {
  symbol_t *VAR_15;

  for ( VAR_12 = 0, VAR_15 = VAR_7 ; VAR_15 ; VAR_15 = VAR_15->next, VAR_12++ ) ;

  if (VAR_4.verbose)
  {
   FUNC_9("%d symbols defined\n", VAR_12);
   FUNC_8(VAR_8);
   FUNC_8(VAR_3);
  }
 }

 VAR_14 = FUNC_2 ();
 FUNC_9 ("%5.0f seconds elapsed\n", VAR_14-VAR_13);

 return VAR_1;
}
