
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct handle_one_ref_cb {int repo; struct commit_list** list; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 struct object* FUNC_1 (int ,struct object*,char const*,int ) ;
 struct object* FUNC_2 (int ,struct object_id const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const struct object_id *VAR_3,
     int VAR_4, void *VAR_5)
{
 struct handle_one_ref_cb *VAR_6 = VAR_5;
 struct commit_list **VAR_7 = VAR_6->list;
 struct object *VAR_8 = FUNC_2(VAR_6->repo, VAR_3);
 if (!VAR_8)
  return 0;
 if (VAR_8->type == VAR_1) {
  VAR_8 = FUNC_1(VAR_6->repo, VAR_8, VAR_2,
       FUNC_3(VAR_2));
  if (!VAR_8)
   return 0;
 }
 if (VAR_8->type != VAR_0)
  return 0;
 FUNC_0((struct commit *)VAR_8, VAR_7);
 return 0;
}
