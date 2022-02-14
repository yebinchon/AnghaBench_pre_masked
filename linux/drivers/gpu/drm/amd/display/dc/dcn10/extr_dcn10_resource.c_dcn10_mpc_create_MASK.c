
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn10_mpc {struct mpc base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dcn10_mpc*,struct dc_context*,int *,int *,int *,int) ;
 struct dcn10_mpc* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct mpc *FUNC_2(struct dc_context *VAR_4)
{
 struct dcn10_mpc *VAR_5 = FUNC_1(sizeof(struct dcn10_mpc),
       VAR_0);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_5, VAR_4,
   &VAR_2,
   &VAR_3,
   &VAR_1,
   4);

 return &VAR_5->base;
}
