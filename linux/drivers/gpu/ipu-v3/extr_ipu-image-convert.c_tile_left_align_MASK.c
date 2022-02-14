
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_image_pixfmt {int uv_width_dec; int bpp; scalar_t__ uv_packed; scalar_t__ planar; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct ipu_image_pixfmt *VAR_0)
{
 if (VAR_0->planar)
  return VAR_0->uv_packed ? 8 : 8 * VAR_0->uv_width_dec;
 else
  return VAR_0->bpp == 32 ? 2 : VAR_0->bpp == 16 ? 4 : 8;
}
