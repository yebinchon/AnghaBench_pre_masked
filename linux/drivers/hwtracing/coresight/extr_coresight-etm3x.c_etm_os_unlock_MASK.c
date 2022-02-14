
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_drvdata {int os_unlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct etm_drvdata*,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct etm_drvdata *VAR_1)
{

 FUNC_0(VAR_1, 0x0, VAR_0);
 VAR_1->os_unlock = 1;
 FUNC_1();
}
