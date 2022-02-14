
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int pdev; } ;
struct TYPE_2__ {long num_crtc; } ;
struct amdgpu_device {int enable_virtual_display; TYPE_1__ mode_info; struct drm_device* ddev; } ;


 int FUNC_0 (char*,scalar_t__,char const*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int,long*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_2)
{
 VAR_2->enable_virtual_display = 0;

 if (VAR_1) {
  struct drm_device *VAR_3 = VAR_2->ddev;
  const char *VAR_4 = FUNC_4(VAR_3->pdev);
  char *VAR_5, *VAR_6, *VAR_7, *VAR_8;

  VAR_5 = FUNC_2(VAR_1, VAR_0);
  VAR_6 = VAR_5;
  while ((VAR_7 = FUNC_6(&VAR_6, ";"))) {
   VAR_8 = FUNC_6(&VAR_7, ",");
   if (!FUNC_5("all", VAR_8)
       || !FUNC_5(VAR_4, VAR_8)) {
    long VAR_9;
    int VAR_10 = -1;

    VAR_2->enable_virtual_display = 1;

    if (VAR_7)
     VAR_10 = FUNC_3(VAR_7, 10,
            &VAR_9);

    if (!VAR_10) {
     if (VAR_9 < 1)
      VAR_9 = 1;
     if (VAR_9 > 6)
      VAR_9 = 6;
     VAR_2->mode_info.num_crtc = VAR_9;
    } else {
     VAR_2->mode_info.num_crtc = 1;
    }
    break;
   }
  }

  FUNC_0("virtual display string:%s, %s:virtual_display:%d, num_crtc:%d\n",
    VAR_1, VAR_4,
    VAR_2->enable_virtual_display, VAR_2->mode_info.num_crtc);

  FUNC_1(VAR_5);
 }
}
