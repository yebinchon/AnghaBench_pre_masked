
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_image_pixfmt {int uv_width_dec; int uv_packed; scalar_t__ planar; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef enum ipu_image_convert_type { ____Placeholder_ipu_image_convert_type } ipu_image_convert_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(enum ipu_image_convert_type VAR_1,
        const struct ipu_image_pixfmt *VAR_2,
        enum ipu_rotate_mode VAR_3)
{
 if (VAR_1 == VAR_0 || !FUNC_0(VAR_3))
  return 2;







 return (VAR_2->planar && !VAR_2->uv_packed) ? 8 * VAR_2->uv_width_dec : 8;
}
