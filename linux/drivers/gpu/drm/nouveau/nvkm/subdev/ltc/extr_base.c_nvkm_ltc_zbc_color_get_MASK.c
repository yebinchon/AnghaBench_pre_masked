
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ltc {TYPE_1__* func; int * zbc_color; } ;
struct TYPE_2__ {int (* zbc_clear_color ) (struct nvkm_ltc*,int,int const*) ;} ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct nvkm_ltc*,int,int const*) ;

int
FUNC_2(struct nvkm_ltc *VAR_0, int VAR_1, const u32 VAR_2[4])
{
 FUNC_0(VAR_0->zbc_color[VAR_1], VAR_2, sizeof(VAR_0->zbc_color[VAR_1]));
 VAR_0->func->zbc_clear_color(VAR_0, VAR_1, VAR_2);
 return VAR_1;
}
