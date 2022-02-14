
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ const u32 ;
struct TYPE_4__ {int mutex; } ;
struct nvkm_ltc {scalar_t__ const num_tags; TYPE_2__ subdev; TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_ltc* ltc; } ;
struct TYPE_3__ {int (* cbc_wait ) (struct nvkm_ltc*) ;int (* cbc_clear ) (struct nvkm_ltc*,scalar_t__ const,scalar_t__ const) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_ltc*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_4 (struct nvkm_ltc*) ;

void
FUNC_5(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nvkm_ltc *VAR_3 = VAR_0->ltc;
 const u32 VAR_4 = VAR_1 + VAR_2 - 1;

 FUNC_0((VAR_1 > VAR_4) || (VAR_4 >= VAR_3->num_tags));

 FUNC_1(&VAR_3->subdev.mutex);
 VAR_3->func->cbc_clear(VAR_3, VAR_1, VAR_4);
 VAR_3->func->cbc_wait(VAR_3);
 FUNC_2(&VAR_3->subdev.mutex);
}
