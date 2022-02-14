
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct transform {int dummy; } ;
struct dce_transform {int prescaler_on; struct transform base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_transform*,struct dc_context*,size_t,int *,int *,int *) ;
 struct dce_transform* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct transform *FUNC_2(
 struct dc_context *VAR_4,
 uint32_t VAR_5)
{
 struct dce_transform *VAR_6 =
  FUNC_1(sizeof(struct dce_transform), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6, VAR_4, VAR_5,
    &VAR_2[VAR_5], &VAR_3, &VAR_1);
 VAR_6->prescaler_on = 0;
 return &VAR_6->base;
}
