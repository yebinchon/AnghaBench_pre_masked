
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2485_data {int time_prev; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int const) ;

__attribute__((used)) static void FUNC_3(struct ltc2485_data *VAR_0)
{
 const unsigned int VAR_1 = 147;
 unsigned int VAR_2;


 VAR_2 = FUNC_1(FUNC_0(), VAR_0->time_prev);

 if (VAR_2 < VAR_1)
  FUNC_2(VAR_1 - VAR_2);
}
