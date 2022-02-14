
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_add_to_physmap {int gpfn; int space; scalar_t__ idx; int domid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xen_add_to_physmap*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct xen_add_to_physmap VAR_8;

 if (FUNC_4()) {




  return;
 }

 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_1(VAR_5, VAR_3, VAR_2);
  if (VAR_1 == ((void*)0))
   FUNC_2("Unable to allocate Xen shared info page");
 }

 VAR_8.domid = VAR_0;
 VAR_8.idx = 0;
 VAR_8.space = VAR_6;
 VAR_8.gpfn = FUNC_3(VAR_1) >> VAR_4;
 if (FUNC_0(VAR_7, &VAR_8))
  FUNC_2("HYPERVISOR_memory_op failed");
}
