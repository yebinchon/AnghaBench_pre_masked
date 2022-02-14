
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_iommu {int gcmd; int register_lock; scalar_t__ reg; TYPE_1__* ir_table; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct intel_iommu*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct intel_iommu *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 u64 VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_6((void *)VAR_7->ir_table->base);

 FUNC_4(&VAR_7->register_lock, VAR_9);

 FUNC_2(VAR_7->reg + VAR_2,
      (VAR_10) | FUNC_1(VAR_8) | VAR_5);


 FUNC_7(VAR_7->gcmd | VAR_3, VAR_7->reg + VAR_0);

 FUNC_0(VAR_7, VAR_1,
        VAR_6, (VAR_11 & VAR_4), VAR_11);
 FUNC_5(&VAR_7->register_lock, VAR_9);





 FUNC_3(VAR_7);
}
