
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_schk {scalar_t__ siht; TYPE_1__ sch; } ;
struct copy_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct copy_args*) ;
 int FUNC_1 (scalar_t__,int (*) (scalar_t__,struct copy_args*),struct copy_args*) ;

__attribute__((used)) static int
FUNC_2(struct copy_args *VAR_1, struct dn_schk *VAR_2, int VAR_3)
{
 if (VAR_2->sch.flags & VAR_0)
  FUNC_1(VAR_2->siht, FUNC_0, VAR_1);
 else if (VAR_2->siht)
  FUNC_0(VAR_2->siht, VAR_1);
 return 0;
}
