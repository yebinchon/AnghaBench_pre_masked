
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ exclude_promisor_objects; scalar_t__ ignore_missing; int repo; } ;
struct object_id {int dummy; } ;
struct object {unsigned int flags; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 struct commit* FUNC_2 (int ,struct object_id const*) ;
 scalar_t__ FUNC_3 (int ,struct object_id const*,int *) ;
 struct object* FUNC_4 (int ,struct object_id const*) ;
 int FUNC_5 (int ,struct commit*) ;

__attribute__((used)) static struct object *FUNC_6(struct rev_info *VAR_1, const char *VAR_2,
        const struct object_id *VAR_3,
        unsigned int VAR_4)
{
 struct object *VAR_5;





 if (FUNC_3(VAR_1->repo, VAR_3, ((void*)0)) == VAR_0) {
  struct commit *VAR_6 = FUNC_2(VAR_1->repo, VAR_3);
  if (!FUNC_5(VAR_1->repo, VAR_6))
   VAR_5 = (struct object *) VAR_6;
  else
   VAR_5 = ((void*)0);
 } else {
  VAR_5 = FUNC_4(VAR_1->repo, VAR_3);
 }

 if (!VAR_5) {
  if (VAR_1->ignore_missing)
   return VAR_5;
  if (VAR_1->exclude_promisor_objects && FUNC_1(VAR_3))
   return ((void*)0);
  FUNC_0("bad object %s", VAR_2);
 }
 VAR_5->flags |= VAR_4;
 return VAR_5;
}
