
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct debug_drvdata {scalar_t__ edpcsr; scalar_t__ base; void* edvidsr; scalar_t__ edvidsr_present; void* edcidsr; scalar_t__ edcidsr_present; void* edpcsr_hi; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct debug_drvdata*) ;
 int FUNC_4 (struct debug_drvdata*) ;
 int FUNC_5 (struct debug_drvdata*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct debug_drvdata *VAR_7)
{
 u32 VAR_8;

 FUNC_1(VAR_7->base);


 FUNC_5(VAR_7);


 VAR_8 = FUNC_6(VAR_7->base + VAR_5);





 FUNC_4(VAR_7);

 if (!FUNC_3(VAR_7))
  goto out;

 VAR_7->edpcsr = FUNC_6(VAR_7->base + VAR_2);
 if (VAR_7->edpcsr == VAR_4)
  goto out;






 if (FUNC_2(VAR_0))
  VAR_7->edpcsr_hi = FUNC_6(VAR_7->base + VAR_3);

 if (VAR_7->edcidsr_present)
  VAR_7->edcidsr = FUNC_6(VAR_7->base + VAR_1);

 if (VAR_7->edvidsr_present)
  VAR_7->edvidsr = FUNC_6(VAR_7->base + VAR_6);

out:

 FUNC_7(VAR_8, VAR_7->base + VAR_5);

 FUNC_0(VAR_7->base);
}
