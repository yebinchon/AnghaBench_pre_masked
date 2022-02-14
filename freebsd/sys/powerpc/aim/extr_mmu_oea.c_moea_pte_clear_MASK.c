
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pte {int pte_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct pte *VAR_2, vm_offset_t VAR_3, int VAR_4)
{

 FUNC_0(&VAR_1, VAR_0);




 VAR_2->pte_lo &= ~VAR_4;
 FUNC_1(VAR_3);
}
