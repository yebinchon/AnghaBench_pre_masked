
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; int mutex; } ;
struct TYPE_3__ {int list; int mutex; } ;
struct nvkm_mmu {TYPE_2__ ptp; TYPE_1__ ptc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_mmu *VAR_0)
{
 FUNC_1(&VAR_0->ptc.mutex);
 FUNC_0(&VAR_0->ptc.list);
 FUNC_1(&VAR_0->ptp.mutex);
 FUNC_0(&VAR_0->ptp.list);
}
