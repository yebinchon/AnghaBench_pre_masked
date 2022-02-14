
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct rev_info {int dummy; } ;
struct object_array {scalar_t__ nr; } ;
struct commit {int object; } ;


 int FUNC_0 (int *,int *,struct object_array*) ;
 int FUNC_1 (struct commit*,struct rev_info*,struct string_list*) ;
 scalar_t__ FUNC_2 (struct commit*) ;
 scalar_t__ FUNC_3 (struct object_array*) ;

__attribute__((used)) static void FUNC_4(struct object_array *VAR_0, struct rev_info *VAR_1,
   struct string_list *VAR_2)
{
 struct commit *VAR_3;
 while (VAR_0->nr) {
  VAR_3 = (struct commit *)FUNC_3(VAR_0);
  if (FUNC_2(VAR_3)) {

   FUNC_0(&VAR_3->object, ((void*)0), VAR_0);
   return;
  }
  FUNC_1(VAR_3, VAR_1, VAR_2);
 }
}
