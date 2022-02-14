
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_execbuffer {unsigned int buffer_count; int * exec; } ;
struct TYPE_2__ {int prefault_disable; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct i915_execbuffer *VAR_1)
{
 const unsigned int VAR_2 = VAR_1->buffer_count;
 unsigned int VAR_3;

 if (FUNC_1(VAR_0.prefault_disable))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_4;

  VAR_4 = FUNC_0(&VAR_1->exec[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
