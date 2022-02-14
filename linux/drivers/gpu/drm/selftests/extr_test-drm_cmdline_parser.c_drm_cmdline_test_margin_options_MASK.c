
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int right; int left; int bottom; int top; } ;
struct drm_cmdline_mode {int xres; int yres; int refresh_specified; int bpp_specified; int rb; int cvt; int interlace; int margins; scalar_t__ force; TYPE_1__ tv_margins; int specified; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,struct drm_cmdline_mode*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct drm_cmdline_mode VAR_3 = { };

 FUNC_0(!FUNC_1("720x480,margin_right=14,margin_left=24,margin_bottom=36,margin_top=42",
          &VAR_1,
          &VAR_3));
 FUNC_0(!VAR_3.specified);
 FUNC_0(VAR_3.xres != 720);
 FUNC_0(VAR_3.yres != 480);
 FUNC_0(VAR_3.tv_margins.right != 14);
 FUNC_0(VAR_3.tv_margins.left != 24);
 FUNC_0(VAR_3.tv_margins.bottom != 36);
 FUNC_0(VAR_3.tv_margins.top != 42);

 FUNC_0(VAR_3.refresh_specified);

 FUNC_0(VAR_3.bpp_specified);

 FUNC_0(VAR_3.rb);
 FUNC_0(VAR_3.cvt);
 FUNC_0(VAR_3.interlace);
 FUNC_0(VAR_3.margins);
 FUNC_0(VAR_3.force != VAR_0);

 return 0;
}
