
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ non_alpha_only_l1; int * pix_fmt_hw; } ;
struct ltdc_device {TYPE_1__ caps; } ;
struct TYPE_4__ {int id; } ;
struct drm_plane {TYPE_2__ base; } ;
struct drm_device {struct device* dev; struct ltdc_device* dev_private; } ;
struct device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct drm_plane*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,unsigned long,int *,scalar_t__*,unsigned int,int const*,int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static struct drm_plane *FUNC_6(struct drm_device *VAR_7,
        enum drm_plane_type VAR_8)
{
 unsigned long VAR_9 = VAR_0;
 struct ltdc_device *VAR_10 = VAR_7->dev_private;
 struct device *VAR_11 = VAR_7->dev;
 struct drm_plane *VAR_12;
 unsigned int VAR_13, VAR_14 = 0;
 u32 VAR_15[VAR_3 * 2];
 u32 VAR_16, VAR_17;
 const u64 *VAR_18 = VAR_4;
 int VAR_19;


 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_16 = FUNC_5(VAR_10->caps.pix_fmt_hw[VAR_13]);
  if (!VAR_16)
   continue;
  VAR_15[VAR_14++] = VAR_16;


  VAR_17 = FUNC_4(VAR_16);
  if (!VAR_17)
   continue;


  if (VAR_10->caps.non_alpha_only_l1 &&
      VAR_8 != VAR_1)
   continue;

  VAR_15[VAR_14++] = VAR_17;
 }

 VAR_12 = FUNC_1(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return ((void*)0);

 VAR_19 = FUNC_3(VAR_7, VAR_12, VAR_9,
           &VAR_5, VAR_15, VAR_14,
           VAR_18, VAR_8, ((void*)0));
 if (VAR_19 < 0)
  return ((void*)0);

 FUNC_2(VAR_12, &VAR_6);

 FUNC_0("plane:%d created\n", VAR_12->base.id);

 return VAR_12;
}
