
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int width; int height; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; scalar_t__ left; scalar_t__ top; } ;
struct tpg_data {unsigned int src_width; unsigned int src_height; unsigned int buf_height; unsigned int scaled_width; unsigned int planes; unsigned int* bytesperline; unsigned int* twopixelsize; int* hdownsampling; int recalc_square_border; TYPE_2__ compose; TYPE_1__ crop; int field; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct tpg_data *VAR_0, unsigned VAR_1, unsigned VAR_2,
         u32 VAR_3)
{
 unsigned VAR_4;

 VAR_0->src_width = VAR_1;
 VAR_0->src_height = VAR_2;
 VAR_0->field = VAR_3;
 VAR_0->buf_height = VAR_2;
 if (FUNC_0(VAR_3))
  VAR_0->buf_height /= 2;
 VAR_0->scaled_width = VAR_1;
 VAR_0->crop.top = VAR_0->crop.left = 0;
 VAR_0->crop.width = VAR_1;
 VAR_0->crop.height = VAR_2;
 VAR_0->compose.top = VAR_0->compose.left = 0;
 VAR_0->compose.width = VAR_1;
 VAR_0->compose.height = VAR_0->buf_height;
 for (VAR_4 = 0; VAR_4 < VAR_0->planes; VAR_4++)
  VAR_0->bytesperline[VAR_4] = (VAR_1 * VAR_0->twopixelsize[VAR_4]) /
           (2 * VAR_0->hdownsampling[VAR_4]);
 VAR_0->recalc_square_border = 1;
}
