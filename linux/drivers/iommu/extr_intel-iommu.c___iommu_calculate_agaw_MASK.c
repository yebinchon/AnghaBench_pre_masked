
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int cap; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct intel_iommu *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = -1;

 VAR_2 = FUNC_0(VAR_0->cap);
 for (VAR_3 = FUNC_2(VAR_1);
      VAR_3 >= 0; VAR_3--) {
  if (FUNC_1(VAR_3, &VAR_2))
   break;
 }

 return VAR_3;
}
