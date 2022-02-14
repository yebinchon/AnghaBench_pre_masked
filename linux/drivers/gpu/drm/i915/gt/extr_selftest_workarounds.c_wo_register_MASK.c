
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_engine_cs {int i915; } ;
typedef enum intel_platform { ____Placeholder_intel_platform } intel_platform ;
struct TYPE_5__ {int platform; } ;
struct TYPE_4__ {int platform; scalar_t__ reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool FUNC_2(struct intel_engine_cs *VAR_3, u32 VAR_4)
{
 enum intel_platform VAR_5 = FUNC_1(VAR_3->i915)->platform;
 int VAR_6;

 if ((VAR_4 & VAR_0) ==
      VAR_1)
  return 1;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6].platform == VAR_5 &&
      VAR_2[VAR_6].reg == VAR_4)
   return 1;
 }

 return 0;
}
