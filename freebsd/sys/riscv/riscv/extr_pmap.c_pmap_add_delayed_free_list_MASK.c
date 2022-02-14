
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct spglist {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int ss; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct spglist*,TYPE_2__*,int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(vm_page_t VAR_2, struct spglist *VAR_3,
    boolean_t VAR_4)
{

 if (VAR_4)
  VAR_2->flags |= VAR_0;
 else
  VAR_2->flags &= ~VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_1.s.ss);
}
