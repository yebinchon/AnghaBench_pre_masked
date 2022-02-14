
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,unsigned int,int ) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_2)
{

 unsigned int VAR_3 = FUNC_5();
 unsigned int VAR_4 = FUNC_1(VAR_3, 1);
 unsigned int VAR_5 = FUNC_1(VAR_3, 0);

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_5, VAR_4, VAR_1);
  FUNC_2();
 }

 FUNC_4("Failed to suspend the system\n");


 return 1;
}
