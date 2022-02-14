
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int uint8_t ;
typedef TYPE_3__* pv_entry_t ;
typedef int mmu_t ;
struct TYPE_11__ {int pv_pmap; int pv_va; } ;
struct TYPE_9__ {int pv_list; } ;
struct TYPE_10__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_9(mmu_t VAR_3, vm_page_t VAR_4)
{
 pv_entry_t VAR_5, VAR_6;
 uint8_t VAR_7;

 FUNC_6(&VAR_2);
 for (VAR_5 = FUNC_3(&VAR_4->md.pv_list); VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = FUNC_4(VAR_5, VAR_1);

  FUNC_0(VAR_5->pv_pmap);
  VAR_7 = FUNC_2(VAR_5->pv_pmap);
  FUNC_5(VAR_3, VAR_5->pv_pmap, VAR_5->pv_va, VAR_7);
  FUNC_1(VAR_5->pv_pmap);
 }
 FUNC_8(VAR_4, VAR_0);
 FUNC_7(&VAR_2);
}
