
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_cache {int tree; } ;


 int FUNC_0 (int *,struct object_id*,struct object_id*,int *) ;
 scalar_t__ FUNC_1 (char const*,size_t,char*,struct object_id*) ;

int FUNC_2(struct notes_cache *VAR_0, struct object_id *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct object_id VAR_4;

 if (FUNC_1(VAR_2, VAR_3, "blob", &VAR_4) < 0)
  return -1;
 return FUNC_0(&VAR_0->tree, VAR_1, &VAR_4, ((void*)0));
}
