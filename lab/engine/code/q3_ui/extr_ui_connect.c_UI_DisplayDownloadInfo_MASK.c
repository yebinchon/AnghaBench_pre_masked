
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int realtime; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char const*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_4 ;
 char* FUNC_6 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_7( const char *VAR_5 ) {
 static char VAR_6[] = "Downloading:";
 static char VAR_7[] = "Estimated time left:";
 static char VAR_8[] = "Transfer rate:";

 int VAR_9, VAR_10, VAR_11;
 char VAR_12[64], VAR_13[64], VAR_14[64], VAR_15[64];
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = VAR_1|VAR_2|VAR_0;
 const char *VAR_20;

 VAR_9 = FUNC_5( "cl_downloadSize" );
 VAR_10 = FUNC_5( "cl_downloadCount" );
 VAR_11 = FUNC_5( "cl_downloadTime" );

 VAR_18 = FUNC_3( VAR_6 ) * FUNC_2( VAR_19 );
 VAR_17 = FUNC_3( VAR_7 ) * FUNC_2( VAR_19 );
 if (VAR_17 > VAR_18) VAR_18 = VAR_17;
 VAR_17 = FUNC_3( VAR_8 ) * FUNC_2( VAR_19 );
 if (VAR_17 > VAR_18) VAR_18 = VAR_17;
 VAR_18 += 16;

 FUNC_0( 8, 128, VAR_6, VAR_19, VAR_3 );
 FUNC_0( 8, 160, VAR_7, VAR_19, VAR_3 );
 FUNC_0( 8, 224, VAR_8, VAR_19, VAR_3 );

 if (VAR_9 > 0) {
  VAR_20 = FUNC_6( "%s (%d%%)", VAR_5, (int)( (float)VAR_10 * 100.0f / VAR_9 ) );
 } else {
  VAR_20 = VAR_5;
 }

 FUNC_0( VAR_18, 128, VAR_20, VAR_19, VAR_3 );

 FUNC_4( VAR_12, sizeof VAR_12, VAR_10 );
 FUNC_4( VAR_13, sizeof VAR_13, VAR_9 );

 if (VAR_10 < 4096 || !VAR_11) {
  FUNC_0( VAR_18, 160, "estimating", VAR_19, VAR_3 );
  FUNC_0( VAR_18, 192,
   FUNC_6("(%s of %s copied)", VAR_12, VAR_13), VAR_19, VAR_3 );
 } else {
   if ( (VAR_4.realtime - VAR_11) / 1000) {
   VAR_16 = VAR_10 / ((VAR_4.realtime - VAR_11) / 1000);

  } else {
   VAR_16 = 0;
  }

  FUNC_4( VAR_14, sizeof VAR_14, VAR_16 );


  if (VAR_9 && VAR_16) {
   int VAR_21 = VAR_9 / VAR_16;


   VAR_21 = (VAR_21 - (((VAR_10/1024) * VAR_21) / (VAR_9/1024))) * 1000;

   FUNC_1 ( VAR_15, sizeof VAR_15, VAR_21 );


   FUNC_0( VAR_18, 160,
    VAR_15, VAR_19, VAR_3 );
   FUNC_0( VAR_18, 192,
    FUNC_6("(%s of %s copied)", VAR_12, VAR_13), VAR_19, VAR_3 );
  } else {
   FUNC_0( VAR_18, 160,
    "estimating", VAR_19, VAR_3 );
   if (VAR_9) {
    FUNC_0( VAR_18, 192,
     FUNC_6("(%s of %s copied)", VAR_12, VAR_13), VAR_19, VAR_3 );
   } else {
    FUNC_0( VAR_18, 192,
     FUNC_6("(%s copied)", VAR_12), VAR_19, VAR_3 );
   }
  }

  if (VAR_16) {
   FUNC_0( VAR_18, 224,
    FUNC_6("%s/Sec", VAR_14), VAR_19, VAR_3 );
  }
 }
}
