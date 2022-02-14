
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usif_notify {int dummy; } ;
struct nvif_ioctl_ntfy_del_v0 {int index; } ;
struct nvif_client {int dummy; } ;
struct nouveau_cli {struct nvif_client base; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_cli* FUNC_0 (struct drm_file*) ;
 int FUNC_1 (struct nvif_client*,void*,int ) ;
 int FUNC_2 (int,void**,int *,struct nvif_ioctl_ntfy_del_v0,int ,int ,int) ;
 int FUNC_3 (struct usif_notify*) ;
 struct usif_notify* FUNC_4 (struct drm_file*,int ) ;

__attribute__((used)) static int
FUNC_5(struct drm_file *VAR_2, void *VAR_3, u32 VAR_4, void *VAR_5, u32 VAR_6)
{
 struct nouveau_cli *VAR_7 = FUNC_0(VAR_2);
 struct nvif_client *VAR_8 = &VAR_7->base;
 union {
  struct nvif_ioctl_ntfy_del_v0 v0;
 } *VAR_9 = VAR_3;
 struct usif_notify *VAR_10;
 int VAR_11 = -VAR_1;

 if (!(VAR_11 = FUNC_2(VAR_11, &VAR_3, &VAR_4, VAR_9->v0, 0, 0, 1))) {
  if (!(VAR_10 = FUNC_4(VAR_2, VAR_9->v0.index)))
   return -VAR_0;
 } else
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_6);
 if (VAR_11 == 0)
  FUNC_3(VAR_10);
 return VAR_11;
}
