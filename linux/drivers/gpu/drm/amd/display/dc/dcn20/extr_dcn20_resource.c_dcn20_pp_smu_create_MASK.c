
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ver; } ;
struct pp_smu_funcs {TYPE_1__ ctx; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dc_context*,struct pp_smu_funcs*) ;
 struct pp_smu_funcs* FUNC_1 (int,int ) ;
 struct pp_smu_funcs* FUNC_2 (struct pp_smu_funcs*,int ,int) ;

struct pp_smu_funcs *FUNC_3(struct dc_context *VAR_2)
{
 struct pp_smu_funcs *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return VAR_3;

 FUNC_0(VAR_2, VAR_3);

 if (VAR_3->ctx.ver != VAR_1)
  VAR_3 = FUNC_2(VAR_3, 0, sizeof(struct pp_smu_funcs));

 return VAR_3;
}
