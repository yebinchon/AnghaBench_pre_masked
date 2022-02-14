
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
typedef int bspPlane_t ;
typedef int bspNode_t ;
typedef int bspModel_t ;
typedef int bspLeaf_t ;
typedef int bspBrush_t ;
typedef int bspBrushSide_t ;
struct TYPE_5__ {int member_0; int member_1; char* member_2; int radix; int minCount; int name; } ;
typedef TYPE_2__ abspLumpTest_t ;
struct TYPE_6__ {char* ident; int version; TYPE_1__* lumps; } ;
typedef TYPE_3__ abspHeader_t ;
struct TYPE_4__ {int length; int offset; } ;


 int FUNC_0 (char*) ;
 float FUNC_1 (float) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,void**) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;

int FUNC_9( int VAR_2, char **VAR_3 ){
 abspHeader_t *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[ 5 ];
 void *VAR_13;
 float VAR_14;
 char VAR_15[ 1024 ], VAR_16[ 1024 ];
 qboolean VAR_17 = VAR_0;
 abspLumpTest_t *VAR_18;
 static abspLumpTest_t VAR_19[] =
 {
  { sizeof( bspPlane_t ), 6, "IBSP LUMP_PLANES" },
  { sizeof( bspBrush_t ), 1, "IBSP LUMP_BRUSHES" },
  { 8, 6, "IBSP LUMP_BRUSHSIDES" },
  { sizeof( bspBrushSide_t ), 6, "RBSP LUMP_BRUSHSIDES" },
  { sizeof( bspModel_t ), 1, "IBSP LUMP_MODELS" },
  { sizeof( bspNode_t ), 2, "IBSP LUMP_NODES" },
  { sizeof( bspLeaf_t ), 1, "IBSP LUMP_LEAFS" },
  { 104, 3, "IBSP LUMP_DRAWSURFS" },
  { 44, 3, "IBSP LUMP_DRAWVERTS" },
  { 4, 6, "IBSP LUMP_DRAWINDEXES" },
  { 128 * 128 * 3, 1, "IBSP LUMP_LIGHTMAPS" },
  { 256 * 256 * 3, 1, "IBSP LUMP_LIGHTMAPS (256 x 256)" },
  { 512 * 512 * 3, 1, "IBSP LUMP_LIGHTMAPS (512 x 512)" },
  { 0, 0, ((void*)0) }
 };



 if ( VAR_2 < 1 ) {
  FUNC_4( "Usage: q3map -analyze [-lumpswap] [-v] <mapname>\n" );
  return 0;
 }


 for ( VAR_6 = 1; VAR_6 < ( VAR_2 - 1 ); VAR_6++ )
 {

  if ( !FUNC_6( VAR_3[ VAR_6 ], "-lumpswap" ) ) {
   FUNC_4( "Swapped lump structs enabled\n" );
   VAR_17 = VAR_1;
  }
 }


 FUNC_7( VAR_16, FUNC_0( VAR_3[ VAR_6 ] ) );
 FUNC_4( "Loading %s\n", VAR_16 );


 VAR_5 = FUNC_3( VAR_16, (void**) &VAR_4 );
 if ( VAR_5 == 0 || VAR_4 == ((void*)0) ) {
  FUNC_4( "Unable to load %s.\n", VAR_16 );
  return -1;
 }


 FUNC_5( VAR_12, VAR_4->ident, 4 );
 VAR_12[ 4 ] = '\0';
 VAR_7 = FUNC_2( VAR_4->version );

 FUNC_4( "Identity:      %s\n", VAR_12 );
 FUNC_4( "Version:       %d\n", VAR_7 );
 FUNC_4( "---------------------------------------\n" );


 for ( VAR_6 = 0; VAR_6 < 100; VAR_6++ )
 {

  if ( VAR_17 ) {
   VAR_8 = FUNC_2( VAR_4->lumps[ VAR_6 ].length );
   VAR_9 = FUNC_2( VAR_4->lumps[ VAR_6 ].offset );
  }


  else
  {
   VAR_8 = FUNC_2( VAR_4->lumps[ VAR_6 ].offset );
   VAR_9 = FUNC_2( VAR_4->lumps[ VAR_6 ].length );
  }


  VAR_13 = (byte*) VAR_4 + VAR_8;
  VAR_10 = FUNC_2( (int) *( (int*) VAR_13 ) );
  VAR_14 = FUNC_1( (float) *( (float*) VAR_13 ) );
  FUNC_5( VAR_15, (char*) VAR_13, ( VAR_9 < 1024 ? VAR_9 : 1024 ) );
  VAR_15[ 1023 ] = '\0';


  FUNC_4( "Lump:          %d\n", VAR_6 );
  FUNC_4( "Offset:        %d bytes\n", VAR_8 );
  FUNC_4( "Length:        %d bytes\n", VAR_9 );


  if ( VAR_9 > 0 ) {

   FUNC_4( "As hex:        %08X\n", VAR_10 );
   FUNC_4( "As int:        %d\n", VAR_10 );
   FUNC_4( "As float:      %f\n", VAR_14 );
   FUNC_4( "As string:     %s\n", VAR_15 );


   if ( VAR_15[ 0 ] == '{' && VAR_15[ 2 ] == '"' ) {
    FUNC_4( "Type guess:    IBSP LUMP_ENTITIES\n" );
   }
   else if ( FUNC_8( VAR_15, "textures/" ) ) {
    FUNC_4( "Type guess:    IBSP LUMP_SHADERS\n" );
   }
   else
   {

    for ( VAR_18 = VAR_19; VAR_18->radix > 0; VAR_18++ )
    {
     if ( ( VAR_9 % VAR_18->radix ) != 0 ) {
      continue;
     }
     VAR_11 = VAR_9 / VAR_18->radix;
     if ( VAR_11 < VAR_18->minCount ) {
      continue;
     }
     FUNC_4( "Type guess:    %s (%d x %d)\n", VAR_18->name, VAR_11, VAR_18->radix );
    }
   }
  }

  FUNC_4( "---------------------------------------\n" );


  if ( VAR_8 + VAR_9 >= VAR_5 ) {
   break;
  }
 }


 FUNC_4( "Lump count:    %d\n", VAR_6 + 1 );
 FUNC_4( "File size:     %d bytes\n", VAR_5 );


 return 0;
}
