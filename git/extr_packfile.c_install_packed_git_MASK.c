
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct packed_git {int pack_fd; struct packed_git* next; } ;
struct TYPE_2__ {struct packed_git* packed_git; } ;


 int VAR_0 ;

void FUNC_0(struct repository *VAR_1, struct packed_git *VAR_2)
{
 if (VAR_2->pack_fd != -1)
  VAR_0++;

 VAR_2->next = VAR_1->objects->packed_git;
 VAR_1->objects->packed_git = VAR_2;
}
