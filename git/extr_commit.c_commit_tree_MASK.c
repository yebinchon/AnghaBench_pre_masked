
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit_extra_header {int dummy; } ;


 int FUNC_0 (struct commit_list*,struct commit_extra_header***) ;
 int FUNC_1 (char const*,size_t,struct object_id const*,struct commit_list*,struct object_id*,char const*,char const*,struct commit_extra_header*) ;
 int FUNC_2 (struct commit_extra_header*) ;

int FUNC_3(const char *VAR_0, size_t VAR_1, const struct object_id *VAR_2,
  struct commit_list *VAR_3, struct object_id *VAR_4,
  const char *VAR_5, const char *VAR_6)
{
 struct commit_extra_header *VAR_7 = ((void*)0), **VAR_8 = &VAR_7;
 int VAR_9;

 FUNC_0(VAR_3, &VAR_8);
 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_7);
 return VAR_9;
}
