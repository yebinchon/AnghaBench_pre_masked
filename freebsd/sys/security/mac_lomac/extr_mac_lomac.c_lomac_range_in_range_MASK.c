
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_rangelow; int ml_rangehigh; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct mac_lomac *VAR_0, struct mac_lomac *VAR_1)
{

 return (FUNC_0(&VAR_1->ml_rangehigh,
     &VAR_0->ml_rangehigh) &&
     FUNC_0(&VAR_0->ml_rangelow,
     &VAR_1->ml_rangelow));
}
