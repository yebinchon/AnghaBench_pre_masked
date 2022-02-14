
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct rwlock {int dummy; } ;
struct TYPE_9__ {int pv_list; } ;
struct TYPE_7__ {int pv_list; } ;
struct TYPE_8__ {int oflags; int flags; TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 struct rwlock* FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (struct rwlock*) ;
 int FUNC_5 (struct rwlock*) ;

bool
FUNC_6(vm_page_t VAR_2)
{
 struct rwlock *VAR_3;
 bool VAR_4;

 if ((VAR_2->oflags & VAR_1) != 0)
  return (0);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 VAR_4 = !FUNC_0(&VAR_2->md.pv_list) ||
     ((VAR_2->flags & VAR_0) == 0 &&
     !FUNC_0(&FUNC_3(FUNC_1(VAR_2))->pv_list));
 FUNC_5(VAR_3);
 return (VAR_4);
}
