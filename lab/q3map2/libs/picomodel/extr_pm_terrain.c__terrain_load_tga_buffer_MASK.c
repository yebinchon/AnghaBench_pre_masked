
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int image_type; int width; int height; int pixel_size; int attributes; int id_length; int colormap_type; void* y_origin; void* x_origin; int colormap_size; void* colormap_length; void* colormap_index; } ;
typedef TYPE_1__ tga_t ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int) ;
 void* FUNC_1 (short) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3( unsigned char *VAR_1, unsigned char **VAR_2, int *VAR_3, int *VAR_4 ) {
 int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;
 unsigned char *VAR_10;
 unsigned char *VAR_11;
 tga_t VAR_12;
 unsigned char *VAR_13;


 *VAR_2 = ((void*)0);

 if ( VAR_1 == ((void*)0) ) {
  return;
 }

 VAR_11 = VAR_1;

 VAR_12.id_length = *VAR_11++;
 VAR_12.colormap_type = *VAR_11++;
 VAR_12.image_type = *VAR_11++;

 VAR_12.colormap_index = FUNC_1( *(short*)VAR_11 );
 VAR_11 += 2;
 VAR_12.colormap_length = FUNC_1( *(short*) VAR_11 );
 VAR_11 += 2;
 VAR_12.colormap_size = *VAR_11++;
 VAR_12.x_origin = FUNC_1( *(short*) VAR_11 );
 VAR_11 += 2;
 VAR_12.y_origin = FUNC_1( *(short*) VAR_11 );
 VAR_11 += 2;
 VAR_12.width = FUNC_1( *(short*) VAR_11 );
 VAR_11 += 2;
 VAR_12.height = FUNC_1( *(short*) VAR_11 );
 VAR_11 += 2;
 VAR_12.pixel_size = *VAR_11++;
 VAR_12.attributes = *VAR_11++;

 if ( VAR_12.image_type != 2 && VAR_12.image_type != 10 && VAR_12.image_type != 3 ) {
  FUNC_2( VAR_0, "Only type 2 (RGB), 3 (gray), and 10 (RGB) TGA images supported\n" );
  VAR_2 = ((void*)0);
  return;
 }

 if ( VAR_12.colormap_type != 0 ) {
  FUNC_2( VAR_0, "Indexed color TGA images not supported\n" );
  return;
 }

 if ( VAR_12.pixel_size != 32 && VAR_12.pixel_size != 24 && VAR_12.image_type != 3 ) {
  FUNC_2( VAR_0, "Only 32 or 24 bit TGA images supported (not indexed color)\n" );
  VAR_2 = ((void*)0);
  return;
 }

 VAR_7 = VAR_12.width;
 VAR_8 = VAR_12.height;
 VAR_9 = VAR_7 * VAR_8;

 if ( VAR_3 ) {
  *VAR_3 = VAR_7;
 }
 if ( VAR_4 ) {
  *VAR_4 = VAR_8;
 }

 VAR_13 = FUNC_0( VAR_9 * 4 );
 *VAR_2 = VAR_13;

 if ( VAR_12.id_length != 0 ) {
  VAR_11 += VAR_12.id_length;

 }
 if ( VAR_12.image_type == 2 || VAR_12.image_type == 3 ) {

  for ( VAR_5 = VAR_8 - 1; VAR_5 >= 0; VAR_5-- )
  {
   VAR_10 = VAR_13 + VAR_5 * VAR_7 * 4;
   for ( VAR_6 = 0; VAR_6 < VAR_7; VAR_6++ )
   {
    unsigned char VAR_14,VAR_15,VAR_16,VAR_17;
    switch ( VAR_12.pixel_size )
    {

    case 8:
     VAR_16 = *VAR_11++;
     VAR_15 = VAR_16;
     VAR_14 = VAR_16;
     *VAR_10++ = VAR_14;
     *VAR_10++ = VAR_15;
     *VAR_10++ = VAR_16;
     *VAR_10++ = 255;
     break;

    case 24:
     VAR_16 = *VAR_11++;
     VAR_15 = *VAR_11++;
     VAR_14 = *VAR_11++;
     *VAR_10++ = VAR_14;
     *VAR_10++ = VAR_15;
     *VAR_10++ = VAR_16;
     *VAR_10++ = 255;
     break;
    case 32:
     VAR_16 = *VAR_11++;
     VAR_15 = *VAR_11++;
     VAR_14 = *VAR_11++;
     VAR_17 = *VAR_11++;
     *VAR_10++ = VAR_14;
     *VAR_10++ = VAR_15;
     *VAR_10++ = VAR_16;
     *VAR_10++ = VAR_17;
     break;
    default:
     break;
    }
   }
  }
 }


 else if ( VAR_12.image_type == 10 ) {
  unsigned char VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;

  VAR_18 = 0;
  VAR_19 = 0;
  VAR_20 = 0;
  VAR_21 = 0xff;

  for ( VAR_5 = VAR_8 - 1; VAR_5 >= 0; VAR_5-- ) {
   VAR_10 = VAR_13 + VAR_5 * VAR_7 * 4;
   for ( VAR_6 = 0; VAR_6 < VAR_7; ) {
    VAR_22 = *VAR_11++;
    VAR_23 = 1 + ( VAR_22 & 0x7f );
    if ( VAR_22 & 0x80 ) {
     switch ( VAR_12.pixel_size ) {
     case 24:
      VAR_20 = *VAR_11++;
      VAR_19 = *VAR_11++;
      VAR_18 = *VAR_11++;
      VAR_21 = 255;
      break;
     case 32:
      VAR_20 = *VAR_11++;
      VAR_19 = *VAR_11++;
      VAR_18 = *VAR_11++;
      VAR_21 = *VAR_11++;
      break;
     default:

      break;
     }

     for ( VAR_24 = 0; VAR_24 < VAR_23; VAR_24++ ) {
      *VAR_10++ = VAR_18;
      *VAR_10++ = VAR_19;
      *VAR_10++ = VAR_20;
      *VAR_10++ = VAR_21;
      VAR_6++;
      if ( VAR_6 == VAR_7 ) {
       VAR_6 = 0;
       if ( VAR_5 > 0 ) {
        VAR_5--;
       }
       else{
        goto breakOut;
       }
       VAR_10 = VAR_13 + VAR_5 * VAR_7 * 4;
      }
     }
    }
    else {
     for ( VAR_24 = 0; VAR_24 < VAR_23; VAR_24++ ) {
      switch ( VAR_12.pixel_size ) {
      case 24:
       VAR_20 = *VAR_11++;
       VAR_19 = *VAR_11++;
       VAR_18 = *VAR_11++;
       *VAR_10++ = VAR_18;
       *VAR_10++ = VAR_19;
       *VAR_10++ = VAR_20;
       *VAR_10++ = 255;
       break;
      case 32:
       VAR_20 = *VAR_11++;
       VAR_19 = *VAR_11++;
       VAR_18 = *VAR_11++;
       VAR_21 = *VAR_11++;
       *VAR_10++ = VAR_18;
       *VAR_10++ = VAR_19;
       *VAR_10++ = VAR_20;
       *VAR_10++ = VAR_21;
       break;
      default:

       break;
      }
      VAR_6++;
      if ( VAR_6 == VAR_7 ) {
       VAR_6 = 0;
       if ( VAR_5 > 0 ) {
        VAR_5--;
       }
       else{
        goto breakOut;
       }
       VAR_10 = VAR_13 + VAR_5 * VAR_7 * 4;
      }
     }
    }
   }
breakOut:;
  }
 }


 if ( ( VAR_12.attributes & ( 1 << 5 ) ) ) {
  int VAR_25;
  for ( VAR_5 = 0; VAR_5 < .5f * VAR_8; VAR_5++ )
  {
   for ( VAR_6 = 0; VAR_6 < VAR_7; VAR_6++ )
   {
    VAR_25 = *( (int*)VAR_13 + VAR_5 * VAR_7 + VAR_6 );
    *( (int*)VAR_13 + VAR_5 * VAR_7 + VAR_6 ) = *( (int*)VAR_13 + ( ( VAR_8 - 1 ) - VAR_5 ) * VAR_7 + VAR_6 );
    *( (int*)VAR_13 + ( ( VAR_8 - 1 ) - VAR_5 ) * VAR_7 + VAR_6 ) = VAR_25;
   }
  }
 }
}
