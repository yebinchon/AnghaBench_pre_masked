
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct drm_cmdline_mode {int xres; int yres; int cvt; int rb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,struct drm_connector const*,struct drm_cmdline_mode*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, unsigned int VAR_2,
        bool VAR_3,
        const struct drm_connector *VAR_4,
        struct drm_cmdline_mode *VAR_5)
{
 const char *VAR_6 = VAR_1;
 bool VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11, VAR_12;
 char *VAR_13;

 VAR_9 = FUNC_1(VAR_1, &VAR_13, 10);
 if (VAR_13 == VAR_1)
  return -VAR_0;

 if (VAR_13[0] != 'x')
  return -VAR_0;
 VAR_13++;

 VAR_1 = VAR_13;
 VAR_10 = FUNC_1(VAR_1, &VAR_13, 10);
 if (VAR_13 == VAR_1)
  return -VAR_0;

 VAR_11 = VAR_2 - (VAR_13 - VAR_6);
 if (VAR_11 < 0)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  switch (VAR_13[VAR_12]) {
  case 'M':
   VAR_8 = 1;
   break;
  case 'R':
   VAR_7 = 1;
   break;
  default:





   if (VAR_3) {
    int VAR_14 = FUNC_0(VAR_13 + VAR_12,
               1,
               0,
               VAR_4,
               VAR_5);
    if (VAR_14)
     return VAR_14;
   } else {
    return -VAR_0;
   }
  }
 }

 VAR_5->xres = VAR_9;
 VAR_5->yres = VAR_10;
 VAR_5->cvt = VAR_8;
 VAR_5->rb = VAR_7;

 return 0;
}
