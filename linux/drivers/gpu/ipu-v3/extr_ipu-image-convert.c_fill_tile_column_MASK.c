
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_image_tile {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;
struct ipu_image_convert_image {unsigned int num_rows; unsigned int num_cols; struct ipu_image_tile* tile; } ;
struct ipu_image_convert_ctx {size_t* out_tile_map; int rot_mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ipu_image_convert_ctx *VAR_0,
        unsigned int VAR_1,
        struct ipu_image_convert_image *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        struct ipu_image_convert_image *VAR_5,
        unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct ipu_image_tile *VAR_10, *VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_2->num_rows; VAR_8++) {
  VAR_9 = VAR_2->num_cols * VAR_8 + VAR_1;
  VAR_10 = &VAR_2->tile[VAR_9];
  VAR_11 = &VAR_5->tile[VAR_0->out_tile_map[VAR_9]];

  VAR_10->left = VAR_3;
  VAR_10->width = VAR_4;

  if (FUNC_0(VAR_0->rot_mode)) {
   VAR_11->top = VAR_6;
   VAR_11->height = VAR_7;
  } else {
   VAR_11->left = VAR_6;
   VAR_11->width = VAR_7;
  }
 }
}
