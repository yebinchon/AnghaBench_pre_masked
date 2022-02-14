
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_iommu {int gcmd; int register_lock; scalar_t__ reg; int root_entry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct intel_iommu*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct intel_iommu *VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_5(VAR_7->root_entry);
 if (FUNC_4(VAR_7))
  VAR_8 |= VAR_5;

 FUNC_2(&VAR_7->register_lock, VAR_10);
 FUNC_1(VAR_7->reg + VAR_2, VAR_8);

 FUNC_6(VAR_7->gcmd | VAR_3, VAR_7->reg + VAR_0);


 FUNC_0(VAR_7, VAR_1,
        VAR_6, (VAR_9 & VAR_4), VAR_9);

 FUNC_3(&VAR_7->register_lock, VAR_10);
}
