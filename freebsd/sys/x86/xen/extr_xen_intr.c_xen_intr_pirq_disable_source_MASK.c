
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {scalar_t__ xi_edgetrigger; int xi_port; } ;
struct intsrc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intsrc*) ;

__attribute__((used)) static void
FUNC_2(struct intsrc *VAR_1, int VAR_2)
{
 struct xenisrc *VAR_3;

 VAR_3 = (struct xenisrc *)VAR_1;

 if (VAR_3->xi_edgetrigger == 0)
  FUNC_0(VAR_3->xi_port);
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1);
}
