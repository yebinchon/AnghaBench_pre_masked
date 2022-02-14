
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ maxver; scalar_t__ minver; int oclass; } ;
struct nvkm_oclass {int ctor; TYPE_1__ base; } ;
struct nvkm_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct nvkm_object *VAR_3, int VAR_4,
         struct nvkm_oclass *VAR_5)
{
 if (VAR_4 == 0) {
  VAR_5->base.oclass = VAR_1;
  VAR_5->base.minver = 0;
  VAR_5->base.maxver = 0;
  VAR_5->ctor = VAR_2;
  return 0;
 }
 return -VAR_0;
}
