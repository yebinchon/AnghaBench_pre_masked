
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int gcmd; int ecap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_iommu*,scalar_t__,int (*) (scalar_t__),int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_iommu*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct intel_iommu *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 if (!FUNC_1(VAR_4->ecap))
  return;





 FUNC_2(VAR_4);

 FUNC_3(&VAR_4->register_lock, VAR_5);

 VAR_6 = FUNC_5(VAR_4->reg + VAR_1);
 if (!(VAR_6 & VAR_3))
  goto end;

 VAR_4->gcmd &= ~VAR_2;
 FUNC_6(VAR_4->gcmd, VAR_4->reg + VAR_0);

 FUNC_0(VAR_4, VAR_1,
        FUNC_5, !(VAR_6 & VAR_3), VAR_6);

end:
 FUNC_4(&VAR_4->register_lock, VAR_5);
}
