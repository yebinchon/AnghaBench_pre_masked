
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
struct ref {int expect_old_sha1; int old_oid_expect; int name; } ;
struct push_cas_option {int nr; int use_tracking_for_rest; struct push_cas* entry; } ;
struct push_cas {int expect; int use_tracking; int refname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct remote*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct push_cas_option *VAR_0,
        struct remote *VAR_1,
        struct ref *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  struct push_cas *VAR_4 = &VAR_0->entry[VAR_3];
  if (!FUNC_2(VAR_4->refname, VAR_2->name))
   continue;
  VAR_2->expect_old_sha1 = 1;
  if (!VAR_4->use_tracking)
   FUNC_1(&VAR_2->old_oid_expect, &VAR_4->expect);
  else if (FUNC_3(VAR_1, VAR_2->name, &VAR_2->old_oid_expect))
   FUNC_0(&VAR_2->old_oid_expect);
  return;
 }


 if (!VAR_0->use_tracking_for_rest)
  return;

 VAR_2->expect_old_sha1 = 1;
 if (FUNC_3(VAR_1, VAR_2->name, &VAR_2->old_oid_expect))
  FUNC_0(&VAR_2->old_oid_expect);
}
