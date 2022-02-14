
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object_entry {int preferred_base; } ;


 int VAR_0 ;
 struct object_entry* FUNC_0 (int *,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_2,
    int VAR_3)
{
 struct object_entry *VAR_4;

 VAR_4 = FUNC_0(&VAR_1, VAR_2);
 if (!VAR_4)
  return 0;

 if (VAR_3) {
  if (!VAR_4->preferred_base)
   VAR_0--;
  VAR_4->preferred_base = 1;
 }

 return 1;
}
