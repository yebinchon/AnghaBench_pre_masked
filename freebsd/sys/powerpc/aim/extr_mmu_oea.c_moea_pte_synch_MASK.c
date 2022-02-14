
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pte {int pte_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct pte *VAR_4, struct pte *VAR_5)
{

 FUNC_0(&VAR_3, VAR_0);
 VAR_5->pte_lo |= VAR_4->pte_lo & (VAR_2 | VAR_1);
}
