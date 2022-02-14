
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {int active; int clk_master; int lock; scalar_t__ sfrbase; int pgtable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sysmmu_drvdata*) ;
 int FUNC_1 (struct sysmmu_drvdata*) ;
 int FUNC_2 (struct sysmmu_drvdata*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct sysmmu_drvdata *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(VAR_3);

 FUNC_4(&VAR_3->lock, VAR_4);
 FUNC_6(VAR_0, VAR_3->sfrbase + VAR_2);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_3->pgtable);
 FUNC_6(VAR_1, VAR_3->sfrbase + VAR_2);
 VAR_3->active = 1;
 FUNC_5(&VAR_3->lock, VAR_4);







 FUNC_3(VAR_3->clk_master);
}
