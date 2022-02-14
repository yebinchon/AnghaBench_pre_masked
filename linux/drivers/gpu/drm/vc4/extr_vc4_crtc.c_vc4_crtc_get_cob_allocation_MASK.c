
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct vc4_crtc {int cob_size; int channel; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_4(struct vc4_crtc *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_0(FUNC_1(VAR_2->channel));




 u32 VAR_6 = FUNC_2(VAR_5, VAR_1) & ~3;
 u32 VAR_7 = FUNC_2(VAR_5, VAR_0) & ~3;

 VAR_2->cob_size = VAR_6 - VAR_7 + 4;
}
