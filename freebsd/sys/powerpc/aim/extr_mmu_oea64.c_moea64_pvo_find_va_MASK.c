
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct pvo_entry {int pvo_vaddr; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pmap_pvo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct pvo_entry* FUNC_1 (int ,int *,struct pvo_entry*) ;
 int VAR_2 ;

__attribute__((used)) static struct pvo_entry *
FUNC_2(pmap_t VAR_3, vm_offset_t VAR_4)
{
 struct pvo_entry VAR_5;

 FUNC_0(VAR_3, VAR_1);

 VAR_5.pvo_vaddr = VAR_4 & ~VAR_0;
 return (FUNC_1(VAR_2, &VAR_3->pmap_pvo, &VAR_5));
}
