
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_flags; int mb_rangelow; int mb_effective; int mb_rangehigh; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mac_biba *VAR_2, struct mac_biba *VAR_3)
{

 FUNC_0((VAR_2->mb_flags & VAR_0) != 0,
     ("biba_effective_in_range: a not effective"));
 FUNC_0((VAR_3->mb_flags & VAR_1) != 0,
     ("biba_effective_in_range: b not range"));

 return (FUNC_1(&VAR_3->mb_rangehigh,
     &VAR_2->mb_effective) &&
     FUNC_1(&VAR_2->mb_effective,
     &VAR_3->mb_rangelow));

 return (1);
}
