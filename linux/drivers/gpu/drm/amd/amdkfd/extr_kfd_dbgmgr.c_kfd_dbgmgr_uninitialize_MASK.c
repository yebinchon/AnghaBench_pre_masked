
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dbgmgr {int * dev; scalar_t__ pasid; int * dbgdev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kfd_dbgmgr *VAR_0)
{
 FUNC_0(VAR_0->dbgdev);

 VAR_0->dbgdev = ((void*)0);
 VAR_0->pasid = 0;
 VAR_0->dev = ((void*)0);
}
