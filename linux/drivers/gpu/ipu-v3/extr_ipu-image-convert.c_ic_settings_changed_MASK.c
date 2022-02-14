
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* tile; } ;
struct TYPE_6__ {unsigned int num_cols; TYPE_1__* tile; } ;
struct ipu_image_convert_ctx {int next_tile; scalar_t__* resize_coeffs_h; scalar_t__* resize_coeffs_v; TYPE_4__ out; TYPE_2__ in; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;



__attribute__((used)) static bool FUNC_0(struct ipu_image_convert_ctx *VAR_0)
{
 unsigned int VAR_1 = VAR_0->next_tile - 1;
 unsigned int VAR_2 = VAR_0->next_tile;

 if (VAR_0->resize_coeffs_h[VAR_1 % VAR_0->in.num_cols] !=
     VAR_0->resize_coeffs_h[VAR_2 % VAR_0->in.num_cols] ||
     VAR_0->resize_coeffs_v[VAR_1 / VAR_0->in.num_cols] !=
     VAR_0->resize_coeffs_v[VAR_2 / VAR_0->in.num_cols] ||
     VAR_0->in.tile[VAR_1].width != VAR_0->in.tile[VAR_2].width ||
     VAR_0->in.tile[VAR_1].height != VAR_0->in.tile[VAR_2].height ||
     VAR_0->out.tile[VAR_1].width != VAR_0->out.tile[VAR_2].width ||
     VAR_0->out.tile[VAR_1].height != VAR_0->out.tile[VAR_2].height)
  return 1;

 return 0;
}
