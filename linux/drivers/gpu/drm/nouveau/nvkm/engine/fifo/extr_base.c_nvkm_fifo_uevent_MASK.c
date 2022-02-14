
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fifo {int uevent; } ;
struct nvif_notify_uevent_rep {int dummy; } ;
typedef int rep ;


 int FUNC_0 (int *,int,int ,struct nvif_notify_uevent_rep*,int) ;

void
FUNC_1(struct nvkm_fifo *VAR_0)
{
 struct nvif_notify_uevent_rep VAR_1 = {
 };
 FUNC_0(&VAR_0->uevent, 1, 0, &VAR_1, sizeof(VAR_1));
}
