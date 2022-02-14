
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_media_color_map {scalar_t__ format; int color; int const member_1; int member_0; } ;
struct TYPE_2__ {scalar_t__ pixel_format; } ;
struct dpu_format {TYPE_1__ base; scalar_t__ unpack_tight; } ;


 int FUNC_0 (struct dpu_media_color_map const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_1 (struct dpu_format const*) ;



 scalar_t__ VAR_3 ;



__attribute__((used)) static int FUNC_2(const struct dpu_format *VAR_4)
{
 static const struct dpu_media_color_map VAR_5[] = {
  {131, 133},
  {128, 133},
  {132, 134},
  {129, 134},
  {130, 135},
 };
 int VAR_6 = -1;
 int VAR_7;

 if (VAR_4->base.pixel_format == VAR_3) {
  if (FUNC_1(VAR_4)) {
   if (VAR_4->unpack_tight)
    VAR_6 = VAR_0;
   else
    VAR_6 = VAR_2;
  } else
   VAR_6 = VAR_1;
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); ++VAR_7)
  if (VAR_4->base.pixel_format == VAR_5[VAR_7].format) {
   VAR_6 = VAR_5[VAR_7].color;
   break;
  }
 return VAR_6;
}
