
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xen_intr_handle_t ;
struct xenisrc {int * xi_cookie; int xi_refcount; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct xenisrc* FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct xenisrc*) ;

void
FUNC_7(xen_intr_handle_t *VAR_1)
{
 struct xenisrc *VAR_2;

 FUNC_0(VAR_1 != ((void*)0),
     ("NULL xen_intr_handle_t passed to xen_intr_unbind"));

 VAR_2 = FUNC_5(*VAR_1);
 *VAR_1 = ((void*)0);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_0);
 if (FUNC_4(&VAR_2->xi_refcount) == 0) {
  FUNC_3(&VAR_0);
  return;
 }
 FUNC_3(&VAR_0);

 if (VAR_2->xi_cookie != ((void*)0))
  FUNC_1(VAR_2->xi_cookie);
 FUNC_6(VAR_2);
}
