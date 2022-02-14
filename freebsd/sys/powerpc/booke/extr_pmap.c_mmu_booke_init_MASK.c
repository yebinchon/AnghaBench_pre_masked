
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pv_entry {int dummy; } ;
typedef int mmu_t ;
struct TYPE_2__ {int v_page_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (char*,int,int *,int *,int *,int *,int ,int) ;
 int FUNC_4 (void*,int) ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static void
FUNC_5(mmu_t VAR_13)
{
 int VAR_14 = VAR_1;






 VAR_11 = FUNC_3("PV ENTRY", sizeof(struct pv_entry), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_4, VAR_6 | VAR_5);

 FUNC_0("vm.pmap.shpgperproc", &VAR_14);
 VAR_10 = VAR_14 * VAR_7 + VAR_12.v_page_count;

 FUNC_0("vm.pmap.pv_entries", &VAR_10);
 VAR_9 = 9 * (VAR_10 / 10);

 FUNC_4(VAR_11, VAR_10);


 FUNC_2(VAR_11, VAR_2);


 VAR_8 = FUNC_3("pmap root", VAR_0,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_3, VAR_6);


 FUNC_1();
}
