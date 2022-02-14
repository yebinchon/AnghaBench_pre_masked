
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_image_pixfmt {int uv_width_dec; int uv_packed; scalar_t__ planar; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef enum ipu_image_convert_type { ____Placeholder_ipu_image_convert_type } ipu_image_convert_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(enum ipu_image_convert_type VAR_2,
       const struct ipu_image_pixfmt *VAR_3,
       enum ipu_rotate_mode VAR_4)
{
 if (VAR_2 == VAR_0) {






  return (!FUNC_0(VAR_4) &&
   (VAR_4 & VAR_1)) ? 8 : 2;
 }







 return (FUNC_0(VAR_4) &&
  VAR_3->planar && !VAR_3->uv_packed) ?
  8 * VAR_3->uv_width_dec : 8;
}
