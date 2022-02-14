
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int subdev; } ;
struct ls_ucode_img {int dummy; } ;


 int FUNC_0 (int *,int,struct ls_ucode_img*,char*) ;

int
FUNC_1(const struct nvkm_secboot *VAR_0, int VAR_1,
         struct ls_ucode_img *VAR_2)
{
 return FUNC_0(&VAR_0->subdev, VAR_1, VAR_2, "fecs");
}
