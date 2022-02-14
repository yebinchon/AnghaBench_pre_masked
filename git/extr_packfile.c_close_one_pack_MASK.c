
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_git {int pack_fd; struct packed_git* next; } ;
struct pack_window {int dummy; } ;
struct TYPE_4__ {TYPE_1__* objects; } ;
struct TYPE_3__ {struct packed_git* packed_git; } ;


 int FUNC_0 (struct packed_git*) ;
 int FUNC_1 (struct packed_git*,struct packed_git**,struct pack_window**,int*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct packed_git *VAR_1, *VAR_2 = ((void*)0);
 struct pack_window *VAR_3 = ((void*)0);
 int VAR_4 = 1;

 for (VAR_1 = VAR_0->objects->packed_git; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->pack_fd == -1)
   continue;
  FUNC_1(VAR_1, &VAR_2, &VAR_3, &VAR_4);
 }

 if (VAR_2)
  return FUNC_0(VAR_2);

 return 0;
}
