
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tag {int tag; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_4__ {TYPE_1__* obj; } ;
struct TYPE_3__ {scalar_t__ type; int oid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (struct commit*) ;
 scalar_t__ FUNC_2 (struct object_id*,int *) ;
 int FUNC_3 (char*,struct object_id*) ;
 char* FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct commit *VAR_1)
{
 char *VAR_2;
 struct object_id VAR_3;
 int VAR_4 = 0;


 if (!FUNC_1(VAR_1) ||
     !FUNC_1(VAR_1)->obj ||
     FUNC_1(VAR_1)->obj->type != VAR_0)
  return VAR_4;
 VAR_2 = FUNC_4("refs/tags/%s",
     ((struct tag *)FUNC_1(VAR_1)->obj)->tag);
 if (!FUNC_3(VAR_2, &VAR_3) &&
     FUNC_2(&VAR_3, &FUNC_1(VAR_1)->obj->oid))
  VAR_4 = 0;
 else
  VAR_4 = 1;
 FUNC_0(VAR_2);
 return VAR_4;
}
