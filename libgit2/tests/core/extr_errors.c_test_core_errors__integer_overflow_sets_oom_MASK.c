
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int message; int klass; } ;


 int FUNC_0 (size_t*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;

void FUNC_7(void)
{
 size_t VAR_2;

 FUNC_5();
 FUNC_1(!FUNC_0(&VAR_2, VAR_1-1, 1));
 FUNC_3(((void*)0), FUNC_6());

 FUNC_5();
 FUNC_1(!FUNC_0(&VAR_2, 42, 69));
 FUNC_3(((void*)0), FUNC_6());

 FUNC_5();
 FUNC_1(FUNC_0(&VAR_2, VAR_1, VAR_1));
 FUNC_2(VAR_0, FUNC_6()->klass);
 FUNC_4("Out of memory", FUNC_6()->message);

 FUNC_5();
 FUNC_1(FUNC_0(&VAR_2, VAR_1, VAR_1));
 FUNC_2(VAR_0, FUNC_6()->klass);
 FUNC_4("Out of memory", FUNC_6()->message);
}
