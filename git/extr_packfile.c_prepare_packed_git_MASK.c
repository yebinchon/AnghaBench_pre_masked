
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct object_directory {int path; struct object_directory* next; } ;
struct TYPE_2__ {int packed_git_initialized; struct object_directory* odb; } ;


 int FUNC_0 (struct repository*) ;
 int FUNC_1 (struct repository*,int ,int) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*,int ,int) ;
 int FUNC_4 (struct repository*) ;

__attribute__((used)) static void FUNC_5(struct repository *VAR_0)
{
 struct object_directory *VAR_1;

 if (VAR_0->objects->packed_git_initialized)
  return;

 FUNC_0(VAR_0);
 for (VAR_1 = VAR_0->objects->odb; VAR_1; VAR_1 = VAR_1->next) {
  int VAR_2 = (VAR_1 == VAR_0->objects->odb);
  FUNC_1(VAR_0, VAR_1->path, VAR_2);
  FUNC_3(VAR_0, VAR_1->path, VAR_2);
 }
 FUNC_4(VAR_0);

 FUNC_2(VAR_0);
 VAR_0->objects->packed_git_initialized = 1;
}
