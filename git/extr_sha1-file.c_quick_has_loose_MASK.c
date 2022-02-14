
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct object_id {int dummy; } ;
struct object_directory {struct object_directory* next; } ;
struct TYPE_2__ {struct object_directory* odb; } ;


 int FUNC_0 (struct object_directory*,struct object_id const*) ;
 scalar_t__ FUNC_1 (int ,struct object_id const*) ;
 int FUNC_2 (struct repository*) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_0,
      const struct object_id *VAR_1)
{
 struct object_directory *VAR_2;

 FUNC_2(VAR_0);
 for (VAR_2 = VAR_0->objects->odb; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_1(FUNC_0(VAR_2, VAR_1), VAR_1) >= 0)
   return 1;
 }
 return 0;
}
