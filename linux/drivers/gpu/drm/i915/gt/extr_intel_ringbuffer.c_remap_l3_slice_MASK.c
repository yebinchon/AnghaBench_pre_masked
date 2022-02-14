
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_2__* i915; } ;
struct TYPE_3__ {int ** remap_info; } ;
struct TYPE_4__ {TYPE_1__ l3_parity; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i915_request*,int *) ;
 int * FUNC_6 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_7(struct i915_request *VAR_2, int VAR_3)
{
 u32 *VAR_4, *VAR_5 = VAR_2->i915->l3_parity.remap_info[VAR_3];
 int VAR_6;

 if (!VAR_5)
  return 0;

 VAR_4 = FUNC_6(VAR_2, VAR_0/4 * 2 + 2);
 if (FUNC_1(VAR_4))
  return FUNC_3(VAR_4);






 *VAR_4++ = FUNC_2(VAR_0/4);
 for (VAR_6 = 0; VAR_6 < VAR_0/4; VAR_6++) {
  *VAR_4++ = FUNC_4(FUNC_0(VAR_3, VAR_6));
  *VAR_4++ = VAR_5[VAR_6];
 }
 *VAR_4++ = VAR_1;
 FUNC_5(VAR_2, VAR_4);

 return 0;
}
