
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reloc_cache {int rq_size; int * rq_cmd; int rq; } ;
struct i915_vma {int dummy; } ;
struct i915_execbuffer {int engine; struct reloc_cache reloc_cache; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i915_execbuffer*,struct i915_vma*,unsigned int) ;
 scalar_t__ FUNC_2 (struct i915_execbuffer*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct reloc_cache*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u32 *FUNC_6(struct i915_execbuffer *VAR_3,
        struct i915_vma *VAR_4,
        unsigned int VAR_5)
{
 struct reloc_cache *VAR_6 = &VAR_3->reloc_cache;
 u32 *VAR_7;

 if (VAR_6->rq_size > VAR_2/sizeof(u32) - (VAR_5 + 1))
  FUNC_4(VAR_6);

 if (FUNC_5(!VAR_6->rq)) {
  int VAR_8;


  if (FUNC_2(VAR_3))
   return FUNC_0(-VAR_1);

  if (!FUNC_3(VAR_3->engine))
   return FUNC_0(-VAR_0);

  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
  if (FUNC_5(VAR_8))
   return FUNC_0(VAR_8);
 }

 VAR_7 = VAR_6->rq_cmd + VAR_6->rq_size;
 VAR_6->rq_size += VAR_5;

 return VAR_7;
}
