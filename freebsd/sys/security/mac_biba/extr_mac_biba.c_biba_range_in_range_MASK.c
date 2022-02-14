
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_rangelow; int mb_rangehigh; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct mac_biba *VAR_0, struct mac_biba *VAR_1)
{

 return (FUNC_0(&VAR_1->mb_rangehigh,
     &VAR_0->mb_rangehigh) &&
     FUNC_0(&VAR_0->mb_rangelow,
     &VAR_1->mb_rangelow));
}
