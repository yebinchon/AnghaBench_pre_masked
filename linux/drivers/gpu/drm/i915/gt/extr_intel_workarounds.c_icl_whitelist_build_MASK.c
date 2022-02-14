
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int dummy; } ;
struct intel_engine_cs {int class; int mmio_base; struct i915_wa_list whitelist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_wa_list*,int ) ;
 int FUNC_2 (struct i915_wa_list*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_6)
{
 struct i915_wa_list *VAR_7 = &VAR_6->whitelist;

 switch (VAR_6->class) {
 case 129:

  FUNC_1(VAR_7, VAR_1);


  FUNC_1(VAR_7, VAR_0);


  FUNC_1(VAR_7, VAR_2);
  FUNC_2(VAR_7, VAR_3,
      VAR_4 |
      VAR_5);
  break;

 case 128:

  FUNC_2(VAR_7, FUNC_0(0x2000 + VAR_6->mmio_base),
      VAR_4);

  FUNC_2(VAR_7, FUNC_0(0x2014 + VAR_6->mmio_base),
      VAR_4);

  FUNC_2(VAR_7, FUNC_0(0x23B0 + VAR_6->mmio_base),
      VAR_4);
  break;

 default:
  break;
 }
}
