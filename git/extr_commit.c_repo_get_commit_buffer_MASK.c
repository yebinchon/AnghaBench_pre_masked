
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 void* FUNC_1 (struct repository*,struct commit const*,unsigned long*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct repository*,int *,int*,unsigned long*) ;
 int FUNC_4 (int) ;

const void *FUNC_5(struct repository *VAR_1,
       const struct commit *VAR_2,
       unsigned long *VAR_3)
{
 const void *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4) {
  enum object_type VAR_5;
  unsigned long VAR_6;
  VAR_4 = FUNC_3(VAR_1, &VAR_2->object.oid, &VAR_5, &VAR_6);
  if (!VAR_4)
   FUNC_0("cannot read commit object %s",
       FUNC_2(&VAR_2->object.oid));
  if (VAR_5 != VAR_0)
   FUNC_0("expected commit for %s, got %s",
       FUNC_2(&VAR_2->object.oid), FUNC_4(VAR_5));
  if (VAR_3)
   *VAR_3 = VAR_6;
 }
 return VAR_4;
}
