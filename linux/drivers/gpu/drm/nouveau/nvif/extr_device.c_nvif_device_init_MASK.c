
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvif_object {int dummy; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_3__ {int * func; } ;
struct nvif_device {TYPE_2__ info; int object; TYPE_1__ user; int * runlist; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct nvif_object*,int ,int ,void*,int ,int *) ;
 int FUNC_1 (int *,int ,TYPE_2__*,int) ;

int
FUNC_2(struct nvif_object *VAR_1, u32 VAR_2, s32 VAR_3,
   void *VAR_4, u32 VAR_5, struct nvif_device *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
       &VAR_6->object);
 VAR_6->runlist = ((void*)0);
 VAR_6->user.func = ((void*)0);
 if (VAR_7 == 0) {
  VAR_6->info.version = 0;
  VAR_7 = FUNC_1(&VAR_6->object, VAR_0,
           &VAR_6->info, sizeof(VAR_6->info));
 }
 return VAR_7;
}
