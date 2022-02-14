
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_smu_funcs {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_context*,struct pp_smu_funcs*) ;
 struct pp_smu_funcs* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pp_smu_funcs *FUNC_2(struct dc_context *VAR_1)
{
 struct pp_smu_funcs *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return VAR_2;

 FUNC_0(VAR_1, VAR_2);
 return VAR_2;
}
