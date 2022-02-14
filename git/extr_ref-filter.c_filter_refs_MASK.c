
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter_cbdata {int no_contains_cache; int contains_cache; struct ref_filter* filter; struct ref_array* array; } ;
struct ref_filter {unsigned int kind; scalar_t__ merge_commit; } ;
struct ref_array {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ref_filter_cbdata*) ;
 int FUNC_3 (char*,int ,struct ref_filter_cbdata*,unsigned int) ;
 int FUNC_4 (struct ref_filter*,int ,struct ref_filter_cbdata*,unsigned int) ;
 int FUNC_5 (int ,struct ref_filter_cbdata*) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;

int FUNC_7(struct ref_array *VAR_8, struct ref_filter *VAR_9, unsigned int VAR_10)
{
 struct ref_filter_cbdata VAR_11;
 int VAR_12 = 0;
 unsigned int VAR_13 = 0;

 VAR_11.array = VAR_8;
 VAR_11.filter = VAR_9;

 if (VAR_10 & VAR_3)
  VAR_13 = 1;
 VAR_9->kind = VAR_10 & VAR_4;

 FUNC_6(&VAR_11.contains_cache);
 FUNC_6(&VAR_11.no_contains_cache);


 if (!VAR_9->kind)
  FUNC_1("filter_refs: invalid type");
 else {






  if (VAR_9->kind == VAR_1)
   VAR_12 = FUNC_3("refs/heads/", VAR_7, &VAR_11, VAR_13);
  else if (VAR_9->kind == VAR_5)
   VAR_12 = FUNC_3("refs/remotes/", VAR_7, &VAR_11, VAR_13);
  else if (VAR_9->kind == VAR_6)
   VAR_12 = FUNC_3("refs/tags/", VAR_7, &VAR_11, VAR_13);
  else if (VAR_9->kind & VAR_0)
   VAR_12 = FUNC_4(VAR_9, VAR_7, &VAR_11, VAR_13);
  if (!VAR_12 && (VAR_9->kind & VAR_2))
   FUNC_5(VAR_7, &VAR_11);
 }

 FUNC_0(&VAR_11.contains_cache);
 FUNC_0(&VAR_11.no_contains_cache);


 if (VAR_9->merge_commit)
  FUNC_2(&VAR_11);

 return VAR_12;
}
