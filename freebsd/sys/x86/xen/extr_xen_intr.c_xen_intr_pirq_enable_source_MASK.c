
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {scalar_t__ xi_edgetrigger; int xi_port; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct intsrc *VAR_0)
{
 struct xenisrc *VAR_1;

 VAR_1 = (struct xenisrc *)VAR_0;

 if (VAR_1->xi_edgetrigger == 0)
  FUNC_0(VAR_1->xi_port);
}
