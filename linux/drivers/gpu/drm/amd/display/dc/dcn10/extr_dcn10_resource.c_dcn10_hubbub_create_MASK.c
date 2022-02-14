
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn10_hubbub {struct hubbub base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hubbub*,struct dc_context*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dcn10_hubbub* FUNC_1 (int,int ) ;

__attribute__((used)) static struct hubbub *FUNC_2(struct dc_context *VAR_4)
{
 struct dcn10_hubbub *VAR_5 = FUNC_1(sizeof(struct dcn10_hubbub),
       VAR_0);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->base, VAR_4,
   &VAR_2,
   &VAR_3,
   &VAR_1);

 return &VAR_5->base;
}
