
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_renderstate_rodata {int dummy; } ;
struct intel_engine_cs {scalar_t__ class; int i915; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct intel_renderstate_rodata const VAR_1 ;
 struct intel_renderstate_rodata const VAR_2 ;
 struct intel_renderstate_rodata const VAR_3 ;
 struct intel_renderstate_rodata const VAR_4 ;

__attribute__((used)) static const struct intel_renderstate_rodata *
FUNC_1(const struct intel_engine_cs *VAR_5)
{
 if (VAR_5->class != VAR_0)
  return ((void*)0);

 switch (FUNC_0(VAR_5->i915)) {
 case 6:
  return &VAR_1;
 case 7:
  return &VAR_2;
 case 8:
  return &VAR_3;
 case 9:
  return &VAR_4;
 }

 return ((void*)0);
}
