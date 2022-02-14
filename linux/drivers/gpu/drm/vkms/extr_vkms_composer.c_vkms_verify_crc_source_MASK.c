
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int*) ;

int FUNC_2(struct drm_crtc *VAR_1, const char *VAR_2,
      size_t *VAR_3)
{
 bool VAR_4;

 if (FUNC_1(VAR_2, &VAR_4) < 0) {
  FUNC_0("unknown source %s\n", VAR_2);
  return -VAR_0;
 }

 *VAR_3 = 1;

 return 0;
}
