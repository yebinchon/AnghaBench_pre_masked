
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_image_pixfmt {int uv_height_dec; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct ipu_image_pixfmt *VAR_0)
{
 return VAR_0->uv_height_dec > 1 ? 2 : 1;
}
