
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int * dev_iommu; } ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct protection_domain *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(); ++VAR_2) {
  if (VAR_1 && !VAR_1->dev_iommu[VAR_2])
   continue;





  FUNC_1(VAR_0[VAR_2]);
 }
}
