
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_gpio_ntfy_rep {int mask; } ;
struct nvkm_gpio {int event; TYPE_1__* func; } ;
typedef int rep ;
struct TYPE_2__ {scalar_t__ lines; int (* intr_stat ) (struct nvkm_gpio*,scalar_t__*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__,struct nvkm_gpio_ntfy_rep*,int) ;
 struct nvkm_gpio* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (struct nvkm_gpio*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_subdev *VAR_2)
{
 struct nvkm_gpio *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5, VAR_6;

 VAR_3->func->intr_stat(VAR_3, &VAR_4, &VAR_5);

 for (VAR_6 = 0; (VAR_4 | VAR_5) && VAR_6 < VAR_3->func->lines; VAR_6++) {
  struct nvkm_gpio_ntfy_rep VAR_7 = {
   .mask = (VAR_0 * !!(VAR_4 & (1 << VAR_6))) |
    (VAR_1 * !!(VAR_5 & (1 << VAR_6))),
  };
  FUNC_0(&VAR_3->event, VAR_7.mask, VAR_6, &VAR_7, sizeof(VAR_7));
 }
}
