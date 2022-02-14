
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {unsigned int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct commit_list*) ;

__attribute__((used)) static struct commit_list *FUNC_1(struct commit_list *VAR_1, int VAR_2)
{
 struct commit_list *VAR_3, *VAR_4;
 int VAR_5 = -1;

 VAR_4 = VAR_1;
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  int VAR_6;
  unsigned VAR_7 = VAR_3->item->object.flags;

  if (VAR_7 & VAR_0)
   continue;
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_2 - VAR_6 < VAR_6)
   VAR_6 = VAR_2 - VAR_6;
  if (VAR_6 > VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_6;
  }
 }

 return VAR_4;
}
