
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dpp {int dummy; } ;
struct dcn20_dpp {struct dpp base; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dcn20_dpp*,struct dc_context*,size_t,int *,int *,int *) ;
 int FUNC_2 (struct dcn20_dpp*) ;
 struct dcn20_dpp* FUNC_3 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct dpp *FUNC_4(
 struct dc_context *VAR_4,
 uint32_t VAR_5)
{
 struct dcn20_dpp *VAR_6 =
  FUNC_3(sizeof(struct dcn20_dpp), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 if (FUNC_1(VAR_6, VAR_4, VAR_5,
   &VAR_2[VAR_5], &VAR_3, &VAR_1))
  return &VAR_6->base;

 FUNC_0();
 FUNC_2(VAR_6);
 return ((void*)0);
}
