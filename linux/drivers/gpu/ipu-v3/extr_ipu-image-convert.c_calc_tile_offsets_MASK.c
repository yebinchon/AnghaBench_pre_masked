
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_image_convert_image {TYPE_1__* fmt; } ;
struct ipu_image_convert_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ planar; } ;


 int FUNC_0 (struct ipu_image_convert_ctx*,struct ipu_image_convert_image*) ;
 int FUNC_1 (struct ipu_image_convert_ctx*,struct ipu_image_convert_image*) ;

__attribute__((used)) static int FUNC_2(struct ipu_image_convert_ctx *VAR_0,
         struct ipu_image_convert_image *VAR_1)
{
 if (VAR_1->fmt->planar)
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
