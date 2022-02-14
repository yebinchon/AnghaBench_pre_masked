
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct packed_git {int mru; struct packed_git* next; } ;
struct TYPE_2__ {int packed_git_mru; struct packed_git* packed_git; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct repository *VAR_0)
{
 struct packed_git *VAR_1;

 FUNC_0(&VAR_0->objects->packed_git_mru);

 for (VAR_1 = VAR_0->objects->packed_git; VAR_1; VAR_1 = VAR_1->next)
  FUNC_1(&VAR_1->mru, &VAR_0->objects->packed_git_mru);
}
