
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_flags; int mb_effective; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mac_biba *VAR_1, struct mac_biba *VAR_2)
{
 FUNC_0((VAR_1->mb_flags & VAR_0) != 0,
     ("biba_dominate_effective: a not effective"));
 FUNC_0((VAR_2->mb_flags & VAR_0) != 0,
     ("biba_dominate_effective: b not effective"));

 return (FUNC_1(&VAR_1->mb_effective, &VAR_2->mb_effective));
}
