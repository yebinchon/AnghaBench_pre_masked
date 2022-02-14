
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 void* FUNC_1 (struct repository*,struct tree_desc*,struct object_id*) ;
 scalar_t__ FUNC_2 (struct repository*,char const*,struct object_id*) ;

__attribute__((used)) static void *FUNC_3(struct repository *VAR_0,
     struct tree_desc *VAR_1,
     const char *VAR_2)
{
 struct object_id VAR_3;
 void *VAR_4;

 if (FUNC_2(VAR_0, VAR_2, &VAR_3))
  FUNC_0("unknown rev %s", VAR_2);
 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4)
  FUNC_0("%s is not a tree", VAR_2);
 return VAR_4;
}
