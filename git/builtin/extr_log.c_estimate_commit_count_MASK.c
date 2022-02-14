
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {unsigned int flags; } ;
struct commit {TYPE_1__ object; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct commit_list *VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2) {
  struct commit *VAR_4 = VAR_2->item;
  unsigned int VAR_5 = VAR_4->object.flags;
  VAR_2 = VAR_2->next;
  if (!(VAR_5 & (VAR_0 | VAR_1)))
   VAR_3++;
 }
 return VAR_3;
}
