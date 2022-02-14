
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int mm_flags; int mm_rangelow; int mm_effective; int mm_rangehigh; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mac_mls *VAR_2, struct mac_mls *VAR_3)
{

 FUNC_0((VAR_2->mm_flags & VAR_0) != 0,
     ("mls_effective_in_range: a not effective"));
 FUNC_0((VAR_3->mm_flags & VAR_1) != 0,
     ("mls_effective_in_range: b not range"));

 return (FUNC_1(&VAR_3->mm_rangehigh,
     &VAR_2->mm_effective) &&
     FUNC_1(&VAR_2->mm_effective,
     &VAR_3->mm_rangelow));

 return (1);
}
