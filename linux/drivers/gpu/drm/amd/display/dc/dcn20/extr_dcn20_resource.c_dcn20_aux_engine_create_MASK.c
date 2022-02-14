
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dce_aux {int dummy; } ;
struct dc_context {int dummy; } ;
struct aux_engine_dce110 {struct dce_aux base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct aux_engine_dce110*,struct dc_context*,size_t,int,int *) ;
 struct aux_engine_dce110* FUNC_1 (int,int ) ;

struct dce_aux *FUNC_2(
 struct dc_context *VAR_4,
 uint32_t VAR_5)
{
 struct aux_engine_dce110 *VAR_6 =
  FUNC_1(sizeof(struct aux_engine_dce110), VAR_1);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6, VAR_4, VAR_5,
        VAR_2 * VAR_0,
        &VAR_3[VAR_5]);

 return &VAR_6->base;
}
