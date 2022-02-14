
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysmmu_iova_t ;
struct sysmmu_drvdata {scalar_t__ version; int lock; int clk_master; scalar_t__ active; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct sysmmu_drvdata*) ;
 int FUNC_2 (struct sysmmu_drvdata*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (struct sysmmu_drvdata*) ;
 int FUNC_8 (struct sysmmu_drvdata*) ;

__attribute__((used)) static void FUNC_9(struct sysmmu_drvdata *VAR_0,
         sysmmu_iova_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_5(&VAR_0->lock, VAR_2);
 if (VAR_0->active && VAR_0->version >= FUNC_0(3, 3)) {
  FUNC_4(VAR_0->clk_master);
  if (FUNC_7(VAR_0)) {
   if (VAR_0->version >= FUNC_0(5, 0))
    FUNC_1(VAR_0);
   else
    FUNC_2(VAR_0, VAR_1, 1);
   FUNC_8(VAR_0);
  }
  FUNC_3(VAR_0->clk_master);
 }
 FUNC_6(&VAR_0->lock, VAR_2);
}
