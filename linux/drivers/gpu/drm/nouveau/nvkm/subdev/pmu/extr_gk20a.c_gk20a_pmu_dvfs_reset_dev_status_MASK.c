
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_falcon {int dummy; } ;
struct TYPE_2__ {struct nvkm_falcon* falcon; } ;
struct gk20a_pmu {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gk20a_pmu *VAR_2)
{
 struct nvkm_falcon *VAR_3 = VAR_2->base.falcon;

 FUNC_0(VAR_3, 0x508 + (VAR_0 * 0x10), 0x80000000);
 FUNC_0(VAR_3, 0x508 + (VAR_1 * 0x10), 0x80000000);
}
