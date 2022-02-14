
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_schk {scalar_t__ siht; TYPE_1__ sch; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int (*) (scalar_t__,int *),int *) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_2(struct dn_schk *VAR_1)
{
 if (VAR_1->sch.flags & VAR_0)
  FUNC_0(VAR_1->siht, FUNC_1, ((void*)0));
 else if (VAR_1->siht)
  FUNC_1(VAR_1->siht, ((void*)0));
}
