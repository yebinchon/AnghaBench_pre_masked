
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int gcmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct intel_iommu *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_5->register_lock, VAR_7);
 VAR_5->gcmd |= VAR_2;
 FUNC_3(VAR_5->gcmd, VAR_5->reg + VAR_0);


 FUNC_0(VAR_5, VAR_1,
        VAR_4, (VAR_6 & VAR_3), VAR_6);

 FUNC_2(&VAR_5->register_lock, VAR_7);
}
