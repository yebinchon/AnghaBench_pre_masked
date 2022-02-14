
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gpio_func {int lines; } ;
struct nvkm_gpio {int event; struct nvkm_gpio_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_gpio* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;

int
FUNC_3(const struct nvkm_gpio_func *VAR_4, struct nvkm_device *VAR_5,
        int VAR_6, struct nvkm_gpio **VAR_7)
{
 struct nvkm_gpio *VAR_8;

 if (!(VAR_8 = *VAR_7 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;

 FUNC_2(&VAR_2, VAR_5, VAR_6, &VAR_8->subdev);
 VAR_8->func = VAR_4;

 return FUNC_1(&VAR_3, 2, VAR_4->lines,
          &VAR_8->event);
}
