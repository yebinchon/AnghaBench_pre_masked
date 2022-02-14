
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_ltc {int zbc_min; int zbc_max; TYPE_1__* func; int * zbc_stencil; int * zbc_depth; int * zbc_color; } ;
struct TYPE_2__ {int (* init ) (struct nvkm_ltc*) ;int (* zbc_clear_stencil ) (struct nvkm_ltc*,int,int ) ;int (* zbc_clear_depth ) (struct nvkm_ltc*,int,int ) ;int (* zbc_clear_color ) (struct nvkm_ltc*,int,int ) ;} ;


 struct nvkm_ltc* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_ltc*,int,int ) ;
 int FUNC_2 (struct nvkm_ltc*,int,int ) ;
 int FUNC_3 (struct nvkm_ltc*,int,int ) ;
 int FUNC_4 (struct nvkm_ltc*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_subdev *VAR_0)
{
 struct nvkm_ltc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = VAR_1->zbc_min; VAR_2 <= VAR_1->zbc_max; VAR_2++) {
  VAR_1->func->zbc_clear_color(VAR_1, VAR_2, VAR_1->zbc_color[VAR_2]);
  VAR_1->func->zbc_clear_depth(VAR_1, VAR_2, VAR_1->zbc_depth[VAR_2]);
  if (VAR_1->func->zbc_clear_stencil)
   VAR_1->func->zbc_clear_stencil(VAR_1, VAR_2, VAR_1->zbc_stencil[VAR_2]);
 }

 VAR_1->func->init(VAR_1);
 return 0;
}
