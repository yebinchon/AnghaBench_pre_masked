
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* phys_reset_t ) (unsigned long,int ) ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 phys_reset_t VAR_2;


 FUNC_4();


 FUNC_2();


 FUNC_1();


 FUNC_2();


 VAR_2 = (phys_reset_t)FUNC_5(VAR_0);


 VAR_2((unsigned long)VAR_1, FUNC_3());


 FUNC_0();
}
