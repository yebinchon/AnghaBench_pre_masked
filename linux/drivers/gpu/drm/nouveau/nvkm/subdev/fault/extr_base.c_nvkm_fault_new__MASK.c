
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct nvkm_fault_func {TYPE_1__ user; } ;
struct TYPE_4__ {int base; int ctor; } ;
struct nvkm_fault {TYPE_2__ user; struct nvkm_fault_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_fault* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int *) ;
 int VAR_3 ;

int
FUNC_2(const struct nvkm_fault_func *VAR_4, struct nvkm_device *VAR_5,
  int VAR_6, struct nvkm_fault **VAR_7)
{
 struct nvkm_fault *VAR_8;
 if (!(VAR_8 = *VAR_7 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_2, VAR_5, VAR_6, &VAR_8->subdev);
 VAR_8->func = VAR_4;
 VAR_8->user.ctor = VAR_3;
 VAR_8->user.base = VAR_4->user.base;
 return 0;
}
