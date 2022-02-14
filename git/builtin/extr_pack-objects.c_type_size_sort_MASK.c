
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct object_entry {scalar_t__ hash; scalar_t__ preferred_base; TYPE_1__ idx; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 unsigned long FUNC_0 (struct object_entry const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct object_entry const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(const void *VAR_1, const void *VAR_2)
{
 const struct object_entry *VAR_3 = *(struct object_entry **)VAR_1;
 const struct object_entry *VAR_4 = *(struct object_entry **)VAR_2;
 const enum object_type VAR_5 = FUNC_2(VAR_3);
 const enum object_type VAR_6 = FUNC_2(VAR_4);
 const unsigned long VAR_7 = FUNC_0(VAR_3);
 const unsigned long VAR_8 = FUNC_0(VAR_4);

 if (VAR_5 > VAR_6)
  return -1;
 if (VAR_5 < VAR_6)
  return 1;
 if (VAR_3->hash > VAR_4->hash)
  return -1;
 if (VAR_3->hash < VAR_4->hash)
  return 1;
 if (VAR_3->preferred_base > VAR_4->preferred_base)
  return -1;
 if (VAR_3->preferred_base < VAR_4->preferred_base)
  return 1;
 if (VAR_0) {
  const int VAR_9 = FUNC_1(&VAR_3->idx.oid, &VAR_4->idx.oid);
  if (VAR_9)
   return VAR_9;
 }
 if (VAR_7 > VAR_8)
  return -1;
 if (VAR_7 < VAR_8)
  return 1;
 return VAR_3 < VAR_4 ? -1 : (VAR_3 > VAR_4);
}
