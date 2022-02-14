
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct object_directory {struct object_directory* next; } ;
struct TYPE_2__ {scalar_t__ packed_git_initialized; scalar_t__ approximate_object_count_valid; struct object_directory* odb; } ;


 int FUNC_0 (struct object_directory*) ;
 int FUNC_1 (struct repository*) ;

void FUNC_2(struct repository *VAR_0)
{
 struct object_directory *VAR_1;

 for (VAR_1 = VAR_0->objects->odb; VAR_1; VAR_1 = VAR_1->next)
  FUNC_0(VAR_1);

 VAR_0->objects->approximate_object_count_valid = 0;
 VAR_0->objects->packed_git_initialized = 0;
 FUNC_1(VAR_0);
}
