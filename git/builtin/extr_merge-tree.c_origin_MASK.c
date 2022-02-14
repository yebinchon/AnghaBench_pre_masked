
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_list {int stage; struct merge_list* link; TYPE_2__* blob; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 void* FUNC_0 (int *,int*,unsigned long*) ;

__attribute__((used)) static void *FUNC_1(struct merge_list *VAR_0, unsigned long *VAR_1)
{
 enum object_type VAR_2;
 while (VAR_0) {
  if (VAR_0->stage == 2)
   return FUNC_0(&VAR_0->blob->object.oid,
      &VAR_2, VAR_1);
  VAR_0 = VAR_0->link;
 }
 return ((void*)0);
}
