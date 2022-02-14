
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i915_address_space {int top; int total; } ;
struct TYPE_2__ {int pd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct i915_address_space*,int ,int*,int,int ) ;
 int FUNC_4 (struct i915_address_space*,int ,int,int,int ) ;
 TYPE_1__* FUNC_5 (struct i915_address_space*) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct i915_address_space *VAR_1,
       u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 FUNC_1(!FUNC_2(VAR_2, FUNC_0(VAR_0)));
 FUNC_1(!FUNC_2(VAR_3, FUNC_0(VAR_0)));
 FUNC_1(FUNC_6(VAR_2, VAR_3, VAR_1->total));

 VAR_2 >>= VAR_0;
 VAR_3 >>= VAR_0;
 FUNC_1(VAR_3 == 0);
 VAR_4 = VAR_2;

 VAR_5 = FUNC_3(VAR_1, FUNC_5(VAR_1)->pd,
     &VAR_2, VAR_2 + VAR_3, VAR_1->top);
 if (FUNC_7(VAR_5 && VAR_4 != VAR_2))
  FUNC_4(VAR_1, FUNC_5(VAR_1)->pd,
       VAR_4, VAR_2, VAR_1->top);

 return VAR_5;
}
