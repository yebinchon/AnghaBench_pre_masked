
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_format {int dummy; } ;
struct drm_printer {int prefix; } ;


 int FUNC_0 (char*,int ,struct va_format*) ;

void FUNC_1(struct drm_printer *VAR_0, struct va_format *VAR_1)
{
 FUNC_0("%s %pV", VAR_0->prefix, VAR_1);
}
