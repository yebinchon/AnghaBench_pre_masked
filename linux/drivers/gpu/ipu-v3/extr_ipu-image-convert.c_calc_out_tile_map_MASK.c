
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_image_convert_image {unsigned int num_rows; unsigned int num_cols; } ;
struct ipu_image_convert_ctx {int * out_tile_map; struct ipu_image_convert_image in; } ;


 int FUNC_0 (struct ipu_image_convert_ctx*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ipu_image_convert_ctx *VAR_0)
{
 struct ipu_image_convert_image *VAR_1 = &VAR_0->in;
 unsigned int VAR_2, VAR_3, VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rows; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_cols; VAR_3++) {
   VAR_0->out_tile_map[VAR_4] =
    FUNC_0(VAR_0, VAR_2, VAR_3);
   VAR_4++;
  }
 }
}
