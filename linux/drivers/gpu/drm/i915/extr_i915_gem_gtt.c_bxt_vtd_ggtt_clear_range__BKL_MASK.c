
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_address_space {int dummy; } ;
struct clear_range {int member_2; int member_1; struct i915_address_space* member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct clear_range*,int *) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_1,
       u64 VAR_2,
       u64 VAR_3)
{
 struct clear_range VAR_4 = { VAR_1, VAR_2, VAR_3 };

 FUNC_0(VAR_0, &VAR_4, ((void*)0));
}
