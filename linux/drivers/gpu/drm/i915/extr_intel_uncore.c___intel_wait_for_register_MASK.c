
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int lock; } ;
typedef int reg_value ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore*,int ,int,int,unsigned int,int ,int*) ;
 int FUNC_1 (int,int,unsigned int,int,int) ;
 unsigned int FUNC_2 (struct intel_uncore*,int ,int ) ;
 int FUNC_3 (struct intel_uncore*,unsigned int) ;
 int FUNC_4 (struct intel_uncore*,unsigned int) ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ,int,int,int) ;

int FUNC_10(struct intel_uncore *VAR_1,
         i915_reg_t VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6,
         u32 *VAR_7)
{
 unsigned VAR_8 =
  FUNC_2(VAR_1, VAR_2, VAR_0);
 u32 VAR_9;
 int VAR_10;

 FUNC_6(VAR_6);

 FUNC_7(&VAR_1->lock);
 FUNC_3(VAR_1, VAR_8);

 VAR_10 = FUNC_0(VAR_1,
        VAR_2, VAR_3, VAR_4,
        VAR_5, 0, &VAR_9);

 FUNC_4(VAR_1, VAR_8);
 FUNC_8(&VAR_1->lock);

 if (VAR_10 && VAR_6)
  VAR_10 = FUNC_1(VAR_9 = FUNC_5(VAR_1,
               VAR_2),
     (VAR_9 & VAR_3) == VAR_4,
     VAR_6 * 1000, 10, 1000);


 FUNC_9(0, VAR_2, VAR_9, sizeof(VAR_9), 1);

 if (VAR_7)
  *VAR_7 = VAR_9;

 return VAR_10;
}
