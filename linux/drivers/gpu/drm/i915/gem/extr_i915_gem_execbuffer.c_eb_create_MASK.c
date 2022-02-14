
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_execbuffer {unsigned int buffer_count; unsigned int lut_size; int buckets; TYPE_1__* args; } ;
struct hlist_head {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i915_execbuffer *VAR_5)
{
 if (!(VAR_5->args->flags & VAR_2)) {
  unsigned int VAR_6 = 1 + FUNC_0(VAR_5->buffer_count);
  do {
   gfp_t VAR_7;







   VAR_7 = VAR_1;
   if (VAR_6 > 1)
    VAR_7 |= VAR_3 | VAR_4;

   VAR_5->buckets = FUNC_1(sizeof(struct hlist_head) << VAR_6,
           VAR_7);
   if (VAR_5->buckets)
    break;
  } while (--VAR_6);

  if (FUNC_2(!VAR_6))
   return -VAR_0;

  VAR_5->lut_size = VAR_6;
 } else {
  VAR_5->lut_size = -VAR_5->buffer_count;
 }

 return 0;
}
