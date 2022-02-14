
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_3__ {int id_length; int colormap_type; int image_type; int colormap_index; int colormap_length; int colormap_size; int x_origin; int y_origin; int width; int height; int pixel_size; int attributes; } ;
typedef TYPE_1__ TargaHeader ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int* FUNC_2 (int) ;

void FUNC_3( const byte *VAR_0, const byte *VAR_1, byte **VAR_2, int *VAR_3, int *VAR_4 ){
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 byte *VAR_19, *VAR_20;
 const byte *VAR_21;
 unsigned char *VAR_22;
 TargaHeader VAR_23;
 unsigned char VAR_24[256 * 4];

 *VAR_2 = ((void*)0);


 if ( VAR_1 - VAR_0 < 19 ) {
  return;
 }

 VAR_23.id_length = VAR_0[0];
 VAR_23.colormap_type = VAR_0[1];
 VAR_23.image_type = VAR_0[2];

 VAR_23.colormap_index = VAR_0[3] + VAR_0[4] * 256;
 VAR_23.colormap_length = VAR_0[5] + VAR_0[6] * 256;
 VAR_23.colormap_size = VAR_0[7];
 VAR_23.x_origin = VAR_0[8] + VAR_0[9] * 256;
 VAR_23.y_origin = VAR_0[10] + VAR_0[11] * 256;
 VAR_23.width = VAR_17 = VAR_0[12] + VAR_0[13] * 256;
 VAR_23.height = VAR_18 = VAR_0[14] + VAR_0[15] * 256;

 VAR_23.pixel_size = VAR_0[16];
 VAR_23.attributes = VAR_0[17];


 VAR_21 = VAR_0 + 18;


 VAR_21 += VAR_23.id_length;




 if ( VAR_23.colormap_type ) {
  if ( VAR_23.colormap_length > 256 ) {
   FUNC_1( &VAR_23, "LoadTGA: only up to 256 colormap_length supported\n" );
   return;
  }
  if ( VAR_23.colormap_index ) {
   FUNC_1( &VAR_23, "LoadTGA: colormap_index not supported\n" );
   return;
  }
  if ( VAR_23.colormap_size == 24 ) {
   for ( VAR_5 = 0; VAR_5 < VAR_23.colormap_length; VAR_5++ )
   {
    VAR_24[VAR_5 * 4 + 2] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 1] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 0] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 3] = 255;
   }
  }
  else if ( VAR_23.colormap_size == 32 ) {
   for ( VAR_5 = 0; VAR_5 < VAR_23.colormap_length; VAR_5++ )
   {
    VAR_24[VAR_5 * 4 + 2] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 1] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 0] = *VAR_21++;
    VAR_24[VAR_5 * 4 + 3] = *VAR_21++;
   }
  }
  else
  {
   FUNC_1( &VAR_23, "LoadTGA: Only 32 and 24 bit colormap_size supported\n" );
   return;
  }
 }


 if ( VAR_23.image_type == 2 || VAR_23.image_type == 10 ) {
  if ( VAR_23.pixel_size != 24 && VAR_23.pixel_size != 32 ) {
   FUNC_1( &VAR_23, "LoadTGA: only 24bit and 32bit pixel sizes supported for type 2 and type 10 images\n" );
   return;
  }
 }
 else if ( VAR_23.image_type == 1 || VAR_23.image_type == 9 ) {
  if ( VAR_23.pixel_size != 8 ) {
   FUNC_1( &VAR_23, "LoadTGA: only 8bit pixel size for type 1, 3, 9, and 11 images supported\n" );
   return;
  }
 }
 else if ( VAR_23.image_type == 3 || VAR_23.image_type == 11 ) {
  if ( VAR_23.pixel_size != 8 ) {
   FUNC_1( &VAR_23, "LoadTGA: only 8bit pixel size for type 1, 3, 9, and 11 images supported\n" );
   return;
  }
 }
 else
 {
  FUNC_1( &VAR_23, "LoadTGA: Only type 1, 2, 3, 9, 10, and 11 targa RGB images supported" );
  return;
 }

 if ( VAR_23.attributes & 0x10 ) {
  FUNC_1( &VAR_23, "LoadTGA: origin must be in top left or bottom left, top right and bottom right are not supported\n" );
  return;
 }


 VAR_16 = VAR_23.attributes & 0x0F;
 if ( VAR_16 != 8 && VAR_16 != 0 ) {
  FUNC_1( &VAR_23, "LoadTGA: only 0 or 8 attribute (alpha) bits supported\n" );
  return;
 }

 VAR_20 = FUNC_2( VAR_17 * VAR_18 * 4 );
 if ( !VAR_20 ) {
  FUNC_0( "LoadTGA: not enough memory for %i by %i image\n", VAR_17, VAR_18 );
  return;
 }


 if ( ( VAR_23.attributes & 0x20 ) == 0 ) {
  VAR_19 = VAR_20 + ( VAR_18 - 1 ) * VAR_17 * 4;
  VAR_7 = -VAR_17 * 4 * 2;
 }
 else
 {
  VAR_19 = VAR_20;
  VAR_7 = 0;
 }

 VAR_8 = VAR_23.image_type == 9 || VAR_23.image_type == 10 || VAR_23.image_type == 11;
 VAR_5 = 0;
 VAR_6 = 0;
 VAR_10 = VAR_11 = VAR_12 = VAR_13 = 255;
 while ( VAR_6 < VAR_18 )
 {

  VAR_9 = 1000000;
  VAR_14 = 1000000;
  if ( VAR_8 && VAR_21 < VAR_1 ) {
   VAR_14 = *VAR_21++;

   if ( VAR_14 & 0x80 ) {
    VAR_9 = 1;
   }
   VAR_14 = 1 + ( VAR_14 & 0x7f );
  }

  while ( ( VAR_14-- ) && VAR_6 < VAR_18 )
  {
   if ( VAR_9 > 0 ) {
    VAR_9--;
    VAR_10 = VAR_11 = VAR_12 = VAR_13 = 255;
    if ( VAR_21 < VAR_1 ) {
     switch ( VAR_23.image_type )
     {
     case 1:
     case 9:

      VAR_15 = *VAR_21++;
      if ( VAR_15 >= VAR_23.colormap_length ) {
       VAR_15 = 0;
      }
      VAR_22 = VAR_24 + VAR_15 * 4;
      VAR_10 = VAR_22[0];
      VAR_11 = VAR_22[1];
      VAR_12 = VAR_22[2];
      VAR_13 = VAR_22[3];
      break;
     case 2:
     case 10:

      VAR_12 = *VAR_21++;
      if ( VAR_21 < VAR_1 ) {
       VAR_11 = *VAR_21++;
      }
      if ( VAR_21 < VAR_1 ) {
       VAR_10 = *VAR_21++;
      }
      if ( VAR_23.pixel_size == 32 && VAR_21 < VAR_1 ) {
       VAR_13 = *VAR_21++;
      }
      break;
     case 3:
     case 11:

      VAR_10 = VAR_11 = VAR_12 = *VAR_21++;
      break;
     }
     if ( !VAR_16 ) {
      VAR_13 = 255;
     }
    }
   }
   *VAR_19++ = VAR_10;
   *VAR_19++ = VAR_11;
   *VAR_19++ = VAR_12;
   *VAR_19++ = VAR_13;
   VAR_5++;
   if ( VAR_5 == VAR_17 ) {

    VAR_5 = 0;
    VAR_6++;
    VAR_19 += VAR_7;
   }
  }
 }

 *VAR_2 = VAR_20;
 if ( VAR_3 ) {
  *VAR_3 = VAR_17;
 }
 if ( VAR_4 ) {
  *VAR_4 = VAR_18;
 }
}
