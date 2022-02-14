
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int repo; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int FUNC_0 (struct rev_info*,struct object*,char*) ;
 scalar_t__ FUNC_1 (char*,struct object_id*) ;
 struct object* FUNC_2 (int ,struct object_id*) ;

void FUNC_3(struct rev_info *VAR_0)
{
 struct object_id VAR_1;
 struct object *VAR_2;
 if (FUNC_1("HEAD", &VAR_1))
  return;
 VAR_2 = FUNC_2(VAR_0->repo, &VAR_1);
 if (!VAR_2)
  return;
 FUNC_0(VAR_0, VAR_2, "HEAD");
}
