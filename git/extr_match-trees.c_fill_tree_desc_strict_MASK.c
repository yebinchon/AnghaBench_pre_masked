
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tree_desc*,void*,unsigned long) ;
 int FUNC_2 (struct object_id const*) ;
 void* FUNC_3 (struct object_id const*,int*,unsigned long*) ;

__attribute__((used)) static void *FUNC_4(struct tree_desc *VAR_1,
       const struct object_id *VAR_2)
{
 void *VAR_3;
 enum object_type VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_3(VAR_2, &VAR_4, &VAR_5);
 if (!VAR_3)
  FUNC_0("unable to read tree (%s)", FUNC_2(VAR_2));
 if (VAR_4 != VAR_0)
  FUNC_0("%s is not a tree", FUNC_2(VAR_2));
 FUNC_1(VAR_1, VAR_3, VAR_5);
 return VAR_3;
}
