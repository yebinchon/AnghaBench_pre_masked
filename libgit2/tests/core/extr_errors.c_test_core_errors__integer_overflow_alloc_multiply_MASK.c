
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int message; int klass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int,int) ;

void FUNC_6(void)
{
 FUNC_3(FUNC_5(10, 10));
 FUNC_3(FUNC_5(1000, 1000));
 FUNC_3(FUNC_5(VAR_1/sizeof(void *), sizeof(void *)));
 FUNC_3(FUNC_5(0, 10));
 FUNC_3(FUNC_5(10, 0));

 FUNC_2(FUNC_5(VAR_1-1, sizeof(void *)));
 FUNC_2(FUNC_5((VAR_1/sizeof(void *))+1, sizeof(void *)));

 FUNC_0(VAR_0, FUNC_4()->klass);
 FUNC_1("Out of memory", FUNC_4()->message);
}
