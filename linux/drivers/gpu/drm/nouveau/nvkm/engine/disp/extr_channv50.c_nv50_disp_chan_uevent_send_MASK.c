
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct nvif_notify_uevent_rep TYPE_1__ ;


struct nv50_disp {int uevent; } ;
typedef int rep ;
struct nvif_notify_uevent_rep {} ;


 int FUNC_0 (int *,int,int,TYPE_1__*,int) ;

void
FUNC_1(struct nv50_disp *VAR_0, int VAR_1)
{
 struct nvif_notify_uevent_rep {
 } VAR_2;

 FUNC_0(&VAR_0->uevent, 1, VAR_1, &VAR_2, sizeof(VAR_2));
}
