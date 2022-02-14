
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attributes; int pixel_size; int height; int width; int y_origin; int x_origin; int colormap_size; int colormap_length; int colormap_index; int image_type; int colormap_type; int id_length; } ;
typedef TYPE_1__ TargaHeader ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1( TargaHeader *VAR_0, const char *VAR_1 ){
 FUNC_0( "%s\n:TargaHeader:\nuint8 id_length = %i;\nuint8 colormap_type = %i;\nuint8 image_type = %i;\nuint16 colormap_index = %i;\nuint16 colormap_length = %i;\nuint8 colormap_size = %i;\nuint16 x_origin = %i;\nuint16 y_origin = %i;\nuint16 width = %i;\nuint16 height = %i;\nuint8 pixel_size = %i;\nuint8 attributes = %i;\n", VAR_1, VAR_0->id_length, VAR_0->colormap_type, VAR_0->image_type, VAR_0->colormap_index, VAR_0->colormap_length, VAR_0->colormap_size, VAR_0->x_origin, VAR_0->y_origin, VAR_0->width, VAR_0->height, VAR_0->pixel_size, VAR_0->attributes );
}
