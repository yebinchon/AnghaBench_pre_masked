
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_iommu*,scalar_t__,int (*) (scalar_t__),int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct intel_iommu *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;

 if (!FUNC_2(VAR_3->cap) && !FUNC_1(VAR_3->cap))
  return;

 FUNC_3(&VAR_3->register_lock, VAR_5);
 VAR_4 = FUNC_5(VAR_3->reg + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_6(VAR_4, VAR_3->reg + VAR_0);


 FUNC_0(VAR_3, VAR_0,
  FUNC_5, !(VAR_4 & VAR_2), VAR_4);

 FUNC_4(&VAR_3->register_lock, VAR_5);
}
