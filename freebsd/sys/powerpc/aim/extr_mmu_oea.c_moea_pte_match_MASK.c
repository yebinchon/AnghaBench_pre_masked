
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int ;
struct pte {int pte_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline int
FUNC_0(struct pte *VAR_5, u_int VAR_6, vm_offset_t VAR_7, int VAR_8)
{
 return (VAR_5->pte_hi & ~VAR_2) ==
     (((VAR_6 & VAR_4) << VAR_3) |
     ((VAR_7 >> VAR_0) & VAR_1) | VAR_8);
}
