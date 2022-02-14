
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_scratch {int encode; } ;
struct i915_page_directory {int ** entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i915_page_directory* const) ;
 int FUNC_4 (struct i915_page_directory* const) ;
 int FUNC_5 (int ,unsigned short const,int ) ;

__attribute__((used)) static inline void
FUNC_6(struct i915_page_directory * const VAR_0,
        const unsigned short VAR_1,
        const struct i915_page_scratch * const VAR_2)
{
 FUNC_0(FUNC_2(FUNC_4(VAR_0)) == 0);

 FUNC_5(FUNC_3(VAR_0), VAR_1, VAR_2->encode);
 VAR_0->entry[VAR_1] = ((void*)0);
 FUNC_1(FUNC_4(VAR_0));
}
