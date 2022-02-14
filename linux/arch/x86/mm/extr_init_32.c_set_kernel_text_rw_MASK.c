
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(void)
{
 unsigned long VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = FUNC_0(VAR_1) - VAR_4;

 if (!VAR_3)
  return;

 FUNC_1("Set kernel text: %lx - %lx for read write\n",
   VAR_4, VAR_4+VAR_5);

 FUNC_2(FUNC_3(VAR_4), VAR_5 >> VAR_0);
}
