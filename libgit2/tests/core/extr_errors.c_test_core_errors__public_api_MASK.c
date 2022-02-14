
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ klass; int message; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ,char*) ;

void FUNC_6(void)
{
 char *VAR_2;

 FUNC_1();
 FUNC_0(FUNC_2() == ((void*)0));

 FUNC_3();

 FUNC_0(FUNC_2() != ((void*)0));
 FUNC_0(FUNC_2()->klass == VAR_0);
 VAR_2 = FUNC_5(FUNC_2()->message, "memory");
 FUNC_0(VAR_2 != ((void*)0));

 FUNC_1();

 FUNC_4(VAR_1, "This is a test");

 FUNC_0(FUNC_2() != ((void*)0));
 VAR_2 = FUNC_5(FUNC_2()->message, "This is a test");
 FUNC_0(VAR_2 != ((void*)0));

 FUNC_1();
 FUNC_0(FUNC_2() == ((void*)0));
}
