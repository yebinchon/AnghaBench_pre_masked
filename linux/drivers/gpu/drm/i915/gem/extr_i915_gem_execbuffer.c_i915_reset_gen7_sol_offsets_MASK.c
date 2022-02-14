
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_1__* engine; int i915; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i915_request*,int *) ;
 int * FUNC_8 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_9(struct i915_request *VAR_3)
{
 u32 *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_3->i915, 7) || VAR_3->engine->id != VAR_2) {
  FUNC_0("sol reset is gen7/rcs only\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_8(VAR_3, 4 * 2 + 2);
 if (FUNC_2(VAR_4))
  return FUNC_5(VAR_4);

 *VAR_4++ = FUNC_4(4);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  *VAR_4++ = FUNC_6(FUNC_1(VAR_5));
  *VAR_4++ = 0;
 }
 *VAR_4++ = VAR_1;
 FUNC_7(VAR_3, VAR_4);

 return 0;
}
