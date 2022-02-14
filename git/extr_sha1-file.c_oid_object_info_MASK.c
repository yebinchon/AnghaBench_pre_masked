
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_info {int* typep; unsigned long* sizep; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct object_info VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct repository*,struct object_id const*,struct object_info*,int ) ;

int FUNC_1(struct repository *VAR_2,
      const struct object_id *VAR_3,
      unsigned long *VAR_4)
{
 enum object_type VAR_5;
 struct object_info VAR_6 = VAR_0;

 VAR_6.typep = &VAR_5;
 VAR_6.sizep = VAR_4;
 if (FUNC_0(VAR_2, VAR_3, &VAR_6,
          VAR_1) < 0)
  return -1;
 return VAR_5;
}
