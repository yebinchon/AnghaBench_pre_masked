
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,int) ;
 int FUNC_1 (unsigned int,int*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

void FUNC_4(unsigned int VAR_0, unsigned int VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_1);
 FUNC_1(VAR_0, &VAR_2);
 FUNC_3(VAR_1);

 if (VAR_2)
  FUNC_0("CPU%u: %u spurious wakeup calls\n", VAR_0, VAR_2);
}
