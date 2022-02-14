
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {struct ref_store* refs; int gitdir; } ;
struct ref_store {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ref_store* FUNC_1 (int ,int ) ;

struct ref_store *FUNC_2(struct repository *VAR_1)
{
 if (VAR_1->refs)
  return VAR_1->refs;

 if (!VAR_1->gitdir)
  FUNC_0("attempting to get main_ref_store outside of repository");

 VAR_1->refs = FUNC_1(VAR_1->gitdir, VAR_0);
 return VAR_1->refs;
}
