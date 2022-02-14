
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct ref_store {int dummy; } ;
struct ref_iterator {int dummy; } ;
typedef int each_repo_ref_fn ;


 int FUNC_0 (struct repository*,struct ref_iterator*,int ,void*) ;
 struct ref_store* FUNC_1 (struct repository*) ;
 struct ref_iterator* FUNC_2 (struct ref_store*,char const*,int,int) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_0, const char *VAR_1,
    each_repo_ref_fn VAR_2, int VAR_3, int VAR_4,
    void *VAR_5)
{
 struct ref_iterator *VAR_6;
 struct ref_store *VAR_7 = FUNC_1(VAR_0);

 if (!VAR_7)
  return 0;

 VAR_6 = FUNC_2(VAR_7, VAR_1, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_6, VAR_2, VAR_5);
}
