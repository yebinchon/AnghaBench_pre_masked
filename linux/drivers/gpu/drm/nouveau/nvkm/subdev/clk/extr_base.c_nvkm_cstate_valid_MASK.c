
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_volt {int max_uv; } ;
struct nvkm_domain {size_t name; int flags; } ;
struct nvkm_cstate {int voltage; int * domain; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_clk {int boost_mode; int boost_khz; int base_khz; TYPE_2__ subdev; struct nvkm_domain* domains; } ;
struct TYPE_3__ {struct nvkm_volt* volt; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (struct nvkm_volt*,int ,int) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_clk *VAR_2, struct nvkm_cstate *VAR_3,
    u32 VAR_4, int VAR_5)
{
 const struct nvkm_domain *VAR_6 = VAR_2->domains;
 struct nvkm_volt *VAR_7 = VAR_2->subdev.device->volt;
 int VAR_8;

 while (VAR_6 && VAR_6->name != VAR_1) {
  if (VAR_6->flags & VAR_0) {
   u32 VAR_9 = VAR_3->domain[VAR_6->name];
   switch (VAR_2->boost_mode) {
   case 128:
    if (VAR_2->base_khz && VAR_9 > VAR_2->base_khz)
     return 0;

   case 129:
    if (VAR_2->boost_khz && VAR_9 > VAR_2->boost_khz)
     return 0;
   }
  }
  VAR_6++;
 }

 if (!VAR_7)
  return 1;

 VAR_8 = FUNC_1(VAR_7, VAR_3->voltage, VAR_5);
 if (VAR_8 < 0)
  return 0;
 return VAR_8 <= FUNC_0(VAR_4, VAR_7->max_uv);
}
