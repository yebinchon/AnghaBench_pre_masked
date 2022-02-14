
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_time_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,char*) ;

void FUNC_3(void)
{

   git_time_t VAR_0, VAR_1;


   FUNC_1(FUNC_2(&VAR_0, "2038-1-1"));
   FUNC_1(FUNC_2(&VAR_1, "2039-1-1"));
   FUNC_0(VAR_0 < VAR_1);

}
