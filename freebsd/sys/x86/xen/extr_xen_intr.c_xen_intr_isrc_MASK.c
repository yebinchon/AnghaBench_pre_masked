
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xen_intr_handle_t ;
struct xenisrc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static struct xenisrc *
FUNC_2(xen_intr_handle_t VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_3 = *(int *)VAR_2;
 FUNC_0(VAR_3 >= VAR_0 &&
     VAR_3 < (VAR_0 + VAR_1),
     ("Xen interrupt vector is out of range"));

 return ((struct xenisrc *)FUNC_1(VAR_3));
}
