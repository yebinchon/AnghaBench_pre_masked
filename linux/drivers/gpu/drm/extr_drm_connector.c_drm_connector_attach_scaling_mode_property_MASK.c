
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int const u32 ;
struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_property* scaling_mode_property; int base; struct drm_device* dev; } ;
struct TYPE_3__ {int name; int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int const FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct drm_property*,int ) ;
 int FUNC_4 (struct drm_property*,int ,int ) ;
 struct drm_property* FUNC_5 (struct drm_device*,int ,char*,int) ;
 int FUNC_6 (struct drm_device*,struct drm_property*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (unsigned int const) ;

int FUNC_8(struct drm_connector *VAR_4,
            u32 VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct drm_property *VAR_7;
 int VAR_8;
 const unsigned VAR_9 =
  (1U << FUNC_0(VAR_3)) - 1;

 if (FUNC_2(FUNC_7(VAR_5) < 2 ||
      VAR_5 & ~VAR_9))
  return -VAR_1;

 VAR_7 =
  FUNC_5(VAR_6, VAR_0, "scaling mode",
        FUNC_7(VAR_5));

 if (!VAR_7)
  return -VAR_2;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  int VAR_10;

  if (!(FUNC_1(VAR_8) & VAR_5))
   continue;

  VAR_10 = FUNC_4(VAR_7,
         VAR_3[VAR_8].type,
         VAR_3[VAR_8].name);

  if (VAR_10) {
   FUNC_6(VAR_6, VAR_7);

   return VAR_10;
  }
 }

 FUNC_3(&VAR_4->base,
       VAR_7, 0);

 VAR_4->scaling_mode_property = VAR_7;

 return 0;
}
