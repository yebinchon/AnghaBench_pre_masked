
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_add_to_physmap {int gpfn; int space; scalar_t__ idx; int domid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct xen_add_to_physmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(void)
{
 struct xen_add_to_physmap VAR_4;

 VAR_4.domid = VAR_0;
 VAR_4.idx = 0;
 VAR_4.space = VAR_1;
 VAR_4.gpfn = VAR_3;
 if (FUNC_1(VAR_2, &VAR_4))
  FUNC_0();
}
