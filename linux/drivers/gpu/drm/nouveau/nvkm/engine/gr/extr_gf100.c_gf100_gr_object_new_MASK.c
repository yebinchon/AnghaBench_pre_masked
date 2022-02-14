
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * func; } ;
struct nvkm_oclass {TYPE_1__ base; int parent; } ;
struct nvkm_object {int dummy; } ;
struct gf100_gr_object {struct gf100_gr_chan* chan; struct nvkm_object object; } ;
struct gf100_gr_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gf100_gr_chan* FUNC_0 (int ) ;
 int VAR_2 ;
 struct gf100_gr_object* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_3(const struct nvkm_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nvkm_object **VAR_6)
{
 struct gf100_gr_chan *VAR_7 = FUNC_0(VAR_3->parent);
 struct gf100_gr_object *VAR_8;

 if (!(VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_8->object;

 FUNC_2(VAR_3->base.func ? VAR_3->base.func :
    &VAR_2, VAR_3, &VAR_8->object);
 VAR_8->chan = VAR_7;
 return 0;
}
