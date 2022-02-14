
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct resource_pool {int ** mcif_wb; TYPE_1__* res_cap; } ;
struct dcn20_mmhubbub {int base; } ;
struct dc_context {int dummy; } ;
struct TYPE_2__ {int num_dwb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dcn20_mmhubbub*,struct dc_context*,int *,int *,int *,int) ;
 int FUNC_2 (char*) ;
 struct dcn20_mmhubbub* FUNC_3 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

bool FUNC_4(struct dc_context *VAR_4, struct resource_pool *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7 = VAR_5->res_cap->num_dwb;

 FUNC_0(VAR_7 > 0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct dcn20_mmhubbub *VAR_8 = FUNC_3(sizeof(struct dcn20_mmhubbub),
          VAR_0);

  if (!VAR_8) {
   FUNC_2("DC: failed to create mcif_wb20!\n");
   return 0;
  }

  FUNC_1(VAR_8, VAR_4,
    &VAR_2[VAR_6],
    &VAR_3,
    &VAR_1,
    VAR_6);

  VAR_5->mcif_wb[VAR_6] = &VAR_8->base;
 }
 return 1;
}
