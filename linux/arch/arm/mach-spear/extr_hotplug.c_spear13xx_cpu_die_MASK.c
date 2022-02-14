
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int,int) ;
 int FUNC_3 (unsigned int,int*) ;

void FUNC_4(unsigned int VAR_0)
{
 int VAR_1 = 0;




 FUNC_0();
 FUNC_3(VAR_0, &VAR_1);





 FUNC_1();

 if (VAR_1)
  FUNC_2("CPU%u: %u spurious wakeup calls\n", VAR_0, VAR_1);
}
