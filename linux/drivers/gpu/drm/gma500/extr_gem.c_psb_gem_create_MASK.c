
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {TYPE_1__* filp; } ;
struct gtt_range {TYPE_2__ gem; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;
struct TYPE_7__ {int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,TYPE_2__*,...) ;
 int FUNC_1 (struct drm_file*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (struct drm_device*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int) ;
 struct gtt_range* FUNC_6 (struct drm_device*,int ,char*,int ,int ) ;
 int FUNC_7 (struct drm_device*,struct gtt_range*) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct drm_file *VAR_5, struct drm_device *VAR_6, u64 VAR_7,
     u32 *VAR_8, int VAR_9, u32 VAR_10)
{
 struct gtt_range *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_7 = FUNC_8(VAR_7, VAR_3);



 VAR_11 = FUNC_6(VAR_6, VAR_7, "gem", 0, VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_6->dev, "no memory for %lld byte GEM object\n", VAR_7);
  return -VAR_1;
 }

 if (FUNC_2(VAR_6, &VAR_11->gem, VAR_7) != 0) {
  FUNC_7(VAR_6, VAR_11);

  FUNC_0(VAR_6->dev, "GEM init failed for %lld\n", VAR_7);
  return -VAR_0;
 }

 FUNC_5(VAR_11->gem.filp->f_mapping, VAR_2 | VAR_4);

 VAR_12 = FUNC_1(VAR_5, &VAR_11->gem, &VAR_13);
 if (VAR_12) {
  FUNC_0(VAR_6->dev, "GEM handle failed for %p, %lld\n",
       &VAR_11->gem, VAR_7);
  FUNC_4(&VAR_11->gem);
  FUNC_7(VAR_6, VAR_11);
  return VAR_12;
 }

 FUNC_3(&VAR_11->gem);
 *VAR_8 = VAR_13;
 return 0;
}
