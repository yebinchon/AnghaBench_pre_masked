
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_drvdata {int os_unlock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct etmv4_drvdata *VAR_1)
{

 FUNC_1(0x0, VAR_1->base + VAR_0);
 VAR_1->os_unlock = 1;
 FUNC_0();
}
