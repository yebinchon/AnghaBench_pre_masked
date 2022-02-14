
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ suspend_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(suspend_state_t VAR_4)
{
 unsigned long VAR_5;


 if (VAR_4 != VAR_2)
  return -VAR_1;





 VAR_5 = FUNC_1(VAR_3 + VAR_0);
 VAR_5 &= 0xffff0000;


 FUNC_0();




 FUNC_2(VAR_5, VAR_3 + VAR_0);

 return 0;
}
