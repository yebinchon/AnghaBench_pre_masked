
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int index; int device; } ;
struct nvkm_gsp {int falcon; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int ,int *) ;
 struct nvkm_gsp* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_subdev *VAR_1)
{
 struct nvkm_gsp *VAR_2 = FUNC_1(VAR_1);

 VAR_2->addr = FUNC_2(VAR_1->device, VAR_1->index);
 if (!VAR_2->addr)
  return -VAR_0;

 return FUNC_0(VAR_1, "GSP", VAR_2->addr, &VAR_2->falcon);
}
