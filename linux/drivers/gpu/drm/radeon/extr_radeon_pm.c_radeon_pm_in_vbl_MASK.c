
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__** crtcs; } ;
struct TYPE_5__ {int active_crtcs; } ;
struct radeon_device {int num_crtc; TYPE_4__ mode_info; int ddev; TYPE_1__ pm; } ;
struct TYPE_6__ {int hwmode; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int*,int*,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 bool VAR_8 = 1;




 for (VAR_4 = 0; (VAR_4 < VAR_3->num_crtc) && VAR_8; VAR_4++) {
  if (VAR_3->pm.active_crtcs & (1 << VAR_4)) {
   VAR_7 = FUNC_0(VAR_3->ddev,
        VAR_4,
        VAR_2,
        &VAR_5, &VAR_6, ((void*)0), ((void*)0),
        &VAR_3->mode_info.crtcs[VAR_4]->base.hwmode);
   if ((VAR_7 & VAR_1) &&
       !(VAR_7 & VAR_0))
    VAR_8 = 0;
  }
 }

 return VAR_8;
}
