
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int xres; int yres; scalar_t__ rotation_reflection; int refresh_specified; int bpp_specified; int rb; int cvt; int interlace; int margins; scalar_t__ force; int specified; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,struct drm_cmdline_mode*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct drm_cmdline_mode VAR_4 = { };

 FUNC_0(!FUNC_1("720x480,rotate=180",
          &VAR_2,
          &VAR_4));
 FUNC_0(!VAR_4.specified);
 FUNC_0(VAR_4.xres != 720);
 FUNC_0(VAR_4.yres != 480);
 FUNC_0(VAR_4.rotation_reflection != VAR_1);

 FUNC_0(VAR_4.refresh_specified);

 FUNC_0(VAR_4.bpp_specified);

 FUNC_0(VAR_4.rb);
 FUNC_0(VAR_4.cvt);
 FUNC_0(VAR_4.interlace);
 FUNC_0(VAR_4.margins);
 FUNC_0(VAR_4.force != VAR_0);

 return 0;
}
