
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {scalar_t__ with_commit_tag_algo; } ;
struct contains_cache {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct commit*,struct commit_list*,struct contains_cache*) ;
 int FUNC_1 (struct commit*,struct commit_list*) ;

int FUNC_2(struct ref_filter *VAR_1, struct commit *VAR_2,
      struct commit_list *VAR_3, struct contains_cache *VAR_4)
{
 if (VAR_1->with_commit_tag_algo)
  return FUNC_0(VAR_2, VAR_3, VAR_4) == VAR_0;
 return FUNC_1(VAR_2, VAR_3);
}
