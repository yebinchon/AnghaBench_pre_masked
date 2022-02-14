
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refCount; char* name; scalar_t__ width; scalar_t__ height; char* filename; int * pixels; } ;
typedef TYPE_1__ image_t ;
typedef int ddsPF_t ;
typedef int ddsBuffer_t ;
typedef char byte ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int **,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (char*,int,int **,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (char*,int,int **,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (char*,char*,int **,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,unsigned char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int *,scalar_t__,scalar_t__) ;
 int FUNC_12 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char const*,void**,int ) ;

image_t *FUNC_18( const char *VAR_4 ){
 int VAR_5;
 image_t *VAR_6;
 char VAR_7[ 1024 ];
 int VAR_8;
 byte *VAR_9 = ((void*)0);



 FUNC_3();


 if ( VAR_4 == ((void*)0) || VAR_4[ 0 ] == '\0' ) {
  return ((void*)0);
 }


 FUNC_15( VAR_7, VAR_4 );
 FUNC_8( VAR_7 );


 VAR_6 = FUNC_2( VAR_7 );
 if ( VAR_6 != ((void*)0) ) {
  VAR_6->refCount++;
  return VAR_6;
 }


 VAR_6 = ((void*)0);
 for ( VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
 {
  if ( VAR_2[ VAR_5 ].name == ((void*)0) ) {
   VAR_6 = &VAR_2[ VAR_5 ];
   break;
  }
 }


 if ( VAR_6 == ((void*)0) ) {
  FUNC_1( "MAX_IMAGES (%d) exceeded, there are too many image files referenced by the map.", VAR_0 );
 }


 VAR_6->name = FUNC_13( FUNC_16( VAR_7 ) + 1 );
 FUNC_15( VAR_6->name, VAR_7 );


 FUNC_8( VAR_7 );
 FUNC_14( VAR_7, ".tga" );
 VAR_8 = FUNC_17( (const char*) VAR_7, (void**) &VAR_9, 0 );
 if ( VAR_8 > 0 ) {
  FUNC_7( VAR_9, VAR_9 + VAR_8, &VAR_6->pixels, &VAR_6->width, &VAR_6->height );
 }
 else
 {

  FUNC_8( VAR_7 );
  FUNC_14( VAR_7, ".png" );
  VAR_8 = FUNC_17( (const char*) VAR_7, (void**) &VAR_9, 0 );
  if ( VAR_8 > 0 ) {
   FUNC_6( VAR_9, VAR_8, &VAR_6->pixels, &VAR_6->width, &VAR_6->height );
  }
  else
  {

   FUNC_8( VAR_7 );
   FUNC_14( VAR_7, ".jpg" );
   VAR_8 = FUNC_17( (const char*) VAR_7, (void**) &VAR_9, 0 );
   if ( VAR_8 > 0 ) {
    if ( FUNC_5( VAR_9, VAR_8, &VAR_6->pixels, &VAR_6->width, &VAR_6->height ) == -1 && VAR_6->pixels != ((void*)0) ) {
     FUNC_9( VAR_1, "WARNING: LoadJPGBuff: %s\n", (unsigned char*) VAR_6->pixels );
    }
   }
   else
   {

    FUNC_8( VAR_7 );
    FUNC_14( VAR_7, ".dds" );
    VAR_8 = FUNC_17( (const char*) VAR_7, (void**) &VAR_9, 0 );
    if ( VAR_8 > 0 ) {
     FUNC_4( VAR_9, VAR_8, &VAR_6->pixels, &VAR_6->width, &VAR_6->height );



     {
      ddsPF_t VAR_10;
      FUNC_0( (ddsBuffer_t*) VAR_9, ((void*)0), ((void*)0), &VAR_10 );
      FUNC_10( "pf = %d\n", VAR_10 );
      if ( VAR_6->width > 0 ) {
       FUNC_8( VAR_7 );
       FUNC_14( VAR_7, "_converted.tga" );
       FUNC_11( "C:\\games\\quake3\\baseq3\\textures\\rad\\dds_converted.tga", VAR_6->pixels, VAR_6->width, VAR_6->height );
      }
     }

    }
   }
  }
 }


 FUNC_12( VAR_9 );


 if ( VAR_8 <= 0 || VAR_6->width <= 0 || VAR_6->height <= 0 || VAR_6->pixels == ((void*)0) ) {


  FUNC_12( VAR_6->name );
  VAR_6->name = ((void*)0);
  return ((void*)0);
 }


 VAR_6->filename = FUNC_13( FUNC_16( VAR_7 ) + 1 );
 FUNC_15( VAR_6->filename, VAR_7 );


 VAR_6->refCount = 1;
 VAR_3++;


 return VAR_6;
}
