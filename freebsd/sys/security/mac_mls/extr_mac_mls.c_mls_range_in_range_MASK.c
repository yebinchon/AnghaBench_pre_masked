
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int mm_rangelow; int mm_rangehigh; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct mac_mls *VAR_0, struct mac_mls *VAR_1)
{

 return (FUNC_0(&VAR_1->mm_rangehigh,
     &VAR_0->mm_rangehigh) &&
     FUNC_0(&VAR_0->mm_rangelow,
     &VAR_1->mm_rangelow));
}
