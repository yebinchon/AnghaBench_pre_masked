
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_falcon {int mutex; struct nvkm_subdev const* user; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,int ) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(struct nvkm_falcon *VAR_0, const struct nvkm_subdev *VAR_1)
{
 if (FUNC_3(!VAR_0))
  return;

 FUNC_0(&VAR_0->mutex);
 if (VAR_0->user == VAR_1) {
  FUNC_2(VAR_0->user, "released %s falcon\n", VAR_0->name);
  VAR_0->user = ((void*)0);
 }
 FUNC_1(&VAR_0->mutex);
}
