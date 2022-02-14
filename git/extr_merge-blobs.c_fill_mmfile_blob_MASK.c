
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct blob {TYPE_1__ object; } ;
struct TYPE_5__ {unsigned long size; void* ptr; } ;
typedef TYPE_2__ mmfile_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int *,int*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(mmfile_t *VAR_1, struct blob *VAR_2)
{
 void *VAR_3;
 unsigned long VAR_4;
 enum object_type VAR_5;

 VAR_3 = FUNC_1(&VAR_2->object.oid, &VAR_5, &VAR_4);
 if (!VAR_3)
  return -1;
 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_3);
  return -1;
 }
 VAR_1->ptr = VAR_3;
 VAR_1->size = VAR_4;
 return 0;
}
