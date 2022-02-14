
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_info {int* typep; unsigned long* sizep; void** contentp; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct object_info VAR_0 ;
 scalar_t__ FUNC_0 (struct repository*,struct object_id const*,struct object_info*,int ) ;

__attribute__((used)) static void *FUNC_1(struct repository *VAR_1,
    const struct object_id *VAR_2,
    enum object_type *VAR_3,
    unsigned long *VAR_4)
{
 struct object_info VAR_5 = VAR_0;
 void *VAR_6;
 VAR_5.typep = VAR_3;
 VAR_5.sizep = VAR_4;
 VAR_5.contentp = &VAR_6;

 if (FUNC_0(VAR_1, VAR_2, &VAR_5, 0) < 0)
  return ((void*)0);
 return VAR_6;
}
