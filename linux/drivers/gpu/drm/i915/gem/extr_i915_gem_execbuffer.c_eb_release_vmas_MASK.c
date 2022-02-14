
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {unsigned int* exec_flags; } ;
struct i915_execbuffer {unsigned int buffer_count; unsigned int* flags; struct i915_vma** vma; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct i915_vma*,unsigned int) ;
 int FUNC_2 (struct i915_vma*) ;

__attribute__((used)) static void FUNC_3(const struct i915_execbuffer *VAR_2)
{
 const unsigned int VAR_3 = VAR_2->buffer_count;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct i915_vma *VAR_5 = VAR_2->vma[VAR_4];
  unsigned int VAR_6 = VAR_2->flags[VAR_4];

  if (!VAR_5)
   break;

  FUNC_0(VAR_5->exec_flags != &VAR_2->flags[VAR_4]);
  VAR_5->exec_flags = ((void*)0);
  VAR_2->vma[VAR_4] = ((void*)0);

  if (VAR_6 & VAR_0)
   FUNC_1(VAR_5, VAR_6);

  if (VAR_6 & VAR_1)
   FUNC_2(VAR_5);
 }
}
