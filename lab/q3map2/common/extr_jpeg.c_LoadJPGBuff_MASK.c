
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int error_exit; } ;
struct my_jpeg_error_mgr {int setjmp_buffer; TYPE_2__ pub; } ;
struct jpeg_decompress_struct {int output_width; int output_components; int output_height; int output_scanline; int out_color_components; TYPE_1__* mem; int err; } ;
typedef int j_common_ptr ;
struct TYPE_3__ {int * (* alloc_sarray ) (int ,int ,int,int) ;} ;
typedef int * JSAMPARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,unsigned char*,int) ;
 int FUNC_1 (int ,int,unsigned char*,int) ;
 int FUNC_2 (int ,int,unsigned char*,int) ;
 int FUNC_3 (struct jpeg_decompress_struct*,void*,int) ;
 int FUNC_4 (struct jpeg_decompress_struct*) ;
 int FUNC_5 (struct jpeg_decompress_struct*) ;
 int FUNC_6 (struct jpeg_decompress_struct*) ;
 int FUNC_7 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_8 (struct jpeg_decompress_struct*,int *,int) ;
 int FUNC_9 (struct jpeg_decompress_struct*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (unsigned char*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int ,int ,int,int) ;

int FUNC_15( void *VAR_4, int VAR_5, unsigned char **VAR_6, int *VAR_7, int *VAR_8 ) {
 struct jpeg_decompress_struct VAR_9;
 struct my_jpeg_error_mgr VAR_10;
 JSAMPARRAY VAR_11;
 int VAR_12, VAR_13;

 VAR_9.err = FUNC_10( &VAR_10.pub );
 VAR_10.pub.error_exit = VAR_3;

 if ( FUNC_13( VAR_10.setjmp_buffer ) ) {
  *VAR_6 = (unsigned char*)VAR_2;
  FUNC_5( &VAR_9 );
  return -1;
 }

 FUNC_4( &VAR_9 );
 FUNC_3( &VAR_9, VAR_4, VAR_5 );
 FUNC_7( &VAR_9, VAR_1 );
 FUNC_9( &VAR_9 );

 VAR_12 = VAR_9.output_width * VAR_9.output_components;

 VAR_13 = VAR_9.output_width * VAR_9.output_height * 4;
 *VAR_7 = VAR_9.output_width;
 *VAR_8 = VAR_9.output_height;
 *VAR_6 = (unsigned char*)( FUNC_11( VAR_13 + 1 ) );
 FUNC_12( *VAR_6, 0, VAR_13 + 1 );

 VAR_11 = ( *VAR_9.mem->alloc_sarray )( ( j_common_ptr ) & VAR_9, VAR_0, VAR_12, 1 );

 while ( VAR_9.output_scanline < VAR_9.output_height )
 {
  FUNC_8( &VAR_9, VAR_11, 1 );

  if ( VAR_9.out_color_components == 4 ) {
   FUNC_1( VAR_11[0], VAR_9.output_width, *VAR_6, VAR_9.output_scanline - 1 );
  }
  else if ( VAR_9.out_color_components == 3 ) {
   FUNC_2( VAR_11[0], VAR_9.output_width, *VAR_6, VAR_9.output_scanline - 1 );
  }
  else if ( VAR_9.out_color_components == 1 ) {
   FUNC_0( VAR_11[0], VAR_9.output_width, *VAR_6, VAR_9.output_scanline - 1 );
  }
 }

 FUNC_6( &VAR_9 );
 FUNC_5( &VAR_9 );

 return 0;
}
