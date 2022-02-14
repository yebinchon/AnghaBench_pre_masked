
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {int id; } ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i915_request*,int *) ;
 int * FUNC_7 (struct i915_request*,int) ;
 int FUNC_8 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int
FUNC_9(struct intel_vgpu *VAR_2,
     struct i915_request *VAR_3)
{
 unsigned int VAR_4;
 u32 *VAR_5;

 VAR_5 = FUNC_7(VAR_3, 2 * VAR_0 + 2);
 if (FUNC_1(VAR_5))
  return FUNC_3(VAR_5);

 *VAR_5++ = FUNC_2(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  *VAR_5++ = FUNC_5(FUNC_0(VAR_4));
  *VAR_5++ = FUNC_8(VAR_2, FUNC_0(VAR_4));
  FUNC_4("add lri reg pair 0x%x:0x%x in inhibit ctx, vgpu:%d, rind_id:%d\n",
         *(VAR_5-2), *(VAR_5-1), VAR_2->id, VAR_3->engine->id);

 }

 *VAR_5++ = VAR_1;
 FUNC_6(VAR_3, VAR_5);

 return 0;
}
