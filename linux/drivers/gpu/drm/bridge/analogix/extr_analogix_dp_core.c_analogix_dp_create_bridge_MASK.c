
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; } ;
struct drm_bridge {int * funcs; struct analogix_dp_device* driver_private; } ;
struct analogix_dp_device {int encoder; struct drm_bridge* bridge; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_bridge* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,struct drm_bridge*,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4,
         struct analogix_dp_device *VAR_5)
{
 struct drm_bridge *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  FUNC_0("failed to allocate for drm bridge\n");
  return -VAR_1;
 }

 VAR_5->bridge = VAR_6;

 VAR_6->driver_private = VAR_5;
 VAR_6->funcs = &VAR_3;

 VAR_7 = FUNC_2(VAR_5->encoder, VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_0("failed to attach drm bridge\n");
  return -VAR_0;
 }

 return 0;
}
