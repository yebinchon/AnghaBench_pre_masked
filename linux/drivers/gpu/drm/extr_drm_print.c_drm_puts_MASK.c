
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int (* puts ) (struct drm_printer*,char const*) ;} ;


 int FUNC_0 (struct drm_printer*,char*,char const*) ;
 int FUNC_1 (struct drm_printer*,char const*) ;

void FUNC_2(struct drm_printer *VAR_0, const char *VAR_1)
{
 if (VAR_0->puts)
  VAR_0->puts(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, "%s", VAR_1);
}
