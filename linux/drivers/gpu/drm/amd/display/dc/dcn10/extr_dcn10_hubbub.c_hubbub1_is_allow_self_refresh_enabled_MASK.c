
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hubbub {int dummy; } ;
struct dcn10_hubbub {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 struct dcn10_hubbub* FUNC_1 (struct hubbub*) ;

bool FUNC_2(struct hubbub *VAR_2)
{
 struct dcn10_hubbub *VAR_3 = FUNC_1(VAR_2);
 uint32_t VAR_4 = 0;

 FUNC_0(VAR_1,
   VAR_0, &VAR_4);

 return VAR_4 ? 1 : 0;
}
