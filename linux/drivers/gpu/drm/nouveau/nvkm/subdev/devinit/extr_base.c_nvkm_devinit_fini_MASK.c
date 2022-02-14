
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_devinit {int post; } ;


 struct nvkm_devinit* FUNC_0 (struct nvkm_subdev*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_subdev *VAR_0, bool VAR_1)
{
 struct nvkm_devinit *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  VAR_2->post = 1;
 return 0;
}
