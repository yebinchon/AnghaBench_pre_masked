
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_device {int dummy; } ;
struct lima_bo {int gem; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct lima_bo*) ;
 int FUNC_1 (struct lima_bo*) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;
 struct lima_bo* FUNC_4 (struct lima_device*,int ,int ,int *) ;
 struct lima_device* FUNC_5 (struct drm_device*) ;

int FUNC_6(struct drm_device *VAR_0, struct drm_file *VAR_1,
      u32 VAR_2, u32 VAR_3, u32 *VAR_4)
{
 int VAR_5;
 struct lima_bo *VAR_6;
 struct lima_device *VAR_7 = FUNC_5(VAR_0);

 VAR_6 = FUNC_4(VAR_7, VAR_2, VAR_3, ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = FUNC_2(VAR_1, &VAR_6->gem, VAR_4);


 FUNC_3(&VAR_6->gem);

 return VAR_5;
}
