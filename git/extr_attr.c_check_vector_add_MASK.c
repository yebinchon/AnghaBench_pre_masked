
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct attr_check {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr; struct attr_check** checks; int alloc; } ;


 int FUNC_0 (struct attr_check**,scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct attr_check *VAR_1)
{
 FUNC_1();

 FUNC_0(VAR_0.checks,
     VAR_0.nr + 1,
     VAR_0.alloc);
 VAR_0.checks[VAR_0.nr++] = VAR_1;

 FUNC_2();
}
