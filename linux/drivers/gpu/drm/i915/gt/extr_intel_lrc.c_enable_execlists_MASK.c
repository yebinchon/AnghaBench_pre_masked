
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vma; } ;
struct intel_engine_cs {TYPE_1__ status_page; int i915; int uncore; } ;


 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intel_engine_cs*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct intel_engine_cs *VAR_7)
{
 u32 VAR_8;

 FUNC_5(VAR_7->uncore, VAR_0);

 FUNC_7(VAR_7, ~0u);

 if (FUNC_2(VAR_7->i915) >= 11)
  VAR_8 = FUNC_4(VAR_1);
 else
  VAR_8 = FUNC_4(VAR_2);
 FUNC_1(VAR_7, VAR_5, VAR_8);

 FUNC_1(VAR_7, VAR_4, FUNC_3(VAR_6));

 FUNC_1(VAR_7,
   VAR_3,
   FUNC_6(VAR_7->status_page.vma));
 FUNC_0(VAR_7, VAR_3);
}
