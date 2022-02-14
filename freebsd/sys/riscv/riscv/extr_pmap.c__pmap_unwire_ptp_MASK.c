
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_6__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,struct spglist*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,TYPE_1__*,struct spglist*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(pmap_t VAR_3, vm_offset_t VAR_4, vm_page_t VAR_5, struct spglist *VAR_6)
{
 vm_paddr_t VAR_7;

 FUNC_1(VAR_3, VAR_0);
 if (VAR_5->pindex >= VAR_1) {
  pd_entry_t *VAR_8;
  VAR_8 = FUNC_7(VAR_3, VAR_4);
  FUNC_4(VAR_8);
  FUNC_5(VAR_3, FUNC_8(VAR_4), 0);
 } else {
  pd_entry_t *VAR_9;
  VAR_9 = FUNC_9(VAR_3, VAR_4);
  FUNC_4(VAR_9);
 }
 FUNC_11(VAR_3, 1);
 if (VAR_5->pindex < VAR_1) {
  pd_entry_t *VAR_10;
  vm_page_t VAR_11;

  VAR_10 = FUNC_7(VAR_3, VAR_4);
  VAR_7 = FUNC_2(FUNC_10(VAR_10));
  VAR_11 = FUNC_0(VAR_7);
  FUNC_12(VAR_3, VAR_4, VAR_11, VAR_6);
 }
 FUNC_6(VAR_3, VAR_4);

 FUNC_13(1);





 FUNC_3(VAR_5, VAR_6, VAR_2);
}
