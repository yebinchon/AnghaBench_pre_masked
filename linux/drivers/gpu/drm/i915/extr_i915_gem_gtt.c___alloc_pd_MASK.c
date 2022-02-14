
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_directory {int lock; } ;


 int VAR_0 ;
 struct i915_page_directory* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct i915_page_directory *FUNC_3(size_t VAR_1)
{
 struct i915_page_directory *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (FUNC_2(!VAR_2))
  return ((void*)0);

 FUNC_1(&VAR_2->lock);
 return VAR_2;
}
