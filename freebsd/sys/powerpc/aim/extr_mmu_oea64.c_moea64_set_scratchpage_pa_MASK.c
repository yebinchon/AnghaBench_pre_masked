
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int uint64_t ;
struct TYPE_2__ {int pa; } ;
struct pvo_entry {int pvo_pmap; TYPE_1__ pvo_pte; } ;
typedef int mmu_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct pvo_entry*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_4 ;
 struct pvo_entry** VAR_5 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static __inline
void FUNC_7(mmu_t VAR_6, int VAR_7, vm_paddr_t VAR_8)
{
 struct pvo_entry *VAR_9;

 FUNC_0(!VAR_3, ("Using OEA64 scratchpage with a direct map!"));
 FUNC_6(&VAR_4, VAR_0);

 VAR_9 = VAR_5[VAR_7];
 FUNC_2(VAR_9->pvo_pmap);
 VAR_9->pvo_pte.pa =
     FUNC_5(VAR_8, VAR_2) | (uint64_t)VAR_8;
 FUNC_1(VAR_6, VAR_9, VAR_1);
 FUNC_3(VAR_9->pvo_pmap);
 FUNC_4();
}
