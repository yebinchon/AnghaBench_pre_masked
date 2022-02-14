
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pte {int pte_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pte*,struct pte*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline void
FUNC_4(struct pte *VAR_4, struct pte *VAR_5, vm_offset_t VAR_6)
{

 FUNC_1(&VAR_3, VAR_0);
 VAR_5->pte_hi &= ~VAR_1;




 FUNC_2();




 VAR_4->pte_hi &= ~VAR_1;

 FUNC_3(VAR_6);




 FUNC_0(VAR_4, VAR_5);
 VAR_2--;
}
