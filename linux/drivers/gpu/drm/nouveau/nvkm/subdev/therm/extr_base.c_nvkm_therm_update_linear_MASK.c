
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_therm {TYPE_2__* fan; } ;
struct TYPE_3__ {int linear_max_temp; int linear_min_temp; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 int FUNC_0 (struct nvkm_therm*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_0)
{
 u8 VAR_1 = VAR_0->fan->bios.linear_min_temp;
 u8 VAR_2 = VAR_0->fan->bios.linear_max_temp;
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
