
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int sorting; int limited; int * enqueue; int * get_next; scalar_t__ walking; } ;
typedef TYPE_1__ git_revwalk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(git_revwalk *VAR_6, unsigned int VAR_7)
{
 FUNC_0(VAR_6);

 if (VAR_6->walking)
  FUNC_1(VAR_6);

 VAR_6->sorting = VAR_7;

 if (VAR_6->sorting & VAR_1) {
  VAR_6->get_next = &VAR_4;
  VAR_6->enqueue = &VAR_2;
 } else {
  VAR_6->get_next = &VAR_5;
  VAR_6->enqueue = &VAR_3;
 }

 if (VAR_6->sorting != VAR_0)
  VAR_6->limited = 1;
}
