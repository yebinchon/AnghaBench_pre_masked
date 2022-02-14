
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit_list*) ;

__attribute__((used)) static inline int FUNC_1(struct commit_list *VAR_2, int VAR_3)
{



 if (VAR_2->item->object.flags & VAR_1)
  return 0;
 if (VAR_0)
  return 0;




 switch (2 * FUNC_0(VAR_2) - VAR_3) {
 case -1: case 0: case 1:
  return 1;
 default:
  return 0;
 }
}
