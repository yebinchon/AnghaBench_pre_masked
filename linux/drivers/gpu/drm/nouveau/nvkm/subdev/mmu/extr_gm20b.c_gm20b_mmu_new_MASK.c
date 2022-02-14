
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_mmu {int dummy; } ;
struct nvkm_device {TYPE_1__* fb; } ;
struct TYPE_2__ {scalar_t__ page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nvkm_device*,int,struct nvkm_mmu**) ;

int
FUNC_1(struct nvkm_device *VAR_2, int VAR_3, struct nvkm_mmu **VAR_4)
{
 if (VAR_2->fb->page)
  return FUNC_0(&VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_0(&VAR_0, VAR_2, VAR_3, VAR_4);
}
