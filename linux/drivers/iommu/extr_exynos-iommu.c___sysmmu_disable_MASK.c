
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {int active; int lock; scalar_t__ sfrbase; int clk_master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sysmmu_drvdata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sysmmu_drvdata *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_3->clk_master);

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_4(VAR_0, VAR_3->sfrbase + VAR_2);
 FUNC_4(0, VAR_3->sfrbase + VAR_1);
 VAR_3->active = 0;
 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_0(VAR_3);
}
