
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct powerdomain {scalar_t__ pwrsts_logic_ret; int banks; scalar_t__* pwrsts_mem_ret; int * ret_mem_off_counter; int ret_logic_off_counter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct powerdomain*) ;
 scalar_t__ FUNC_1 (struct powerdomain*,int) ;

__attribute__((used)) static void FUNC_2(struct powerdomain *VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if ((VAR_2->pwrsts_logic_ret == VAR_1) &&
     (VAR_4 == VAR_0))
  VAR_2->ret_logic_off_counter++;

 for (VAR_3 = 0; VAR_3 < VAR_2->banks; VAR_3++) {
  VAR_5 = FUNC_1(VAR_2, VAR_3);

  if ((VAR_2->pwrsts_mem_ret[VAR_3] == VAR_1) &&
      (VAR_5 == VAR_0))
   VAR_2->ret_mem_off_counter[VAR_3]++;
 }
}
