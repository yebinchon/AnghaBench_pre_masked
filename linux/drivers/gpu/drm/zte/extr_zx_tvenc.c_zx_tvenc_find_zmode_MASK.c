
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc_mode {int mode; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct zx_tvenc_mode**) ;
 scalar_t__ FUNC_1 (struct drm_display_mode*,int *) ;
 struct zx_tvenc_mode** VAR_0 ;

__attribute__((used)) static const struct zx_tvenc_mode *
FUNC_2(struct drm_display_mode *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  const struct zx_tvenc_mode *VAR_3 = VAR_0[VAR_2];

  if (FUNC_1(VAR_1, &VAR_3->mode))
   return VAR_3;
 }

 return ((void*)0);
}
