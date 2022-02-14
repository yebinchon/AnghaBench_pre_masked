
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct pvo_head {int dummy; } ;
struct pvo_entry {int pvo_pmap; } ;
typedef int pmap_t ;
typedef int mmu_t ;
struct TYPE_8__ {int aflags; } ;


 struct pvo_entry* FUNC_0 (struct pvo_head*) ;
 struct pvo_entry* FUNC_1 (struct pvo_entry*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct pvo_entry*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct pvo_head* FUNC_11 (TYPE_1__*) ;

void
FUNC_12(mmu_t VAR_4, vm_page_t VAR_5)
{
 struct pvo_head *VAR_6;
 struct pvo_entry *VAR_7, *VAR_8;
 pmap_t VAR_9;

 FUNC_7(&VAR_2);
 VAR_6 = FUNC_11(VAR_5);
 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_1(VAR_7, VAR_3);

  VAR_9 = VAR_7->pvo_pmap;
  FUNC_2(VAR_9);
  FUNC_5(VAR_7, -1);
  FUNC_3(VAR_9);
 }
 if ((VAR_5->aflags & VAR_0) && FUNC_6(VAR_5, VAR_1)) {
  FUNC_4(VAR_5, VAR_1);
  FUNC_10(VAR_5);
 }
 FUNC_9(VAR_5, VAR_0);
 FUNC_8(&VAR_2);
}
