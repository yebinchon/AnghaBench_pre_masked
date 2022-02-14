
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_engine_cs {struct drm_i915_private* i915; } ;
struct i915_wa_list {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int * subslice_7eu; } ;
struct TYPE_4__ {TYPE_1__ sseu; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_engine_cs *VAR_1,
    struct i915_wa_list *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->i915;
 u8 VAR_4[3] = { 0, 0, 0 };
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  u8 VAR_6;





  if (!FUNC_5(FUNC_2(VAR_3)->sseu.subslice_7eu[VAR_5]))
   continue;







  VAR_6 = FUNC_4(FUNC_2(VAR_3)->sseu.subslice_7eu[VAR_5]) - 1;
  VAR_4[VAR_5] = 3 - VAR_6;
 }

 if (VAR_4[0] == 0 && VAR_4[1] == 0 && VAR_4[2] == 0)
  return;


 FUNC_3(VAR_0,
       FUNC_1(2) |
       FUNC_1(1) |
       FUNC_1(0),
       FUNC_0(2, VAR_4[2]) |
       FUNC_0(1, VAR_4[1]) |
       FUNC_0(0, VAR_4[0]));
}
