
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (struct repository*,struct object_id const*,int *) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_1, void *VAR_2)
{
 struct repository *VAR_3 = VAR_2;

 enum object_type VAR_4 = FUNC_0(VAR_3, VAR_1, ((void*)0));

 return VAR_4 != VAR_0;
}
