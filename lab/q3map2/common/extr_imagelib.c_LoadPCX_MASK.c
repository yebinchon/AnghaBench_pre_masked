
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int xmin; int ymin; int xmax; int ymax; int hres; int vres; int bytes_per_line; int palette_type; int manufacturer; int version; int encoding; int bits_per_pixel; int color_planes; } ;
typedef TYPE_1__ pcx_t ;
typedef int byte ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (char*,...) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,int*,int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char const*,void**,int ) ;

void FUNC_7( const char *VAR_0, byte **VAR_1, byte **VAR_2, int *VAR_3, int *VAR_4 ){
 byte *VAR_5;
 pcx_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 byte *VAR_13, *VAR_14;



 VAR_10 = FUNC_6( VAR_0, (void **)&VAR_5, 0 );
 if ( VAR_10 == -1 ) {
  FUNC_1( "LoadPCX: Couldn't read %s", VAR_0 );
 }



 VAR_6 = (pcx_t *)VAR_5;
 VAR_5 = &VAR_6->data;

 VAR_6->xmin = FUNC_2( VAR_6->xmin );
 VAR_6->ymin = FUNC_2( VAR_6->ymin );
 VAR_6->xmax = FUNC_2( VAR_6->xmax );
 VAR_6->ymax = FUNC_2( VAR_6->ymax );
 VAR_6->hres = FUNC_2( VAR_6->hres );
 VAR_6->vres = FUNC_2( VAR_6->vres );
 VAR_6->bytes_per_line = FUNC_2( VAR_6->bytes_per_line );
 VAR_6->palette_type = FUNC_2( VAR_6->palette_type );

 if ( VAR_6->manufacturer != 0x0a
   || VAR_6->version != 5
   || VAR_6->encoding != 1
   || VAR_6->bits_per_pixel != 8
   || VAR_6->xmax >= 640
   || VAR_6->ymax >= 480 ) {
  FUNC_1( "Bad pcx file %s", VAR_0 );
 }

 if ( VAR_2 ) {
  *VAR_2 = FUNC_5( 768 );
  FUNC_4( *VAR_2, (byte *)VAR_6 + VAR_10 - 768, 768 );
 }

 if ( VAR_3 ) {
  *VAR_3 = VAR_6->xmax + 1;
 }
 if ( VAR_4 ) {
  *VAR_4 = VAR_6->ymax + 1;
 }

 if ( !VAR_1 ) {
  return;
 }

 VAR_13 = FUNC_5( ( VAR_6->ymax + 1 ) * ( VAR_6->xmax + 1 ) );
 if ( !VAR_13 ) {
  FUNC_1( "LoadPCX: couldn't allocate" );
 }

 *VAR_1 = VAR_13;
 VAR_14 = VAR_13;


 VAR_9 = VAR_6->color_planes * VAR_6->bytes_per_line;


 for ( VAR_8 = 0; VAR_8 <= VAR_6->ymax; VAR_8++, VAR_14 += VAR_6->xmax + 1 )
 {

  for ( VAR_7 = 0; VAR_7 <= VAR_6->xmax; )
  {

   FUNC_0( VAR_5, VAR_11, VAR_12 );
   while ( VAR_12-- > 0 )
    VAR_14[ VAR_7++ ] = VAR_11;
  }


  while ( VAR_7 < VAR_9 )
  {
   FUNC_0( VAR_5, VAR_11, VAR_12 );
   VAR_7++;
  }
  while ( VAR_12-- > 0 )
   VAR_7++;
 }


 if ( VAR_5 - (byte *) VAR_6 > VAR_10 ) {
  FUNC_1( "PCX file %s was malformed", VAR_0 );
 }
 FUNC_3( VAR_6 );
}
