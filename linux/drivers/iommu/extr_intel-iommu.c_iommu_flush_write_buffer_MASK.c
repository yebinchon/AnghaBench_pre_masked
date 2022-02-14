
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int gcmd; int register_lock; scalar_t__ reg; int cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,scalar_t__) ;

void FUNC_5(struct intel_iommu *VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8;

 if (!VAR_5 && !FUNC_1(VAR_6->cap))
  return;

 FUNC_2(&VAR_6->register_lock, VAR_8);
 FUNC_4(VAR_6->gcmd | VAR_2, VAR_6->reg + VAR_0);


 FUNC_0(VAR_6, VAR_1,
        VAR_4, (!(VAR_7 & VAR_3)), VAR_7);

 FUNC_3(&VAR_6->register_lock, VAR_8);
}
