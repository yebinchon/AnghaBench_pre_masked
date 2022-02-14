
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pvo_entry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int64_t
FUNC_5(mmu_t VAR_6, struct pvo_entry *VAR_7)
{
 int64_t VAR_8;

 FUNC_3(&VAR_4);
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2--);
  FUNC_4(&VAR_4);
  return (-1);
 }

 FUNC_1(VAR_5, VAR_7->pvo_pte.slot, 0, 0);
 FUNC_4(&VAR_4);
 FUNC_0(VAR_3--);

 return (VAR_8 & (VAR_1 | VAR_0));
}
