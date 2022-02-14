
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {unsigned int num_ctx; int lock; int * domains; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct ipmmu_vmsa_device *VAR_4 = VAR_3;
 irqreturn_t VAR_5 = VAR_1;
 unsigned int VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->lock, VAR_7);




 for (VAR_6 = 0; VAR_6 < VAR_4->num_ctx; VAR_6++) {
  if (!VAR_4->domains[VAR_6])
   continue;
  if (FUNC_0(VAR_4->domains[VAR_6]) == VAR_0)
   VAR_5 = VAR_0;
 }

 FUNC_2(&VAR_4->lock, VAR_7);

 return VAR_5;
}
