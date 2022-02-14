
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int xres; int yres; int rotation_reflection; int refresh_specified; int bpp_specified; int rb; int cvt; int interlace; int margins; scalar_t__ force; int specified; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,struct drm_cmdline_mode*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct drm_cmdline_mode VAR_5 = { };

 FUNC_0(!FUNC_1("720x480,rotate=270,reflect_x",
          &VAR_3,
          &VAR_5));
 FUNC_0(!VAR_5.specified);
 FUNC_0(VAR_5.xres != 720);
 FUNC_0(VAR_5.yres != 480);
 FUNC_0(VAR_5.rotation_reflection != (VAR_2 | VAR_1));

 FUNC_0(VAR_5.refresh_specified);

 FUNC_0(VAR_5.bpp_specified);

 FUNC_0(VAR_5.rb);
 FUNC_0(VAR_5.cvt);
 FUNC_0(VAR_5.interlace);
 FUNC_0(VAR_5.margins);
 FUNC_0(VAR_5.force != VAR_0);

 return 0;
}
