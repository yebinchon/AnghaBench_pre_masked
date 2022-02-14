
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_directory {int dummy; } ;
struct i915_address_space {int dummy; } ;


 int VAR_0 ;
 struct i915_page_directory* FUNC_0 (int ) ;
 struct i915_page_directory* FUNC_1 (int) ;
 int FUNC_2 (struct i915_page_directory*) ;
 int FUNC_3 (struct i915_page_directory*) ;
 int FUNC_4 (struct i915_address_space*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct i915_page_directory *FUNC_6(struct i915_address_space *VAR_1)
{
 struct i915_page_directory *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (FUNC_5(!VAR_2))
  return FUNC_0(-VAR_0);

 if (FUNC_5(FUNC_4(VAR_1, FUNC_3(VAR_2)))) {
  FUNC_2(VAR_2);
  return FUNC_0(-VAR_0);
 }

 return VAR_2;
}
