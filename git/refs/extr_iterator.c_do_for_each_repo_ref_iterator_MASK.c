
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct ref_iterator {int flags; int oid; int refname; } ;
typedef int (* each_repo_ref_fn ) (struct repository*,int ,int ,int ,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 struct ref_iterator* VAR_2 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (struct ref_iterator*) ;

int FUNC_2(struct repository *VAR_3, struct ref_iterator *VAR_4,
      each_repo_ref_fn VAR_5, void *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct ref_iterator *VAR_9 = VAR_2;

 VAR_2 = VAR_4;
 while ((VAR_8 = FUNC_1(VAR_4)) == VAR_1) {
  VAR_7 = VAR_5(VAR_3, VAR_4->refname, VAR_4->oid, VAR_4->flags, VAR_6);
  if (VAR_7) {





   FUNC_0(VAR_4);
   goto out;
  }
 }

out:
 VAR_2 = VAR_9;
 if (VAR_8 == VAR_0)
  return -1;
 return VAR_7;
}
