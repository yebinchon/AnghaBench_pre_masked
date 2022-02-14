
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {size_t index; } ;
struct nvkm_falcon {int mutex; struct nvkm_subdev const* user; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,int ) ;
 int FUNC_3 (struct nvkm_subdev const*,char*,int ,int ) ;
 int * VAR_1 ;

int
FUNC_4(struct nvkm_falcon *VAR_2, const struct nvkm_subdev *VAR_3)
{
 FUNC_0(&VAR_2->mutex);
 if (VAR_2->user) {
  FUNC_3(VAR_3, "%s falcon already acquired by %s!\n",
      VAR_2->name, VAR_1[VAR_2->user->index]);
  FUNC_1(&VAR_2->mutex);
  return -VAR_0;
 }

 FUNC_2(VAR_3, "acquired %s falcon\n", VAR_2->name);
 VAR_2->user = VAR_3;
 FUNC_1(&VAR_2->mutex);
 return 0;
}
