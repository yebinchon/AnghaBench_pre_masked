
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 struct tree* FUNC_0 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_1 (int *,struct object_id*) ;
 int FUNC_2 (struct repository*,int *,int *,struct object_id*,int ) ;
 int FUNC_3 (struct repository*,int *,int *,struct object_id*,char const*) ;

__attribute__((used)) static struct tree *FUNC_4(struct repository *VAR_0,
          struct tree *VAR_1, struct tree *VAR_2,
          const char *VAR_3)
{
 struct object_id VAR_4;

 if (!*VAR_3) {
  FUNC_2(VAR_0, &VAR_1->object.oid, &VAR_2->object.oid, &VAR_4, 0);
 } else {
  FUNC_3(VAR_0, &VAR_1->object.oid, &VAR_2->object.oid, &VAR_4,
         VAR_3);
 }
 if (FUNC_1(&VAR_2->object.oid, &VAR_4))
  return VAR_2;
 return FUNC_0(VAR_0, &VAR_4);
}
