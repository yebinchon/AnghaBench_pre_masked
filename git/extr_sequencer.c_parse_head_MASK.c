
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,struct object_id*) ;
 struct commit* FUNC_3 (struct repository*,struct object_id*) ;
 int FUNC_4 (struct object_id*) ;
 int FUNC_5 (struct object_id*,int *) ;
 scalar_t__ FUNC_6 (struct commit*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_0, struct commit **VAR_1)
{
 struct commit *VAR_2;
 struct object_id VAR_3;

 if (FUNC_2("HEAD", &VAR_3)) {
  VAR_2 = ((void*)0);
 } else {
  VAR_2 = FUNC_3(VAR_0, &VAR_3);
  if (!VAR_2)
   return FUNC_1(FUNC_0("could not parse HEAD"));
  if (!FUNC_5(&VAR_3, &VAR_2->object.oid)) {
   FUNC_7(FUNC_0("HEAD %s is not a commit!"),
    FUNC_4(&VAR_3));
  }
  if (FUNC_6(VAR_2))
   return FUNC_1(FUNC_0("could not parse HEAD commit"));
 }
 *VAR_1 = VAR_2;

 return 0;
}
