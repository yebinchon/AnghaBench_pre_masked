
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {unsigned int bpp; int bpp_specified; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, char **VAR_2,
          struct drm_cmdline_mode *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1[0] != '-')
  return -VAR_0;

 VAR_1++;
 VAR_4 = FUNC_0(VAR_1, VAR_2, 10);
 if (*VAR_2 == VAR_1)
  return -VAR_0;

 VAR_3->bpp = VAR_4;
 VAR_3->bpp_specified = 1;

 return 0;
}
