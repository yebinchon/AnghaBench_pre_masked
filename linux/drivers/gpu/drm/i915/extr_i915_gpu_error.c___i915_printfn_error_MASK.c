
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_format {int * va; int fmt; } ;
struct drm_printer {int arg; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_printer *VAR_0, struct va_format *VAR_1)
{
 FUNC_0(VAR_0->arg, VAR_1->fmt, *VAR_1->va);
}
