
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usif_object {unsigned long token; int route; int head; } ;
struct nvif_ioctl_new_v0 {unsigned long token; int route; } ;
struct nvif_client {int dummy; } ;
struct nouveau_cli {int objects; struct nvif_client base; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usif_object* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct nouveau_cli* FUNC_2 (struct drm_file*) ;
 int FUNC_3 (struct nvif_client*,void*,int ) ;
 int FUNC_4 (int,void**,int *,struct nvif_ioctl_new_v0,int ,int ,int) ;
 int FUNC_5 (struct usif_object*) ;

__attribute__((used)) static int
FUNC_6(struct drm_file *VAR_4, void *VAR_5, u32 VAR_6, void *VAR_7, u32 VAR_8)
{
 struct nouveau_cli *VAR_9 = FUNC_2(VAR_4);
 struct nvif_client *VAR_10 = &VAR_9->base;
 union {
  struct nvif_ioctl_new_v0 v0;
 } *VAR_11 = VAR_5;
 struct usif_object *VAR_12;
 int VAR_13 = -VAR_1;

 if (!(VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_2)))
  return -VAR_0;
 FUNC_1(&VAR_12->head, &VAR_9->objects);

 if (!(VAR_13 = FUNC_4(VAR_13, &VAR_5, &VAR_6, VAR_11->v0, 0, 0, 1))) {
  VAR_12->route = VAR_11->v0.route;
  VAR_12->token = VAR_11->v0.token;
  VAR_11->v0.route = VAR_3;
  VAR_11->v0.token = (unsigned long)(void *)VAR_12;
  VAR_13 = FUNC_3(VAR_10, VAR_7, VAR_8);
  VAR_11->v0.token = VAR_12->token;
  VAR_11->v0.route = VAR_12->route;
 }

 if (VAR_13)
  FUNC_5(VAR_12);
 return VAR_13;
}
