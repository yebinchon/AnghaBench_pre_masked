
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mcde {int connector; int pipe; scalar_t__ te_sync; } ;
struct drm_device {struct mcde* dev_private; } ;
struct TYPE_3__ {int disable_vblank; int enable_vblank; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct drm_device*,int *,TYPE_1__*,int const*,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_2(struct drm_device *VAR_3)
{
 struct mcde *VAR_4 = VAR_3->dev_private;
 int VAR_5;
 static const u32 VAR_6[] = {
  139,
  141,
  129,
  132,
  135,
  137,
  140,
  142,
  130,
  133,

  131,
  134,
  136,
  138,
  128,
 };


 if (VAR_4->te_sync) {
  VAR_2.enable_vblank = VAR_1;
  VAR_2.disable_vblank = VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, &VAR_4->pipe,
        &VAR_2,
        VAR_6, FUNC_0(VAR_6),
        ((void*)0),
        VAR_4->connector);
 if (VAR_5)
  return VAR_5;

 return 0;
}
