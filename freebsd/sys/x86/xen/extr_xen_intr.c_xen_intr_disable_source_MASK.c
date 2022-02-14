
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {int xi_masked; int xi_port; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct intsrc *VAR_0, int VAR_1)
{
 struct xenisrc *VAR_2;

 VAR_2 = (struct xenisrc *)VAR_0;
 VAR_2->xi_masked = !!FUNC_0(VAR_2->xi_port);
}
