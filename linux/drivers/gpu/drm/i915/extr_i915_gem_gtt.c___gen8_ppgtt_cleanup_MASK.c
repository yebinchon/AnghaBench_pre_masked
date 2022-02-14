
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_directory {void** entry; } ;
struct i915_address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_address_space*,struct i915_page_directory*) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_1,
     struct i915_page_directory *VAR_2,
     int VAR_3, int VAR_4)
{
 if (VAR_4) {
  void **VAR_5 = VAR_2->entry;

  do {
   if (!*VAR_5)
    continue;

   FUNC_1(VAR_1, *VAR_5, VAR_0, VAR_4 - 1);
  } while (VAR_5++, --VAR_3);
 }

 FUNC_0(VAR_1, VAR_2);
}
