
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct usif_notify {TYPE_4__* p; int enabled; scalar_t__ reply; } ;
struct nvif_ioctl_ntfy_del_v0 {int index; } ;
struct nvif_client {int dummy; } ;
struct nouveau_cli {struct nvif_client base; } ;
struct drm_file {int dummy; } ;
struct TYPE_7__ {scalar_t__ length; int type; } ;
struct TYPE_8__ {TYPE_2__ base; } ;
struct TYPE_6__ {struct drm_file* file_priv; TYPE_2__* event; } ;
struct TYPE_9__ {TYPE_3__ e; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (scalar_t__,int ) ;
 struct nouveau_cli* FUNC_4 (struct drm_file*) ;
 int FUNC_5 (struct nvif_client*,void*,int ) ;
 int FUNC_6 (int,void**,int *,struct nvif_ioctl_ntfy_del_v0,int ,int ,int) ;
 struct usif_notify* FUNC_7 (struct drm_file*,int ) ;

__attribute__((used)) static int
FUNC_8(struct drm_file *VAR_5, void *VAR_6, u32 VAR_7, void *VAR_8, u32 VAR_9)
{
 struct nouveau_cli *VAR_10 = FUNC_4(VAR_5);
 struct nvif_client *VAR_11 = &VAR_10->base;
 union {
  struct nvif_ioctl_ntfy_del_v0 v0;
 } *VAR_12 = VAR_6;
 struct usif_notify *VAR_13;
 int VAR_14 = -VAR_3;

 if (!(VAR_14 = FUNC_6(VAR_14, &VAR_6, &VAR_7, VAR_12->v0, 0, 0, 1))) {
  if (!(VAR_13 = FUNC_7(VAR_5, VAR_12->v0.index)))
   return -VAR_1;
 } else
  return VAR_14;

 if (FUNC_1(&VAR_13->enabled, 1))
  return 0;

 VAR_13->p = FUNC_3(sizeof(*VAR_13->p) + VAR_13->reply, VAR_4);
 if (VAR_14 = -VAR_2, !VAR_13->p)
  goto done;
 VAR_13->p->base.event = &VAR_13->p->e.base;
 VAR_13->p->base.file_priv = VAR_5;
 VAR_13->p->e.base.type = VAR_0;
 VAR_13->p->e.base.length = sizeof(VAR_13->p->e.base) + VAR_13->reply;

 VAR_14 = FUNC_5(VAR_11, VAR_8, VAR_9);
done:
 if (VAR_14) {
  FUNC_0(&VAR_13->enabled, 0);
  FUNC_2(VAR_13->p);
 }
 return VAR_14;
}
